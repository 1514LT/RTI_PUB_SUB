#include "Base.h"
#include "BaseSupport.h"
#include "dds_c/dds_c_domain.h"
#include "dds_c/dds_c_infrastructure.h"
#include <iostream>
#include <thread>
class Sub
{
private:
  DDSDomainParticipant* participant_;
  DDSSubscriber* subscriber_;
  DDSTopic* topic_;
  DDSDataReader* reader_;
  BasicStructDataReader* typed_reader_;

public:
  Sub();
  ~Sub();
public:
  void handlMsg();
};

Sub::Sub()
{
  DDSDomainParticipantFactory* factory = DDSDomainParticipantFactory::get_instance();
  participant_ = factory->create_participant(0, DDS_PARTICIPANT_QOS_DEFAULT, NULL, DDS_STATUS_MASK_NONE);
  BasicStructTypeSupport::register_type(participant_);
  topic_ = participant_->create_topic("BasicStruct","BasicStruct",DDS_TOPIC_QOS_DEFAULT,NULL,DDS_STATUS_MASK_NONE);
  subscriber_ = participant_->create_subscriber(DDS_SUBSCRIBER_QOS_DEFAULT, NULL, DDS_STATUS_MASK_NONE);
  DDS_DataReaderQos reader_qos;
  subscriber_->get_default_datareader_qos(reader_qos);
  reader_ = subscriber_->create_datareader(
    topic_, reader_qos, NULL, DDS_STATUS_MASK_NONE);
  typed_reader_ = BasicStructDataReader::narrow(reader_);
}

Sub::~Sub()
{
}
void Sub::handlMsg()
{
  BasicStructSeq reply_seq;
  DDS_SampleInfoSeq info_seq;
  while (1) 
  {
    DDS_ReturnCode_t retcode = typed_reader_->take(reply_seq,info_seq,DDS_LENGTH_UNLIMITED,DDS_ANY_SAMPLE_STATE,DDS_ANY_VIEW_STATE,DDS_ANY_INSTANCE_STATE);
    if(retcode == DDS_RETCODE_OK)
    {
      for(int i = 0; i < reply_seq.length(); ++i)
      {
        if (info_seq[i].valid_data)
        {
          const BasicStruct& reply = reply_seq[i];
          std::cout << reply.id << " "
                    << reply.name << " "
                    << reply.value << std::endl;
        }
      }
      typed_reader_->return_loan(reply_seq, info_seq);
    }
  }
}
int main()
{
  Sub sub;
  sub.handlMsg();
  return 0;
}