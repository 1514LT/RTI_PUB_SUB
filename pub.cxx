#include "Base.h"
#include "BaseSupport.h"
#include <chrono>
#include <thread>
#include <iostream>

class Pub
{
private:
  DDSDomainParticipant* participant_;
  DDSPublisher* publisher_;
  DDSDataWriter* writer_;
  DDSTopic* topic_;
  BasicStructDataWriter* typed_writer_;
public:
  Pub();
  ~Pub();
public:
  void SendMsg(BasicStruct &obj);
};

Pub::Pub()
{
  DDSDomainParticipantFactory* factory = DDSDomainParticipantFactory::get_instance();
  
  // 加载 QoS 配置文件
  DDS_DomainParticipantQos participant_qos;
  factory->get_participant_qos_from_profile(
    participant_qos,
    "SecurityLibrary",
    "PublisherSecurityProfile");
  
  // 使用安全配置创建 Participant
  participant_ = factory->create_participant(
    0, participant_qos, NULL, DDS_STATUS_MASK_NONE);
  
  if (participant_ == NULL) {
    std::cerr << "❌ Failed to create participant with security profile!" << std::endl;
    throw std::runtime_error("Failed to create secure participant");
  }
  
  std::cout << "✓ Publisher: Secure participant created successfully" << std::endl;
  
  BasicStructTypeSupport::register_type(participant_);
  topic_ = participant_->create_topic("BasicStruct","BasicStruct",DDS_TOPIC_QOS_DEFAULT,NULL,DDS_STATUS_MASK_NONE);

  publisher_ = participant_->create_publisher(DDS_PUBLISHER_QOS_DEFAULT,NULL,DDS_STATUS_MASK_NONE);
  DDS_DataWriterQos writer_qos;
  publisher_->get_default_datawriter_qos(writer_qos);
  writer_ = publisher_->create_datawriter(
    topic_, writer_qos, NULL, DDS_STATUS_MASK_NONE);
  typed_writer_ = BasicStructDataWriter::narrow(writer_);
  
  std::cout << "✓ Publisher: Secure communication initialized" << std::endl;
}

Pub::~Pub()
{
}
void Pub::SendMsg(BasicStruct &obj)
{
  typed_writer_->write(obj,DDS_HANDLE_NIL);
}

int main()
{
  std::cout << "========================================" << std::endl;
  std::cout << "🔒 RTI DDS Secure Publisher" << std::endl;
  std::cout << "========================================" << std::endl;
  
  try {
    Pub pub;
    std::cout << "🚀 Starting secure message publishing..." << std::endl;
    
    int count = 0;
    while (1)
    {
      BasicStruct obj;
      obj.id = ++count;
      obj.name = (DDS_Char*)"SECURE_HELLO";
      obj.value = 1.1 * count;
      pub.SendMsg(obj);
      std::cout << "📤 Sent encrypted message #" << count 
                << " (id=" << obj.id << ", value=" << obj.value << ")" << std::endl;
      std::this_thread::sleep_for(std::chrono::seconds(1));
    }
  } catch (const std::exception& e) {
    std::cerr << "❌ Error: " << e.what() << std::endl;
    return 1;
  }
  
  return 0;
}