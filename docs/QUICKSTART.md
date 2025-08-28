# 快速开始指南

## 前置要求

### 系统要求
- Linux操作系统（推荐Ubuntu 18.04+或CentOS 7+）
- C++11兼容编译器（GCC 4.8+或Clang 3.5+）
- CMake 3.5或更高版本
- RTI Connext DDS 5.2.3或更高版本

### RTI DDS环境配置
1. **设置环境变量**
```bash
export NDDSHOME=/path/to/rti_connext_dds-5.2.3
export PATH=$NDDSHOME/bin:$PATH
export LD_LIBRARY_PATH=$NDDSHOME/lib/x64Linux3gcc5.4.0:$LD_LIBRARY_PATH
```

2. **验证安装**
```bash
rtiddsgen -version
# 应该显示RTI DDS版本信息
```

## 构建项目

### 1. 克隆或下载项目
```bash
cd /your/workspace
# 项目应该已经在您的工作目录中
```

### 2. 生成IDL代码
```bash
cd type/
# 生成消息头代码
rtiddsgen -language C++11 -replace MessageHeader.idl

# 生成控制命令代码
rtiddsgen -language C++11 -replace Command.idl

# 生成任务相关代码
rtiddsgen -language C++11 -replace Task.idl

# 生成心跳消息代码
rtiddsgen -language C++11 -replace Heartbeat.idl

cd ..
```

### 3. 构建项目
```bash
# 创建构建目录
mkdir -p build && cd build

# 配置构建
cmake ..

# 编译项目
make -j4

# 验证构建结果
ls -la
# 应该看到以下可执行文件：
# Guide, NodeA, NodeB, NodeC
```

## 运行系统

### 启动方式一：分别启动（推荐用于调试）

#### 1. 启动指挥控制中心
```bash
# 在终端1中
cd build
./Guide
```
您会看到类似输出：
```
init domain success: 0
init subscriber success: TaskResponseTopic (domain0)
init subscriber success: HeartbeatTopic (domain0)
init publisher success: ControlCommandTopic (domain0)
init publisher success: TaskRequestTopic (domain0)
send msg
```

#### 2. 启动卫星节点A
```bash
# 在终端2中
cd build
./NodeA
```
输出示例：
```
init domain success: 0
init subscriber success: ControlCommandTopic (domain0)
init subscriber success: TaskRequestTopic (domain0)
init publisher success: HeartbeatTopic (domain0)
send msg
NodeA received command: 0
NodeA processing task: testA
NodeA task completed, sending response
```

#### 3. 启动卫星节点B
```bash
# 在终端3中
cd build
./NodeB
```

#### 4. 启动卫星节点C
```bash
# 在终端4中
cd build
./NodeC
```

### 启动方式二：后台运行
```bash
cd build
# 启动所有组件
./Guide &
./NodeA &
./NodeB &
./NodeC &

# 查看进程
ps aux | grep -E "(Guide|Node)"

# 停止所有进程
pkill -f "Guide|Node"
```

## 验证系统运行

### 1. 观察日志输出

**Guide控制台应该显示**：
```
send msg
Guide received heartbeat from: 0, CPU usage: 20%, uptime: 1000ms
Guide received heartbeat from: 1, CPU usage: 30%, uptime: 1000ms
Guide received heartbeat from: 2, CPU usage: 40%, uptime: 1000ms
Guide received task response: TaskID=, Status=2, Result=Task completed successfully by NodeA
Guide received task response: TaskID=, Status=2, Result=Task completed successfully by NodeB
Guide received task response: TaskID=, Status=2, Result=Task completed successfully by NodeC
```

**NodeA控制台应该显示**：
```
send msg
NodeA received command: 0
NodeA processing task: testA
NodeA task completed, sending response
```

### 2. 使用RTI工具监控
```bash
# 监控DDS通信（需要另开终端）
rtiddsspy

# 应该看到以下Topics:
# ControlCommandTopic
# TaskRequestTopic  
# TaskResponseTopic
# HeartbeatTopic
```

## 常见问题排查

### 1. 编译错误

**问题**: `error: 'dds/pub/ddspub.hpp' file not found`
```bash
# 解决方案：检查RTI DDS环境变量
echo $NDDSHOME
# 应该指向RTI安装目录

# 如果为空，重新设置
export NDDSHOME=/path/to/rti_connext_dds-5.2.3
```

**问题**: `undefined reference to 'MessageHeader_...'`
```bash
# 解决方案：重新生成IDL代码
cd type/
rtiddsgen -language C++11 -replace MessageHeader.idl
cd ../build
make clean && make
```

### 2. 运行时错误

**问题**: 节点启动后无通信
```bash
# 检查防火墙设置
sudo ufw status
# 如果启用，需要开放DDS端口或暂时关闭
sudo ufw disable

# 检查网络配置
ifconfig
# 确保有有效的网络接口
```

**问题**: `DDS_DomainParticipant_create_participant failed`
```bash
# 检查许可证
echo $RTI_LICENSE_FILE
# 或检查默认许可证位置
ls $NDDSHOME/rti_license.dat

# 如果许可证缺失，联系RTI获取许可证
```

### 3. 性能问题

**问题**: 消息延迟较高
```bash
# 使用共享内存传输（单机）
cd build
cmake -DSHM=ON ..
make

# 或使用TCP传输（跨网络）
cmake -DTCP_V4=ON ..
make
```

## 自定义配置

### 1. 修改心跳频率
编辑NodeA.cxx（或NodeB.cxx、NodeC.cxx）：
```cpp
// 将心跳间隔从1秒改为500毫秒
std::this_thread::sleep_for(std::chrono::milliseconds(500));
```

### 2. 添加新的节点类型
```cpp
// 1. 在MessageHeader.idl中添加新的参与者
enum Particpaint {
    NodeA,
    NodeB, 
    NodeC,
    Guide,
    NodeD  // 新添加
};

// 2. 重新生成代码
rtiddsgen -language C++11 -replace MessageHeader.idl

// 3. 复制NodeA.cxx创建NodeD.cxx
cp NodeA.cxx NodeD.cxx
// 编辑NodeD.cxx，将Particpaint::NodeA改为Particpaint::NodeD

// 4. 在CMakeLists.txt中添加构建目标
add_executable(NodeD NodeD.cxx)
target_link_libraries(NodeD DateTypes_common)
```

### 3. 自定义任务类型
编辑type/Task.idl：
```cpp
enum TaskType {
    IMAGING,
    COMMUNICATION,
    NAVIGATION,
    SCIENCE,
    MAINTENANCE,
    EMERGENCY,
    CUSTOM_SURVEY    // 新添加的任务类型
};
```

重新生成并构建：
```bash
cd type/
rtiddsgen -language C++11 -replace Task.idl
cd ../build
make
```

## 性能测试

### 1. 吞吐量测试
```bash
# 修改心跳间隔为10ms进行压力测试
# 在NodeA.cxx中：
std::this_thread::sleep_for(std::chrono::milliseconds(10));

# 重新编译并运行
make && ./NodeA
```

### 2. 延迟测试
```bash
# 使用rtiddsping测试延迟
rtiddsping -domain 0

# 在另一个终端
rtiddspong -domain 0
```

### 3. 可靠性测试
```bash
# 启动系统后，随机杀死和重启节点
pkill NodeA
sleep 5
./NodeA &

# 观察Guide是否能检测到节点离线和重新上线
```

## 开发提示

### 1. 调试技巧
```bash
# 使用GDB调试
gdb ./NodeA
(gdb) run
# 当程序停止时：
(gdb) bt  # 查看调用栈
(gdb) info threads  # 查看线程
```

### 2. 日志增强
在代码中添加更详细的日志：
```cpp
std::cout << "[" << app::getCurrentMilliseconds() << "] "
          << "NodeA: Processing task " << request.task().taskName() 
          << std::endl;
```

### 3. 监控脚本
创建monitor.sh脚本：
```bash
#!/bin/bash
echo "=== DDS Topics ==="
rtiddsspy -printSample | head -20

echo "=== System Processes ==="
ps aux | grep -E "(Guide|Node)"

echo "=== Network Usage ==="
netstat -i
```

现在您可以开始使用这个多卫星通信系统了！系统会自动处理节点间的通信、任务分发和状态监控。

## 下一步

- 阅读[架构文档](ARCHITECTURE.md)了解系统设计
- 查看[API文档](API.md)学习接口使用
- 探索代码实现细节
- 根据需求扩展功能

如果遇到问题，请检查RTI DDS文档或联系技术支持。
