#include "Publisher.hpp"

Publisher::Publisher() : m_participant(nullptr)
{
}

Publisher::~Publisher()
{
  m_writers.clear();
  
  if (m_participant) {
    delete m_participant;
    m_participant = nullptr;
  }
  dds::domain::DomainParticipant::finalize_participant_factory();
}

template <typename T>
bool Publisher::initPubType(std::string topicName)
{
  dds::topic::Topic<T> topic(*m_participant,topicName);
  dds::pub::Publisher publisher(*m_participant);
  auto dataWriter = std::make_shared<WriterHolder<T>>(publisher, topic);
  m_writers[topicName] = dataWriter;
  return true;
}

bool Publisher::init(int domaimId)
{
  auto participant_qos = dds::domain::qos::DomainParticipantQos();
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
  m_participant = new dds::domain::DomainParticipant(domaimId,participant_qos);
  return 
  initPubType<Target>("TargetTopic") &&
  initPubType<TargetReply>("TargetReplyTopic");
}

void Publisher::waitForAcknowledgments()
{
  std::this_thread::sleep_for(std::chrono::milliseconds(500));
}


