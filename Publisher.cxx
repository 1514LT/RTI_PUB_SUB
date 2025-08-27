#include "Publisher.hpp"

Publisher::Publisher() : m_participant(nullptr)
{
}

Publisher::~Publisher()
{
  // m_writers.clear();
  
  if (m_participant) {
    delete m_participant;
    m_participant = nullptr;
  }
}
// cmd
bool Publisher::addCmdPacketTopic(const std::string& topicName)
{
  return initPubType<cmd::ControlCommand>(topicName);
}

// task
bool Publisher::addTaskRequestPacketTopic(const std::string& topicName)
{
  return initPubType<task::TaskRequestMessage>(topicName);
}
bool Publisher::addTaskResponsePacketTopic(const std::string& topicName)
{
  return initPubType<task::TaskResponseMessage>(topicName);
}

// heartbeat
bool Publisher::addHeartBeatTopic(const std::string& topicName)
{
  return initPubType<heartbeat::HeartbeatMessage>(topicName);
}

template <typename T>
bool Publisher::initPubType(std::string topicName)
{
  dds::topic::Topic<T> topic(*m_participant,topicName);
  dds::pub::Publisher publisher(*m_participant);
  dds::pub::qos::DataWriterQos qos;
  qos 
    << dds::core::policy::Reliability::Reliable()
    << dds::core::policy::History::KeepAll()
    << dds::core::policy::Durability::TransientLocal();
  auto dataWriter = std::make_shared<WriterHolder<T>>(publisher, topic,qos);
  m_writers[topicName] = dataWriter;
  dds::pub::DataWriter<T>& writer = dataWriter->getWriter();
  const int max_wait_seconds = 10;
  for (int i = 0; i < max_wait_seconds; ++i) 
  {
    dds::core::status::PublicationMatchedStatus status = writer.publication_matched_status();
    if (status.current_count() > 0) 
    {
      return true;
    }
    std::this_thread::sleep_for(std::chrono::seconds(1));
  }
  std::cout << "time out" << std::endl;
  return false;
}

bool Publisher::init(int domaimId)
{
  m_listenner = std::make_shared<ParticipantLitenner>();
  auto participant_qos = dds::domain::qos::DomainParticipantQos();
  #ifdef DISCOVER
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
  rti::core::policy::Property tcp_client_props;
  tcp_client_props.set({
    {"dds.transport.load_plugins", "dds.transport.TCPv4.tcp1"},
    {"dds.transport.TCPv4.tcp1.library", "nddstransporttcp"},
    {"dds.transport.TCPv4.tcp1.create_function", "NDDS_Transport_TCPv4_create"},
    {"dds.transport.TCPv4.tcp1.parent.classid", "NDDS_TRANSPORT_CLASSID_TCPV4_LAN"},
    {"dds.transport.TCPv4.tcp1.server_bind_port", "7401"},
  });
  /*export NDDS_DISCOVERY_PEERS="192.168.5.165:7400,192.168.5.165:7401"*/
  participant_qos << tcp_client_props;
  #endif
  m_participant = new dds::domain::DomainParticipant(domaimId,participant_qos,m_listenner.get());
  return m_participant != nullptr;
}

void Publisher::waitForAcknowledgments()
{
  std::this_thread::sleep_for(std::chrono::milliseconds(500));
}


