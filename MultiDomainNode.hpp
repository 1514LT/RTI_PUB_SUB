#ifndef MULTIDOMAINNODE_HPP
#define MULTIDOMAINNODE_HPP

#include "Publisher.hpp"
#include <vector>
#include <map>
#include <memory>
#include <string>
#include <atomic>
#include <functional>

class Subscriber;
namespace cmd { struct ControlCommand; }
namespace task { struct TaskRequestMessage; struct TaskResponseMessage; }
namespace heartbeat { struct HeartbeatMessage; }

using CmdHandler = std::function<void(const cmd::ControlCommand&)>;
using TaskRequestHandler = std::function<task::TaskResponseMessage(const task::TaskRequestMessage&)>;
using TaskResponseHandler = std::function<void(const task::TaskResponseMessage&)>;
using HeartbeatHandler = std::function<void(const heartbeat::HeartbeatMessage&)>;

struct TopicConfig {
    std::string topicName;
    enum TopicType { CMD_PACKET, TASK_PACKET_REQUEST,TASK_PACKET_RESPONSE,HEARTBEAT_PACKET} type;
    int domainId;
    
    TopicConfig(const std::string& name, TopicType t, int domain) 
        : topicName(name), type(t), domainId(domain) {}
};

class MultiDomainNode
{
private:
    std::map<int,std::shared_ptr<Subscriber>> m_subscribers;
    std::map<int, std::shared_ptr<Publisher>> m_publishers;
    
    CmdHandler m_cmdHandler;
    TaskRequestHandler m_taskRequestHandler;
    TaskResponseHandler m_taskResponseHandler;
    HeartbeatHandler m_heartbeatHandler;

    std::vector<int> m_domains;
    std::vector<TopicConfig> m_publishTopics;
    std::vector<TopicConfig> m_subscribeTopics;
    
public:
    MultiDomainNode();
    ~MultiDomainNode();
    
    void setCmdHandler(CmdHandler handler) { m_cmdHandler = handler; }
    void setTaskRequestHandler(TaskRequestHandler handler) { m_taskRequestHandler = handler; }
    void setTaskResponseHandler(TaskResponseHandler handler) { m_taskResponseHandler = handler; }
    void setHeartbeatHandler(HeartbeatHandler handler) { m_heartbeatHandler = handler; }
    
    CmdHandler getCmdHandler() const { return m_cmdHandler; }
    TaskRequestHandler getTaskRequestHandler() const { return m_taskRequestHandler; }
    TaskResponseHandler getTaskResponseHandler() const { return m_taskResponseHandler; }
    HeartbeatHandler getHeartbeatHandler() const { return m_heartbeatHandler; }

    bool initDomains(const std::vector<int>& domainIds,bool pubNeed=false);
    
    void addPublishTopic(const std::string& topicName, TopicConfig::TopicType type, int domainId);
    void addSubscribeTopic(const std::string& topicName, TopicConfig::TopicType type, int domainId);
    
    bool initPublishers();
    bool initSubscribers();
    
    void publishCmdPacket(std::vector<int> domainIds, const std::string& topicName, const cmd::ControlCommand& data);
    void publishTaskRequestPacket(std::vector<int> domainIds, const std::string& topicName, const task::TaskRequestMessage& data);
    void publishTaskResponsePacket(std::vector<int> domainIds, const std::string& topicName, const task::TaskResponseMessage& data);
    void publishHeartBeatPacket(std::vector<int> domainIds, const std::string& topicName, const heartbeat::HeartbeatMessage& data);

};

#endif