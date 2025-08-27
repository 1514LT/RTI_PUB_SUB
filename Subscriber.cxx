#include "Subscriber.hpp"
#include "MultiDomainNode.hpp"

Subscriber::Subscriber() : m_participant(nullptr), m_node(nullptr)
{
}

Subscriber::~Subscriber()
{
  // m_readers.clear();
  if (m_participant) {
    delete m_participant;
    m_participant = nullptr;
  }
}

bool Subscriber::init(int domaimId,bool pubNeed)
{
  if(pubNeed)
  {
    pub_ = std::make_shared<Publisher>();
    pub_->init(domaimId);
    pub_->addTaskResponsePacketTopic("TaskResponseTopic");
  }

  auto participant_qos = dds::domain::qos::DomainParticipantQos();
  #ifdef DISCOVER
  // rti::core::policy::Discovery discover;
  // dds::core::StringSeq discovery_servers = {
  //       "0@udpv4://192.168.5.165:8080"
  //   };
  // discover.initial_peers(discovery_servers);
  // participant_qos << discover;
  rti::core::policy::Property discovery_props;
  discovery_props.set({
    {"dds.discovery.enable_discovery_server", "1"},
    {"dds.discovery.participant_role", "DISCOVERY_CLIENT"},
    {"dds.discovery.servers", "0@udpv4://192.168.5.165:8080"},
    {"dds.discovery.client_announcement_period", "5.0"},
    {"dds.discovery.client_heartbeat_period", "1.0"},
  });
  participant_qos << discovery_props;
  #endif
  #ifdef SHM
  std::cout << "SHM" << std::endl;
  participant_qos << rti::core::policy::TransportBuiltin::Shmem();
  rti::core::policy::Property shm_properties;
  shm_properties.set({
    {"dds.transport.builtin.shmem.received_message_count_max", "64"},
    {"dds.transport.builtin.shmem.receive_buffer_size", "1048576"} }
    );
  participant_qos << shm_properties;
  #endif
  #ifdef UDP_V4
  std::cout << "UDP_V4" << std::endl;
  participant_qos << rti::core::policy::TransportBuiltin::UDPv4();
  #endif
  #ifdef TCP_V4
  std::cout << "TCP_V4" << std::endl;
  participant_qos << rti::core::policy::TransportBuiltin::None();
  rti::core::policy::Property tcp_server_props;
  tcp_server_props.set({
    {"dds.transport.load_plugins", "dds.transport.TCPv4.tcp1"},
    {"dds.transport.TCPv4.tcp1.library", "nddstransporttcp"},
    {"dds.transport.TCPv4.tcp1.create_function", "NDDS_Transport_TCPv4_create"},
    {"dds.transport.TCPv4.tcp1.parent.classid", "NDDS_TRANSPORT_CLASSID_TCPV4_LAN"},
    {"dds.transport.TCPv4.tcp1.server_bind_port", "7400"},
  });
  participant_qos << tcp_server_props;
  /*export NDDS_DISCOVERY_PEERS="192.168.5.165:7400,192.168.5.165:7401"*/
  #endif
  m_participant = new dds::domain::DomainParticipant(domaimId,participant_qos);
  return m_participant != nullptr;
}
// cmd
bool Subscriber::addCmdPacketTopic(const std::string& topicName)
{
  return initSubType<cmd::ControlCommand>(topicName);
}

// task
bool Subscriber::addTaskRequestPacketTopic(const std::string& topicName)
{
  return initSubType<task::TaskRequestMessage>(topicName);
}
bool Subscriber::addTaskResponsePacketTopic(const std::string& topicName)
{
  return initSubType<task::TaskResponseMessage>(topicName);
}

// heartbeat
bool Subscriber::addHeartBeatTopic(const std::string& topicName)
{
  return initSubType<heartbeat::HeartbeatMessage>(topicName);
}

template <typename T>
bool Subscriber::initSubType(std::string topicName)
{
  dds::topic::Topic<T> topic(*m_participant,topicName);
  dds::sub::Subscriber subscriber(*m_participant);
  dds::sub::qos::DataReaderQos qos;
  qos 
    << dds::core::policy::Reliability::Reliable()
    << dds::core::policy::History::KeepAll()
    << dds::core::policy::Durability::TransientLocal();
  auto dataReader = std::make_shared<ReaderHolder<T>>(subscriber, topic,qos);
  m_readers[topicName] = dataReader;
  std::thread listener_thread([this, dataReader, topicName]() {
    this->listenToTopic(dataReader, topicName);
  });
  listener_thread.detach();
  std::cout << "start listen thread: " << topicName << std::endl;
  return true;
}
template <typename T>
void Subscriber::listenToTopic(std::shared_ptr<ReaderHolder<T>> dataReader, const std::string& topicName)
{
    dds::sub::DataReader<T>& reader = dataReader->getReader();
    dds::sub::cond::ReadCondition read_condition(reader, dds::sub::status::DataState::any());
    dds::core::cond::WaitSet waitset;
    waitset += read_condition;
    
    while (!app::shutdown_requested.load()) {
        try {
            auto conditions = waitset.wait(dds::core::Duration::from_millisecs(100));
            if (!conditions.empty()) {
                HandleMsg(reader);
            }
        } catch (const dds::core::TimeoutError&) {
            continue;
        }
    }
    std::cout << "stop listen: " << topicName << std::endl;
}
template <typename T>
void Subscriber::HandleMsg(dds::sub::DataReader<T> reader)
{
  std::cout << "recve topic: " << reader.topic_description().name() << std::endl;
  dds::sub::LoanedSamples<T> samples = reader.take();

  for (const auto& sample : samples)
  {
    if (sample.info().valid())
    {
      std::cout << sample.data() << std::endl;
    }
    else
    {
      std::cout << sample.info().state().instance_state() << std::endl;
    }
  }
}

template <>
void Subscriber::HandleMsg<cmd::ControlCommand>(dds::sub::DataReader<cmd::ControlCommand> reader)
{
  std::cout << "recve ControlCommand topic: " << reader.topic_description().name() << std::endl;
  dds::sub::LoanedSamples<cmd::ControlCommand> samples = reader.take();

  for (const auto& sample : samples)
  {
    if (sample.info().valid())
    {
      std::cout << "Command received: " << sample.data() << std::endl;
      
      if (m_node && m_node->getCmdHandler()) {
        m_node->getCmdHandler()(sample.data());
      }
    }
  }
}


template <>
void Subscriber::HandleMsg<task::TaskRequestMessage>(dds::sub::DataReader<task::TaskRequestMessage> reader)
{
  std::cout << "recve TaskRequest topic: " << reader.topic_description().name() << std::endl;
  dds::sub::LoanedSamples<task::TaskRequestMessage> samples = reader.take();

  for (const auto& sample : samples)
  {
    if (sample.info().valid())
    {
      if (m_node && m_node->getTaskRequestHandler()) {
        auto response = m_node->getTaskRequestHandler()(sample.data());
        if(response.result().status() != task::TaskStatus_def::COMPLETED)
        {
          continue;
        }
        std::cout << "Task request received: " << sample.data() << std::endl;
        if (pub_) {
          pub_->sendMsg("TaskResponseTopic", response);
        }
      }
    }
  }
}

template <>
void Subscriber::HandleMsg<task::TaskResponseMessage>(dds::sub::DataReader<task::TaskResponseMessage> reader)
{
  std::cout << "recve TaskResponse topic: " << reader.topic_description().name() << std::endl;
  dds::sub::LoanedSamples<task::TaskResponseMessage> samples = reader.take();

  for (const auto& sample : samples)
  {
    if (sample.info().valid())
    {
      std::cout << "Task response received: " << sample.data() << std::endl;
      
      if (m_node && m_node->getTaskResponseHandler()) {
        m_node->getTaskResponseHandler()(sample.data());
      }
    }
  }
}

template <>
void Subscriber::HandleMsg<heartbeat::HeartbeatMessage>(dds::sub::DataReader<heartbeat::HeartbeatMessage> reader)
{
  std::cout << "recve Heartbeat topic: " << reader.topic_description().name() << std::endl;
  dds::sub::LoanedSamples<heartbeat::HeartbeatMessage> samples = reader.take();

  for (const auto& sample : samples)
  {
    if (sample.info().valid())
    {
      std::cout << "Heartbeat received " << sample.data() << std::endl;
      
      if (m_node && m_node->getHeartbeatHandler()) {
        m_node->getHeartbeatHandler()(sample.data());
      }
    }
  }
}