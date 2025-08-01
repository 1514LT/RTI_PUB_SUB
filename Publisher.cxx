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
  m_participant = new dds::domain::DomainParticipant(domaimId);
  return 
  initPubType<Target>("TargetTopic") &&
  initPubType<TargetReply>("TargetReplyTopic");
}

void Publisher::waitForAcknowledgments()
{
  std::this_thread::sleep_for(std::chrono::milliseconds(500));
}


