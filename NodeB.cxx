#include "MultiDomainNode.hpp"

void handleTest()
{
  MultiDomainNode nodeB;
  std::vector<int> domains = {0};
  nodeB.initDomains(domains,true);

  nodeB.addSubscribeTopic("ControlCommandTopic", TopicConfig::CMD_PACKET, 0);
  nodeB.addSubscribeTopic("TaskRequestTopic",TopicConfig::TASK_PACKET_REQUEST,0);
  nodeB.addSubscribeTopic("HeartbeatTopic",TopicConfig::HEARTBEAT_PACKET,0);

  nodeB.initSubscribers();

  std::string input;

  while (std::getline(std::cin, input) && !app::shutdown_requested.load())
  {
    if (input == "quit" || input == "exit") 
    {
      std::cout << "exit..." << std::endl;
      break;
    }
    std::this_thread::sleep_for(std::chrono::seconds(1));
  }  
}

int main(int argc, char const *argv[])
{
  app::setup_signal_handlers();
  handleTest();
  return 0;
}
