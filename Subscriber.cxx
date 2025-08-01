#include "Subscriber.hpp"
bool app::shutdown_requested = false;

Subscriber::Subscriber() : m_participant(nullptr)
{
}

Subscriber::~Subscriber()
{
  m_readers.clear();
  if (m_participant) {
    delete m_participant;
    m_participant = nullptr;
  }
  dds::domain::DomainParticipant::finalize_participant_factory();
}

bool Subscriber::init(int domaimId)
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
  m_participant = new dds::domain::DomainParticipant(domaimId,participant_qos);
  std::future<bool> result = std::async(std::launch::async,&Subscriber::initSubType<Target>,this,"TargetTopic");
  std::future<bool> result2 = std::async(std::launch::async,&Subscriber::initSubType<TargetReply>,this,"TargetReplyTopic");
  return result.get() && result2.get();
}

template <typename T>
bool Subscriber::initSubType(std::string topicName)
{
  dds::topic::Topic<T> topic(*m_participant,topicName);
  dds::sub::Subscriber subscriber(*m_participant);
  auto dataReader = std::make_shared<ReaderHolder<T>>(subscriber, topic);
  m_readers[topicName] = dataReader;
  dds::sub::DataReader<T>& reader = dataReader->getReader();

  dds::sub::cond::ReadCondition read_condition(
    reader,
    dds::sub::status::DataState::any());
  dds::core::cond::WaitSet waitset;
  waitset += read_condition;

  std::cout << "listen topic: " << topicName << std::endl;

  while (!app::shutdown_requested)
  {
    try {
      auto conditions = waitset.wait(dds::core::Duration(1));
      if (!conditions.empty()) {
        HandleMsg(reader);
      }
    } catch (const dds::core::TimeoutError&) {
      continue;
    }
  }
  std::cout << "stop listen topic: " << topicName << std::endl;
  return true;
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