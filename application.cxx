#include "application.hpp"
std::atomic_bool app::shutdown_requested(false);
bool app::throughput_flag = false;
bool app::delay_flag = false;
int app::test_time = 1;

void app::stop_handler(int)
{
    app::shutdown_requested.store(true);
    std::cout << "preparing to shut down..." << std::endl;
    std::cout.flush();
}

void app::setup_signal_handlers()
{
    signal(SIGINT, stop_handler);
    signal(SIGTERM, stop_handler);
}
// 获取当前毫秒时间戳
long long app::getCurrentMilliseconds()
{
    auto now = std::chrono::system_clock::now();
    auto duration = now.time_since_epoch();
    auto millis = std::chrono::duration_cast<std::chrono::milliseconds>(duration).count();
    return millis;
}
// 获取当前微秒时间戳
long long app::getCurrentMicroseconds()
{
    auto now = std::chrono::system_clock::now();
    auto duration = now.time_since_epoch();
    auto micros = std::chrono::duration_cast<std::chrono::microseconds>(duration).count();
    return micros;
}

// 传入毫秒时间戳，打印格式化时间
void app::printTimeFromMilliseconds(long long milliseconds)
{
    time_t seconds = milliseconds / 1000;
    int ms_part = milliseconds % 1000;
    struct tm *local_time = localtime(&seconds);
    std::cout << (local_time->tm_year + 1900) << "/" << (local_time->tm_mon + 1) << "/" << local_time->tm_mday << " "
              << std::setfill('0') << std::setw(2) << local_time->tm_hour << ":" << std::setfill('0') << std::setw(2)
              << local_time->tm_min << ":" << std::setfill('0') << std::setw(2) << local_time->tm_sec << ":"
              << std::setfill('0') << std::setw(3) << ms_part << std::endl;
}
// 传入微秒时间戳，打印格式化时间
void app::printTimeFromMicroseconds(long long microseconds)
{
    time_t seconds = microseconds / 1000000;
    int us_part = microseconds % 1000000;

    struct tm *local_time = localtime(&seconds);

    std::cout << (local_time->tm_year + 1900) << "/" << (local_time->tm_mon + 1) << "/" << local_time->tm_mday << " "
              << std::setfill('0') << std::setw(2) << local_time->tm_hour << ":" << std::setfill('0') << std::setw(2)
              << local_time->tm_min << ":" << std::setfill('0') << std::setw(2) << local_time->tm_sec << ":"
              << std::setfill('0') << std::setw(6) << us_part << std::endl;
}
int app::handlOption(int argc, const char *argv[])
{
    for (int i = 1; i < argc; ++i) {
        if (!strcmp(argv[i], "-throughput_flag")) {
            ++i;
            if (i == argc) {
                printf("-throughput_flag <throughput_flag>\n");
                return -1;
            }
            throughput_flag = atoi(argv[i]);
        } else if (!strcmp(argv[i], "-delay_flag")) {
            ++i;
            if (i == argc) {
                printf("-delay_flag <delay_flag>\n");
                return -1;
            }
            delay_flag = atoi(argv[i]);
        } else if (!strcmp(argv[i], "-test_time")) {
            ++i;
            if (i == argc) {
                printf("-test_time <test_time>\n");
                return -1;
            }
            test_time = atoi(argv[i]);
        }
    }
    return 0;
}
void app::timer(int minutes)
{
    std::cout << "定时器开始：" << minutes << " 分钟" << std::endl;
    std::this_thread::sleep_for(std::chrono::minutes(minutes));
    std::cout << "⏰ 时间到！" << std::endl;
    app::shutdown_requested.store(true);
}