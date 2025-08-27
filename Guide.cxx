#include "MultiDomainNode.hpp"

void handleTest()
{
  MultiDomainNode guide;
  std::vector<int> domains = {0};
  guide.initDomains(domains);

  // 设置消息处理器
  guide.setHeartbeatHandler([](const heartbeat::HeartbeatMessage& hb) {
    std::cout << "Guide received heartbeat from: " << hb.header().sender() 
              << ", CPU usage: " << hb.telemetry().cpuUsage() 
              << "%, uptime: " << hb.uptime() << "ms" << std::endl;
  });

  guide.setTaskResponseHandler([](const task::TaskResponseMessage& response) {
    std::cout << "Guide received task response: " 
              << "TaskID=" << response.result().taskId()
              << ", Status=" << response.result().status()
              << ", Result=" << response.result().resultData() << std::endl;
  });
  
  guide.addSubscribeTopic("TaskResponseTopic",TopicConfig::TASK_PACKET_RESPONSE,0);
  guide.addSubscribeTopic("HeartbeatTopic",TopicConfig::HEARTBEAT_PACKET,0);
  guide.addPublishTopic("ControlCommandTopic", TopicConfig::CMD_PACKET, 0);
  guide.addPublishTopic("TaskRequestTopic",TopicConfig::TASK_PACKET_REQUEST,0);


  guide.initSubscribers();
  guide.initPublishers();

  std::string input;
  int index = 0;
  while (!app::shutdown_requested.load())
  {
    std::cout << "send msg" << std::endl;
    MessageHeader header;
    header.sender(Particpaint::Guide);
    header.messageId(index);
    header.timestamp(app::getCurrentMilliseconds());

    cmd::ControlCommand comandPackeg;
    header.priority(1);
    header.messageType(MessageType::COMMAND);
    comandPackeg.header(header);
    comandPackeg.commandType(cmd::CommandType_def::POWER_ON);
    guide.publishCmdPacket({0},"ControlCommandTopic",comandPackeg);

    task::TaskRequestMessage taskRequstPack;
    header.priority(2);
    header.messageType(MessageType::TASK_REQUEST);
    taskRequstPack.header(header);
    taskRequstPack.task().taskName("test");
    guide.publishTaskRequestPacket({0},"TaskRequestTopic",taskRequstPack);

    std::this_thread::sleep_for(std::chrono::seconds(1));
    index ++;
  }  
}

int main(int argc, char const *argv[])
{
  app::setup_signal_handlers();
  handleTest();
  return 0;
}
