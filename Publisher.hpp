#ifndef PUBLISHER_HPP
#define PUBLISHER_HPP
#include <iostream>
#include <map>
#include <thread>

#include <dds/pub/ddspub.hpp>
#include <rti/util/util.hpp>
#include <rti/config/Logger.hpp>

#include <dds/dds.hpp>
#include <rti/rti.hpp>
#include <rti/core/policy/CorePolicy.hpp>

#include "application.hpp"

class BaseWriterHolder
{
private:
public:
  virtual ~BaseWriterHolder() = default;
};

template <typename T>
class WriterHolder : public BaseWriterHolder
{
private:
  dds::pub::DataWriter<T> writer;
public:
  WriterHolder(const dds::pub::Publisher& publisher, const dds::topic::Topic<T>& topic)
  : writer(publisher, topic) {}
  WriterHolder(const dds::pub::Publisher& publisher, const dds::topic::Topic<T>& topic,dds::pub::qos::DataWriterQos &qos)
    : writer(publisher, topic,qos) {}
  void write(const T& data){writer.write(data);}
  dds::pub::DataWriter<T>& getWriter(){return writer;}
};


class ParticipantLitenner : public dds::domain::NoOpDomainParticipantListener
{
public:
  void on_subscription_matched(
    dds::sub::AnyDataReader& any,
    const dds::core::status::SubscriptionMatchedStatus& sub)
    {
      std::cout << "on_subscription_matched" << std::endl;
    }
  void on_publication_matched(
  dds::pub::AnyDataWriter& any,
  const ::dds::core::status::PublicationMatchedStatus& sub)
  {
    std::cout << "on_publication_matched" << std::endl;
  }
  void on_sample_lost(
    dds::sub::AnyDataReader&,
    const dds::core::status::SampleLostStatus&)
  {
    std::cout << "on_sample_lost" << std::endl;
  }
};

class Publisher
{
private:
  std::map<std::string, std::shared_ptr<BaseWriterHolder>> m_writers;

  dds::domain::DomainParticipant* m_participant;
  std::shared_ptr<ParticipantLitenner> m_listenner;
public:
  Publisher();
  ~Publisher();
public:
  bool init(int domaimId);
  template <typename T>
  bool initPubType(std::string topicName);
  template <typename T>
  void sendMsg(std::string topicName,const T& data);
  void waitForAcknowledgments();
  bool addCmdPacketTopic(const std::string& topicName);
  bool addTaskRequestPacketTopic(const std::string& topicName);
  bool addTaskResponsePacketTopic(const std::string& topicName);
  bool addHeartBeatTopic(const std::string& topicName);
};
template <typename T>
void Publisher::sendMsg(std::string topicName,const T& data)
{
  auto it = m_writers.find(topicName);
  if (it != m_writers.end())
  {
    auto holder = std::dynamic_pointer_cast<WriterHolder<T>>(it->second);
    if (holder) 
    {
      holder->write(data);
    } 
    else 
    {
      std::cerr << "Type mismatch for topic: " << topicName << std::endl;
    }
  }
}

#endif