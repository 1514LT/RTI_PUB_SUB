#ifndef SUBSCRIBER_HPP
#define SUNSCRIBER_HPP
#include <iostream>
#include <map>
#include <thread>
#include <csignal>
#include <future>
#include <functional>
#include <unordered_map>

#include <dds/sub/ddssub.hpp>
#include <dds/core/ddscore.hpp>
#include <rti/util/util.hpp>
#include <rti/config/Logger.hpp>
#include "application.hpp"
#include "Publisher.hpp"
#include <dds/dds.hpp>
#include <rti/rti.hpp>
#include <rti/core/policy/CorePolicy.hpp>
class MultiDomainNode;
class BaseReaderHolder
{
private:
public:
  virtual ~BaseReaderHolder() = default;
};

template <typename T>
class ReaderHolder : public BaseReaderHolder
{
private:
  dds::sub::DataReader<T> reader;
public:
  ReaderHolder(const dds::sub::Subscriber subscriber, const dds::topic::Topic<T>& topic)
    : reader(subscriber, topic){}
  ReaderHolder(const dds::sub::Subscriber subscriber, const dds::topic::Topic<T>& topic, dds::sub::qos::DataReaderQos& qos)
    : reader(subscriber, topic,qos){}
  dds::sub::DataReader<T>& getReader() { return reader; }
};



class Subscriber
{
private:
  dds::domain::DomainParticipant* m_participant;
  std::map<std::string, std::shared_ptr<BaseReaderHolder>> m_readers;

  MultiDomainNode* m_node;
  
public:
  Subscriber();
  ~Subscriber();
public:
  bool init(int domaimId);
  template <typename T>
  bool initSubType(std::string topicName);
  void setNode(MultiDomainNode* node) { m_node = node; }

  template <typename T>
  void HandleMsg(dds::sub::DataReader<T> reader);

  template <typename T>
  void listenToTopic(std::shared_ptr<ReaderHolder<T>> dataReader, const std::string& topicName);

  bool addCmdPacketTopic(const std::string& topicName);
  bool addTaskRequestPacketTopic(const std::string& topicName);
  bool addTaskResponsePacketTopic(const std::string& topicName);
  bool addHeartBeatTopic(const std::string& topicName);
};



#endif