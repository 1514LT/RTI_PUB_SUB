#include "MultiDomainNode.hpp"

void handleDataIntegrity() // 多域多主题小包数据完整性设计
{
  MultiDomainNode nodeB;

  std::vector<int> domains = {0, 1};
  nodeB.initDomains(domains);
  
  nodeB.addPublishTopic("domain1_topic1", TopicConfig::SMALL_PACKET, 1);
  nodeB.addPublishTopic("domain1_topic2", TopicConfig::SMALL_PACKET, 1);
  nodeB.addPublishTopic("domain1_topic3", TopicConfig::SMALL_PACKET, 1);
  nodeB.addPublishTopic("domain1_topic4", TopicConfig::SMALL_PACKET, 1);
  nodeB.addPublishTopic("domain1_topic5", TopicConfig::SMALL_PACKET, 1);
  
  for (int i = 1; i <= 5; i++) 
  {
    nodeB.addSubscribeTopic("domain0_topic" + std::to_string(i), TopicConfig::SMALL_PACKET, 0);
    nodeB.addSubscribeTopic("domain1_topic" + std::to_string(i), TopicConfig::SMALL_PACKET, 1);
  }
  
  nodeB.initSubscribers();
  nodeB.initPublishers();


  std::vector<int> pubDomain;
  pubDomain.emplace_back(1);
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
    for (int i = 1; i < 6; i++)
    {
      smallPacket pack;
      pack.timestamp_ns(app::getCurrentMicroseconds());
      pack.sequence_number(index);
      nodeB.publishSmallPacket(pubDomain,"domain1_topic" + std::to_string(i),pack);
      std::this_thread::sleep_for(std::chrono::seconds(1));
      index++;
    }
  }
}

void handleStrongDataConsistency() // 数据强一致性
{
  MultiDomainNode nodeB;
  std::vector<int> domains = {0};
  nodeB.initDomains(domains);
  nodeB.addPublishTopic("dataConsistencyTopic", TopicConfig::SMALL_PACKET, 0);
  nodeB.addSubscribeTopic("dataConsistencyTopic", TopicConfig::SMALL_PACKET, 0);
  nodeB.initSubscribers();
  nodeB.initPublishers();
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
      value[3]='B';
      pack.payload0(value);
      nodeB.publishSmallPacket(pubDomain,"dataConsistencyTopic",pack);
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