#include "MultiDomainNode.hpp"


void handleStrongDataConsistency() // 数据强一致性
{
  MultiDomainNode nodeC;
  std::vector<int> domains = {0};
  nodeC.initDomains(domains);
  nodeC.addPublishTopic("dataConsistencyTopic", TopicConfig::SMALL_PACKET, 0);
  nodeC.addSubscribeTopic("dataConsistencyTopic", TopicConfig::SMALL_PACKET, 0);
  nodeC.initSubscribers();
  nodeC.initPublishers();
  std::vector<int> pubDomain;
  pubDomain.emplace_back(0);
  std::string input;
  while (std::getline(std::cin, input) && !app::shutdown_requested.load())
  {
    if (input == "quit" || input == "exit") 
    {
      std::cout << "exit..." << std::endl;
      break;
    }
  }
}

int main(int argc, char const *argv[])
{
  app::setup_signal_handlers();
  handleStrongDataConsistency();
  return 0;
}