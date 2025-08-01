#include "Publisher.hpp"
#include <thread>
#include <chrono>

int main(int argc, char const *argv[])
{
  Publisher pub;
  pub.init(0);

  for (int i = 0; i < 5; i++) 
  {
    Target date;
    date.buff("Hello RTI msg #" + std::to_string(i));
    date.index(i);
    
    std::cout << "send msg " << i << ": " << date.buff() << std::endl;
    pub.sendMsg("TargetTopic", date);

    std::this_thread::sleep_for(std::chrono::milliseconds(100));
  }
  for (int i = 0; i < 5; i++) 
  {
    TargetReply date;
    date.flag(i);
    
    std::cout << "send msg " << date.flag() << std::endl;
    pub.sendMsg("TargetReplyTopic", date);

    std::this_thread::sleep_for(std::chrono::milliseconds(100));
  }
  
  std::cout << "wait..." << std::endl;
  pub.waitForAcknowledgments();
  
  std::cout << "send over" << std::endl;
  return 0;
}
