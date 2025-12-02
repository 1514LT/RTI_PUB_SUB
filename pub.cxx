#include "Base.h"
#include "BaseSupport.h"
#include <chrono>
#include <thread>
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
  participant_ = factory->create_participant(
    0, DDS_PARTICIPANT_QOS_DEFAULT, NULL, DDS_STATUS_MASK_NONE);
  BasicStructTypeSupport::register_type(participant_);
  topic_ = participant_->create_topic("BasicStruct","BasicStruct",DDS_TOPIC_QOS_DEFAULT,NULL,DDS_STATUS_MASK_NONE);

  publisher_ = participant_->create_publisher(DDS_PUBLISHER_QOS_DEFAULT,NULL,DDS_STATUS_MASK_NONE);
  DDS_DataWriterQos writer_qos;
  publisher_->get_default_datawriter_qos(writer_qos);
  writer_ = publisher_->create_datawriter(
    topic_, writer_qos, NULL, DDS_STATUS_MASK_NONE);
  typed_writer_ = BasicStructDataWriter::narrow(writer_);
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
  Pub pub;
  while (1)
  {
    BasicStruct obj;
    obj.id = 1;
    obj.name = (DDS_Char*)"HELLO";
    obj.value = 1.1;
    pub.SendMsg(obj);
    std::this_thread::sleep_for(std::chrono::seconds(1));
  }
  
  return 0;
}