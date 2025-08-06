#include "MultiDomainNode.hpp"
#include <thread>
#include <chrono>

MultiDomainNode::MultiDomainNode() {}

MultiDomainNode::~MultiDomainNode()
{
  m_publishers.clear();
  m_subscribers.clear();
  dds::domain::DomainParticipant::finalize_participant_factory();
}

bool MultiDomainNode::initDomains(const std::vector<int>& domainIds)
{
    m_domains = domainIds;
    
    for (int domainId : domainIds) {
        auto publisher = std::make_shared<Publisher>();
        auto subscriber = std::make_shared<Subscriber>();
        
        if (!publisher->init(domainId) || !subscriber->init(domainId)) {
            std::cerr << "init domain " << domainId << " faild" << std::endl;
            return false;
        }
        
        m_publishers[domainId] = std::move(publisher);
        m_subscribers[domainId] = std::move(subscriber);
        
        std::cout << "init domain success: " << domainId << std::endl;
    }
    
    return true;
}

void MultiDomainNode::addPublishTopic(const std::string& topicName, TopicConfig::TopicType type, int domainId)
{
    m_publishTopics.emplace_back(topicName, type, domainId);
}

void MultiDomainNode::addSubscribeTopic(const std::string& topicName, TopicConfig::TopicType type, int domainId)
{
    m_subscribeTopics.emplace_back(topicName, type, domainId);
}

bool MultiDomainNode::initPublishers()
{
    for (const auto& topicConfig : m_publishTopics) {
        auto it = m_publishers.find(topicConfig.domainId);
        if (it != m_publishers.end()) {
            bool success = false;
            if (topicConfig.type == TopicConfig::LARGE_PACKET) {
                success = it->second->addLargePacketTopic(topicConfig.topicName);
            } else {
                success = it->second->addSmallPacketTopic(topicConfig.topicName);
            }
            
            if (!success) {
                std::cerr << "init publisher faild: " << topicConfig.topicName << std::endl;
                continue;
            }
            std::cout << "init publisher success: " << topicConfig.topicName << " (domain" << topicConfig.domainId << ")" << std::endl;
        }
    }
    return true;
}

bool MultiDomainNode::initSubscribers()
{
    for (const auto& topicConfig : m_subscribeTopics) {
        auto it = m_subscribers.find(topicConfig.domainId);
        if (it != m_subscribers.end()) {
            bool success = false;
            if (topicConfig.type == TopicConfig::LARGE_PACKET) {
                success = it->second->addLargePacketTopic(topicConfig.topicName);
            } else {
                success = it->second->addSmallPacketTopic(topicConfig.topicName);
            }
            
            if (!success) {
                std::cerr << "init subscriber faild: " << topicConfig.topicName << std::endl;
                return false;
            }
            std::cout << "init subscriber success: " << topicConfig.topicName << " (domain" << topicConfig.domainId << ")" << std::endl;
        }
    }
    return true;
}

void MultiDomainNode::publishSmallPacket(std::vector<int> domainIds, const std::string& topicName, const smallPacket& data)
{
  for(auto domainId:domainIds)
  {
    m_publishers[domainId]->sendMsg(topicName,data);
  }
}
void MultiDomainNode::publishLargePacket(std::vector<int> domainIds, const std::string& topicName, const largePacket& data)
{
  for(auto domainId:domainIds)
  {
    m_publishers[domainId]->sendMsg(topicName,data);
  }
}