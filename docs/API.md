# API 接口文档

## 概述

本文档描述了多卫星通信系统的核心API接口，包括数据类型定义、消息接口和回调函数。

## 数据类型定义

### 基础枚举类型

#### Particpaint（参与者类型）
```cpp
enum Particpaint {
    NodeA,      // 卫星节点A
    NodeB,      // 卫星节点B  
    NodeC,      // 卫星节点C
    Guide       // 指挥控制中心
};
```

#### MessageType（消息类型）
```cpp
enum MessageType {
    HEARTBEAT,      // 心跳消息
    TASK_REQUEST,   // 任务请求
    TASK_RESPONSE,  // 任务响应
    COMMAND         // 控制命令
};
```

### 消息头结构

#### MessageHeader
```cpp
struct MessageHeader {
    long messageId;              // 消息唯一标识
    Particpaint sender;          // 发送方
    Particpaint receiver;        // 接收方
    MessageType messageType;     // 消息类型
    long long timestamp;         // 发送时间戳
    long sequenceNumber;         // 序列号
    long priority;               // 优先级 (1-10)
    boolean requiresAck;         // 是否需要确认
};
```

**使用示例**:
```cpp
MessageHeader header;
header.messageId(123);
header.sender(Particpaint::NodeA);
header.receiver(Particpaint::Guide);
header.messageType(MessageType::HEARTBEAT);
header.timestamp(app::getCurrentMilliseconds());
```

## 控制命令接口

### 命令类型定义

#### CommandType
```cpp
namespace cmd {
    enum CommandType {
        POWER_ON,          // 开机
        POWER_OFF,         // 关机
        RESET,             // 重置
        RECONFIGURE,       // 重新配置
        CALIBRATE,         // 校准
        EMERGENCY_STOP,    // 紧急停止
        CUSTOM             // 自定义命令
    };
}
```

#### ControlCommand
```cpp
namespace cmd {
    struct ControlCommand {
        MessageHeader header;         // 消息头
        CommandType commandType;      // 命令类型
    };
}
```

**使用示例**:
```cpp
cmd::ControlCommand command;
command.header().sender(Particpaint::Guide);
command.header().receiver(Particpaint::NodeA);
command.commandType(cmd::CommandType_def::POWER_ON);
```

## 任务管理接口

### 任务相关枚举

#### TaskType（任务类型）
```cpp
namespace task {
    enum TaskType {
        IMAGING,           // 成像任务
        COMMUNICATION,     // 通信任务
        NAVIGATION,        // 导航任务
        SCIENCE,           // 科学实验
        MAINTENANCE,       // 维护任务
        EMERGENCY          // 紧急任务
    };
}
```

#### TaskPriority（任务优先级）
```cpp
namespace task {
    enum TaskPriority {
        CRITICAL,          // 关键
        HIGH,              // 高
        MEDIUM,            // 中
        LOW                // 低
    };
}
```

#### TaskStatus（任务状态）
```cpp
namespace task {
    enum TaskStatus {
        PENDING,           // 待执行
        IN_PROGRESS,       // 执行中
        COMPLETED,         // 已完成
        FAILED,            // 失败
        CANCELLED,         // 已取消
        PAUSED             // 暂停
    };
}
```

### 任务数据结构

#### TaskDefinition
```cpp
namespace task {
    struct TaskDefinition {
        string taskId;                // 任务唯一标识
        string taskName;              // 任务名称
        TaskType taskType;            // 任务类型
        TaskPriority priority;        // 任务优先级
        long startTime;               // 开始时间
        long endTime;                 // 结束时间
        string targetSatellite;       // 目标卫星
        string parameters;            // 任务参数(JSON格式)
        TaskStatus status;            // 任务状态
    };
}
```

#### TaskResult
```cpp
namespace task {
    struct TaskResult {
        string taskId;                // 任务ID
        TaskStatus status;            // 执行状态
        string resultData;            // 结果数据
        string errorMessage;          // 错误信息
        long long completionTime;    // 完成时间
    };
}
```

### 任务消息类型

#### TaskRequestMessage
```cpp
namespace task {
    struct TaskRequestMessage {
        MessageHeader header;         // 消息头
        TaskDefinition task;          // 任务定义
    };
}
```

**使用示例**:
```cpp
task::TaskRequestMessage request;
request.header().sender(Particpaint::Guide);
request.header().receiver(Particpaint::NodeA);
request.task().taskId("TASK_001");
request.task().taskName("Imaging Mission");
request.task().taskType(task::TaskType_def::IMAGING);
request.task().priority(task::TaskPriority_def::HIGH);
```

#### TaskResponseMessage
```cpp
namespace task {
    struct TaskResponseMessage {
        MessageHeader header;         // 消息头
        TaskResult result;            // 任务结果
    };
}
```

**使用示例**:
```cpp
task::TaskResponseMessage response;
response.header().sender(Particpaint::NodeA);
response.header().receiver(Particpaint::Guide);
response.result().taskId("TASK_001");
response.result().status(task::TaskStatus_def::COMPLETED);
response.result().resultData("Image captured successfully");
```

## 心跳监控接口

### 卫星状态定义

#### SatelliteStatus
```cpp
namespace heartbeat {
    enum SatelliteStatus {
        OPERATIONAL,      // 正常运行
        MAINTENANCE,      // 维护模式
        EMERGENCY,        // 紧急状态
        OFFLINE,          // 离线状态
        RECONFIGURING     // 重新配置中
    };
}
```

### 遥测数据结构

#### TelemetryData
```cpp
namespace heartbeat {
    struct TelemetryData {
        string satelliteId;           // 卫星ID
        long long timestamp;          // 时间戳
        double batteryLevel;          // 电池电量
        double solarPanelOutput;      // 太阳能板输出
        double temperature;           // 温度
        double cpuUsage;              // CPU使用率
        double memoryUsage;           // 内存使用率
        double dataStorageUsage;      // 数据存储使用率
        boolean antennaStatus;        // 天线状态
        boolean cameraStatus;         // 相机状态
        string systemHealth;          // 系统健康状态
    };
}
```

#### SatelliteInfo
```cpp
namespace heartbeat {
    struct SatelliteInfo {
        string satelliteId;           // 卫星唯一标识符
        string satelliteName;         // 卫星名称
        string constellation;         // 所属星座
        double latitude;              // 纬度
        double longitude;             // 经度
        double altitude;              // 高度
        double velocity;              // 速度
        long long timestamp;          // 时间戳
        SatelliteStatus status;       // 卫星状态
    };
}
```

#### HeartbeatMessage
```cpp
namespace heartbeat {
    struct HeartbeatMessage {
        MessageHeader header;         // 消息头
        SatelliteInfo satelliteInfo; // 卫星信息
        TelemetryData telemetry;     // 遥测数据
        long uptime;                 // 运行时间
    };
}
```

**使用示例**:
```cpp
heartbeat::HeartbeatMessage hb;
hb.header().sender(Particpaint::NodeA);
hb.header().receiver(Particpaint::Guide);
hb.satelliteInfo().status(heartbeat::SatelliteStatus_def::OPERATIONAL);
hb.telemetry().cpuUsage(25.5);
hb.telemetry().batteryLevel(87.3);
hb.uptime(3600000); // 1小时运行时间
```

## MultiDomainNode API

### 核心接口

#### 初始化方法
```cpp
class MultiDomainNode {
public:
    // 初始化DDS域
    bool initDomains(const std::vector<int>& domainIds, bool pubNeed = false);
    
    // 初始化发布者和订阅者
    bool initPublishers();
    bool initSubscribers();
};
```

#### Topic配置
```cpp
// Topic类型枚举
enum TopicType { 
    CMD_PACKET,           // 命令包
    TASK_PACKET_REQUEST,  // 任务请求包
    TASK_PACKET_RESPONSE, // 任务响应包
    HEARTBEAT_PACKET      // 心跳包
};

// 添加发布Topic
void addPublishTopic(const std::string& topicName, TopicType type, int domainId);

// 添加订阅Topic
void addSubscribeTopic(const std::string& topicName, TopicType type, int domainId);
```

#### 消息发布接口
```cpp
// 发布控制命令
void publishCmdPacket(std::vector<int> domainIds, 
                     const std::string& topicName, 
                     const cmd::ControlCommand& data);

// 发布任务请求
void publishTaskRequestPacket(std::vector<int> domainIds, 
                             const std::string& topicName, 
                             const task::TaskRequestMessage& data);

// 发布任务响应
void publishTaskResponsePacket(std::vector<int> domainIds, 
                              const std::string& topicName, 
                              const task::TaskResponseMessage& data);

// 发布心跳消息
void publishHeartBeatPacket(std::vector<int> domainIds, 
                           const std::string& topicName, 
                           const heartbeat::HeartbeatMessage& data);
```

### 回调处理器接口

#### 处理器类型定义
```cpp
// 命令处理器
using CmdHandler = std::function<void(const cmd::ControlCommand&)>;

// 任务请求处理器（同步返回响应）
using TaskRequestHandler = std::function<task::TaskResponseMessage(const task::TaskRequestMessage&)>;

// 任务响应处理器
using TaskResponseHandler = std::function<void(const task::TaskResponseMessage&)>;

// 心跳处理器
using HeartbeatHandler = std::function<void(const heartbeat::HeartbeatMessage&)>;
```

#### 处理器注册
```cpp
// 设置命令处理器
void setCmdHandler(CmdHandler handler);

// 设置任务请求处理器
void setTaskRequestHandler(TaskRequestHandler handler);

// 设置任务响应处理器
void setTaskResponseHandler(TaskResponseHandler handler);

// 设置心跳处理器
void setHeartbeatHandler(HeartbeatHandler handler);
```

### 使用示例

#### 完整的节点初始化
```cpp
MultiDomainNode node;

// 1. 初始化域
std::vector<int> domains = {0};
node.initDomains(domains, true);

// 2. 设置消息处理器
node.setCmdHandler([](const cmd::ControlCommand& cmd) {
    std::cout << "Received command: " << cmd.commandType() << std::endl;
});

node.setTaskRequestHandler([](const task::TaskRequestMessage& request) -> task::TaskResponseMessage {
    // 处理任务
    task::TaskResponseMessage response;
    response.result().status(task::TaskStatus_def::COMPLETED);
    return response;
});

// 3. 配置Topics
node.addSubscribeTopic("ControlCommandTopic", TopicConfig::CMD_PACKET, 0);
node.addSubscribeTopic("TaskRequestTopic", TopicConfig::TASK_PACKET_REQUEST, 0);
node.addPublishTopic("HeartbeatTopic", TopicConfig::HEARTBEAT_PACKET, 0);
node.addPublishTopic("TaskResponseTopic", TopicConfig::TASK_PACKET_RESPONSE, 0);

// 4. 初始化通信组件
node.initSubscribers();
node.initPublishers();
```

#### 消息发送示例
```cpp
// 发送心跳
heartbeat::HeartbeatMessage hb;
hb.header().sender(Particpaint::NodeA);
hb.header().messageType(MessageType::HEARTBEAT);
hb.satelliteInfo().status(heartbeat::SatelliteStatus_def::OPERATIONAL);
node.publishHeartBeatPacket({0}, "HeartbeatTopic", hb);

// 发送任务请求
task::TaskRequestMessage taskReq;
taskReq.header().sender(Particpaint::Guide);
taskReq.header().receiver(Particpaint::NodeA);
taskReq.task().taskName("Image Capture");
node.publishTaskRequestPacket({0}, "TaskRequestTopic", taskReq);
```

## 错误处理

### 返回值约定
- `bool`类型方法：`true`表示成功，`false`表示失败
- 异常处理：关键错误抛出标准异常

### 常见错误码
```cpp
// DDS初始化失败
if (!node.initDomains(domains)) {
    std::cerr << "Failed to initialize DDS domains" << std::endl;
}

// Topic添加失败  
if (!node.initSubscribers()) {
    std::cerr << "Failed to initialize subscribers" << std::endl;
}
```

### 调试接口
```cpp
// 启用详细日志（编译时定义）
#ifdef DEBUG
    std::cout << "Message sent: " << messageId << std::endl;
#endif
```

## 性能考虑

### 高频操作优化
```cpp
// 心跳消息发送（高频）
// 建议：预分配消息对象，避免频繁构造
static heartbeat::HeartbeatMessage heartbeatCache;
// 更新字段而不是重新构造
heartbeatCache.telemetry().cpuUsage(getCurrentCpuUsage());
```

### 内存管理
```cpp
// DDS自动管理序列化内存
// 用户代码只需关注业务对象生命周期
{
    heartbeat::HeartbeatMessage msg; // 栈分配
    node.publishHeartBeatPacket({0}, "HeartbeatTopic", msg);
} // 自动析构，无需手动释放
```

## 线程安全

### 并发访问
- 所有公开API都是线程安全的
- 回调函数在独立线程中执行
- 避免在回调中执行阻塞操作

```cpp
// 线程安全的消息发送
std::thread([&node]() {
    while (running) {
        // 在独立线程中发送心跳
        node.publishHeartBeatPacket({0}, "HeartbeatTopic", heartbeat);
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}).detach();
```

## 配置参数

### QoS配置
系统默认使用以下QoS配置：
- **Reliability**: Reliable（可靠传输）
- **History**: KeepAll（保持所有历史）
- **Durability**: TransientLocal（瞬态本地持久化）

### 网络配置
支持编译时选择传输协议：
- `UDP_V4`: UDP传输（默认）
- `TCP_V4`: TCP传输  
- `SHM`: 共享内存传输

这些API接口为多卫星通信系统提供了完整的编程接口，支持灵活的消息处理和可靠的通信机制。
