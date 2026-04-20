#include "Publisher.hpp"
#include "application.hpp"
#include <thread>
#include <chrono>

int main(int argc, char const *argv[])
{
  Publisher pub;
  if(!pub.init(0))
  {
    return false;
  }
  if(!pub.addLargePacketTopic("largePacketTopic"))
  {
    return false;
  }
  if(!pub.addSmallPacketTopic("smallPacketTopic"))
  {
    return false;
  }
  while (1) {
    for (int i = 0; i < 5; i++) 
    {
      largePacket date;
      date.sequence_number(i);
      date.timestamp_ns(app::getCurrentMilliseconds());
      pub.sendMsg("largePacketTopic", date);
      std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
    for (int i = 0; i < 5; i++) 
    {
      smallPacket date;
      date.sequence_number(i);
      date.timestamp_ns(app::getCurrentMilliseconds());
      pub.sendMsg("smallPacketTopic", date);
  
      std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
  }

  
  std::cout << "wait..." << std::endl;
  pub.waitForAcknowledgments();
  
  std::cout << "send over" << std::endl;
  return 0;
}
