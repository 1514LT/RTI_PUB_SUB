#include "Publisher.hpp"
#include <thread>
#include <chrono>

int main(int argc, char const *argv[])
{
  Publisher pub;
  pub.init(0);
  pub.addLargePacketTopic("largePacketTopic");
  pub.addSmallPacketTopic("smallPacketTopic");

  for (int i = 0; i < 5; i++) 
  {
    largePacket date;
    pub.sendMsg("largePacketTopic", date);

    std::this_thread::sleep_for(std::chrono::milliseconds(100));
  }
  for (int i = 0; i < 5; i++) 
  {
    smallPacket date;
    pub.sendMsg("smallPacketTopic", date);

    std::this_thread::sleep_for(std::chrono::milliseconds(100));
  }
  
  std::cout << "wait..." << std::endl;
  pub.waitForAcknowledgments();
  
  std::cout << "send over" << std::endl;
  return 0;
}
