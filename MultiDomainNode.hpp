#ifndef MULTIDOMAINNODE_HPP
#define MULTIDOMAINNODE_HPP

#include "Publisher.hpp"
#include "Subscriber.hpp"
#include <vector>
#include <map>
#include <memory>
#include <string>
#include <atomic>

struct TopicConfig {
    std::string topicName;
    enum TopicType { LARGE_PACKET, SMALL_PACKET } type;
    int domainId;
    
    TopicConfig(const std::string& name, TopicType t, int domain) 
        : topicName(name), type(t), domainId(domain) {}
};

class MultiDomainNode
{
private:
    std::map<int,std::shared_ptr<Subscriber>> m_subscribers;
    std::map<int, std::shared_ptr<Publisher>> m_publishers;
    
    std::vector<int> m_domains;
    std::vector<TopicConfig> m_publishTopics;
    std::vector<TopicConfig> m_subscribeTopics;
    
public:
    MultiDomainNode();
    ~MultiDomainNode();
    
    bool initDomains(const std::vector<int>& domainIds);
    
    void addPublishTopic(const std::string& topicName, TopicConfig::TopicType type, int domainId);
    void addSubscribeTopic(const std::string& topicName, TopicConfig::TopicType type, int domainId);
    
    bool initPublishers();
    bool initSubscribers();
    
    void publishSmallPacket(std::vector<int> domainIds, const std::string& topicName, const smallPacket& data);
    void publishLargePacket(std::vector<int> domainIds, const std::string& topicName, const largePacket& data);

};

#endif