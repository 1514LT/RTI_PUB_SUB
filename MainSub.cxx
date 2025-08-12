#include "Subscriber.hpp"

int main(int argc, char const *argv[])
{
  app::setup_signal_handlers();
  Subscriber sub;
  sub.init(0); 
  sub.addLargePacketTopic("largePacketTopic");
  sub.addSmallPacketTopic("smallPacketTopic");
  while (!app::shutdown_requested.load())
  {
    std::this_thread::sleep_for(std::chrono::seconds(1));
  }
  
  return 0;
}
