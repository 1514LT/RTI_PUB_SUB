#include "MultiDomainNode.hpp"

void handleDataIntegrity() // 多域多主题小包数据完整性设计
{
  MultiDomainNode nodeA;

  std::vector<int> domains = {0, 1};
  nodeA.initDomains(domains);
  
  nodeA.addPublishTopic("domain0_topic1", TopicConfig::SMALL_PACKET, 0);
  nodeA.addPublishTopic("domain0_topic2", TopicConfig::SMALL_PACKET, 0);
  nodeA.addPublishTopic("domain0_topic3", TopicConfig::SMALL_PACKET, 0);
  nodeA.addPublishTopic("domain0_topic4", TopicConfig::SMALL_PACKET, 0);
  nodeA.addPublishTopic("domain0_topic5", TopicConfig::SMALL_PACKET, 0);
  
  for (int i = 1; i <= 5; i++) 
  {
    nodeA.addSubscribeTopic("domain0_topic" + std::to_string(i), TopicConfig::SMALL_PACKET, 0);
    nodeA.addSubscribeTopic("domain1_topic" + std::to_string(i), TopicConfig::SMALL_PACKET, 1);
  }
  
  nodeA.initSubscribers();
  nodeA.initPublishers();


  std::vector<int> pubDomain;
  pubDomain.emplace_back(0);
  int index = 0;
  std::string input;
  while (std::getline(std::cin, input) && !app::shutdown_requested)
  {
    if (input == "quit" || input == "exit") 
    {
      std::cout << "exit..." << std::endl;
      break;
    }
    std::cout << "send pack" << std::endl;
    for(int i = 1; i < 6; i++)
    {
      smallPacket pack;
      pack.timestamp_ns(app::getCurrentMicroseconds());
      pack.sequence_number(index);
      nodeA.publishSmallPacket(pubDomain,"domain0_topic" + std::to_string(i),pack);
      std::this_thread::sleep_for(std::chrono::seconds(1));
      index++;
    }
  }
}

void handleStrongDataConsistency() // 数据强一致性
{
  MultiDomainNode nodeA;
  std::vector<int> domains = {0};
  nodeA.initDomains(domains);
  nodeA.addPublishTopic("dataConsistencyTopic", TopicConfig::SMALL_PACKET, 0);
  nodeA.addSubscribeTopic("dataConsistencyTopic", TopicConfig::SMALL_PACKET, 0);
  nodeA.initSubscribers();
  nodeA.initPublishers();
  std::vector<int> pubDomain;
  pubDomain.emplace_back(0);
  std::string input;
  int index = 0;
  while (std::getline(std::cin, input) && !app::shutdown_requested)
  {
    if (input == "quit" || input == "exit") 
    {
      std::cout << "exit..." << std::endl;
      break;
    }
    std::cout << "send pack" << std::endl;
    for(int i = 0; i < 50; i++)
    {
      smallPacket pack;
      pack.timestamp_ns(app::getCurrentMicroseconds());
      pack.sequence_number(index);
      dds::core::array<char, 4> value;
      value[3]='A';
      pack.payload0(value);
      nodeA.publishSmallPacket(pubDomain,"dataConsistencyTopic",pack);
      std::this_thread::sleep_for(std::chrono::seconds(1));
      index++;
    }
  }
}

int main(int argc, char const *argv[])
{
  // app::setup_signal_handlers();
  #if 0
  handleDataIntegrity();
  #else
  handleStrongDataConsistency();
  #endif
  return 0;
}
