#include "Subscriber.hpp"

int main(int argc, char const *argv[])
{
  app::setup_signal_handlers();
  Subscriber sub;
  sub.init(0); 
  return 0;
}
