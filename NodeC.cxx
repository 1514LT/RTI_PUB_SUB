#include "MultiDomainNode.hpp"
void handleTest()
{
  MultiDomainNode nodeC;
  std::vector<int> domains = {0};
  nodeC.initDomains(domains,true);

  nodeC.setCmdHandler([](const cmd::ControlCommand& cmd) {
    std::cout << "nodeC received command: " << cmd.commandType() << std::endl;
  });

  nodeC.setTaskRequestHandler([](const task::TaskRequestMessage& request) -> task::TaskResponseMessage 
  {
    if(request.header().receiver() != Particpaint::NodeC)
    {
      task::TaskResponseMessage response;
      response.result().status(task::TaskStatus_def::CANCELLED);
      return response;
    }
    std::cout << "nodeC processing task: " << request.task().taskName() << std::endl;
    
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    
    task::TaskResponseMessage response;
    MessageHeader header;
    header.sender(Particpaint::NodeC);
    header.receiver(request.header().sender());
    header.messageId(request.header().messageId());
    header.messageType(MessageType::TASK_RESPONSE);
    header.timestamp(app::getCurrentMilliseconds());
    
    response.header(header);
    response.result().taskId(request.task().taskId());
    response.result().status(task::TaskStatus_def::COMPLETED);
    response.result().resultData("Task completed successfully by nodeC");
    response.result().completionTime(app::getCurrentMilliseconds());
    
    std::cout << "nodeC task completed, sending response" << std::endl;
    return response;
  });

  nodeC.addSubscribeTopic("ControlCommandTopic", TopicConfig::CMD_PACKET, 0);
  nodeC.addSubscribeTopic("TaskRequestTopic",TopicConfig::TASK_PACKET_REQUEST,0);
  nodeC.addPublishTopic("HeartbeatTopic",TopicConfig::HEARTBEAT_PACKET,0);
  
  nodeC.initSubscribers();
  nodeC.initPublishers();
  std::string input;
  int index = 0;
  while (!app::shutdown_requested.load())
  {
    std::cout << "send msg" << std::endl;
    MessageHeader header;
    header.sender(Particpaint::NodeC);
    header.receiver(Particpaint::Guide);
    header.messageId(index);
    header.messageType(MessageType::HEARTBEAT);
    header.timestamp(app::getCurrentMilliseconds());

    heartbeat::HeartbeatMessage msg;
    msg.header(header);
    msg.satelliteInfo().status(heartbeat::SatelliteStatus_def::OPERATIONAL);
    msg.telemetry().cpuUsage(40);
    nodeC.publishHeartBeatPacket({0},"HeartbeatTopic",msg);
    std::this_thread::sleep_for(std::chrono::seconds(1));
  }  
}

int main(int argc, char const *argv[])
{
  app::setup_signal_handlers();
  handleTest();
  return 0;
}
