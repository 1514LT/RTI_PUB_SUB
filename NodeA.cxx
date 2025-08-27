#include "MultiDomainNode.hpp"
void handleTest()
{
  MultiDomainNode nodeA;
  std::vector<int> domains = {0};
  nodeA.initDomains(domains,true);
  // 设置消息处理器
  // nodeA.setCmdHandler([](const cmd::ControlCommand& cmd) {
  //   std::cout << "NodeA received command: " << cmd.commandType() << std::endl;
  //   // 处理命令逻辑
  //   switch(cmd.commandType()) {
  //     case cmd::CommandType_def::POWER_ON:
  //       std::cout << "NodeA executing POWER_ON command" << std::endl;
  //       break;
  //     case cmd::CommandType_def::POWER_OFF:
  //       std::cout << "NodeA executing POWER_OFF command" << std::endl;
  //       break;
  //     default:
  //       std::cout << "NodeA unknown command" << std::endl;
  //       break;
  //   }
  // });

    nodeA.setTaskRequestHandler([](const task::TaskRequestMessage& request) -> task::TaskResponseMessage {
    std::cout << "NodeA processing task: " << request.task().taskName() << std::endl;
    
    // 模拟任务处理
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    
    // 创建响应
    task::TaskResponseMessage response;
    MessageHeader header;
    header.sender(Particpaint::NodeA);
    header.receiver(request.header().sender());
    header.messageId(request.header().messageId());
    header.messageType(MessageType::TASK_RESPONSE);
    header.timestamp(app::getCurrentMilliseconds());
    
    response.header(header);
    response.result().taskId(request.task().taskId());
    response.result().status(task::TaskStatus_def::COMPLETED);
    response.result().resultData("Task completed successfully by NodeA");
    response.result().completionTime(app::getCurrentMilliseconds());
    
    std::cout << "NodeA task completed, sending response" << std::endl;
    return response;
  });

  nodeA.addSubscribeTopic("ControlCommandTopic", TopicConfig::CMD_PACKET, 0);
  nodeA.addSubscribeTopic("TaskRequestTopic",TopicConfig::TASK_PACKET_REQUEST,0);
  nodeA.addPublishTopic("HeartbeatTopic",TopicConfig::HEARTBEAT_PACKET,0);
  
  nodeA.initSubscribers();
  nodeA.initPublishers();
  std::string input;
  int index = 0;
  while (!app::shutdown_requested.load())
  {
    std::cout << "send msg" << std::endl;
    MessageHeader header;
    header.sender(Particpaint::NodeA);
    header.receiver(Particpaint::Guide);
    header.messageId(index);
    header.messageType(MessageType::HEARTBEAT);
    header.timestamp(app::getCurrentMilliseconds());

    heartbeat::HeartbeatMessage msg;
    msg.header(header);
    msg.satelliteInfo().status(heartbeat::SatelliteStatus_def::OPERATIONAL);
    msg.telemetry().cpuUsage(20);
    nodeA.publishHeartBeatPacket({0},"HeartbeatTopic",msg);
    std::this_thread::sleep_for(std::chrono::seconds(1));
  }  
}

int main(int argc, char const *argv[])
{
  app::setup_signal_handlers();
  handleTest();
  return 0;
}
