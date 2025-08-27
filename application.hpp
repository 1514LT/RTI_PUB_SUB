#ifndef APPLICATION_HPP
#define APPLICATION_HPP
#include <csignal>
#include <iostream>
#include <chrono>
#include <ctime>
#include <iomanip>
#include <sstream>
#include "string.h"
#include <thread>
#include <string>
#include <atomic>


#include "MessageHeader.hpp"
#include "Heartbeat.hpp"
#include "Task.hpp"
#include "Command.hpp"
namespace app
{
  extern std::atomic_bool shutdown_requested;
  extern bool throughput_flag;
  extern bool delay_flag;
  extern int test_time;
  void stop_handler(int);
  void setup_signal_handlers();
  // 获取当前毫秒时间戳
  long long getCurrentMilliseconds();
  // 获取当前微秒时间戳
  long long getCurrentMicroseconds();
  // 传入毫秒时间戳，打印格式化时间
  void printTimeFromMilliseconds(long long milliseconds);
  // 传入微秒时间戳，打印格式化时间
  void printTimeFromMicroseconds(long long microseconds);
  int handlOption(int argc,const char* argv[]);
  void timer(int minutes);

}  // namespace app
#endif