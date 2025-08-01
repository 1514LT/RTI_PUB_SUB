#ifndef PUBLISHER_HPP
#define PUBLISHER_HPP
#include <iostream>
#include <map>
#include <thread>

#include <dds/pub/ddspub.hpp>
#include <rti/util/util.hpp>
#include <rti/config/Logger.hpp>
#include "DataTypes.hpp"

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
  WriterHolder(const dds::pub::Publisher& publisher, const dds::topic::Topic<T>& topic):writer(publisher, topic){}
  void write(const T& data){writer.write(data);}
};



class Publisher
{
private:
  std::map<std::string, std::shared_ptr<BaseWriterHolder>> m_writers;

  dds::domain::DomainParticipant* m_participant;
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