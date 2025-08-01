#ifndef APPLICATION_HPP
#define APPLICATION_HPP
#include <csignal>
#include <iostream>
namespace app{
  extern bool shutdown_requested;
  inline void stop_handler(int)
  {
    shutdown_requested = true;
    std::cout << "preparing to shut down..." << std::endl;
  }

  inline void setup_signal_handlers()
  {
      signal(SIGINT, stop_handler);
      signal(SIGTERM, stop_handler);
  }
}
#endif