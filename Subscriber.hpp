#ifndef SUBSCRIBER_HPP
#define SUNSCRIBER_HPP
#include <iostream>
#include <map>
#include <thread>
#include <csignal>
#include <future>

#include <dds/sub/ddssub.hpp>
#include <dds/core/ddscore.hpp>
#include <rti/util/util.hpp>
#include <rti/config/Logger.hpp>
#include "DateTypes.hpp"
#include "application.hpp"

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
  ReaderHolder(const dds::sub::Subscriber subscriber, const dds::topic::Topic<T>& topic):reader(subscriber, topic){}
  dds::sub::DataReader<T>& getReader() { return reader; }
};

class Subscriber
{
private:
  dds::domain::DomainParticipant* m_participant;
  std::map<std::string, std::shared_ptr<BaseReaderHolder>> m_readers;
public:
  Subscriber();
  ~Subscriber();
public:
  bool init(int domaimId);
  template <typename T>
  bool initSubType(std::string topicName);
  template <typename T>
  void HandleMsg(dds::sub::DataReader<T> reader);
};



#endif