

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MessageHeader.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include <iosfwd>
#include <iomanip>
#include "MessageHeader.hpp"
#include "MessageHeaderImplPlugin.h"

std::ostream& operator << (std::ostream& o,const MessageType& sample){
    rti::util::StreamFlagSaver flag_saver (o);
    switch(sample.underlying()){
        case MessageType::HEARTBEAT:
        o << "MessageType::HEARTBEAT" << " ";
        break;
        case MessageType::TASK_REQUEST:
        o << "MessageType::TASK_REQUEST" << " ";
        break;
        case MessageType::TASK_RESPONSE:
        o << "MessageType::TASK_RESPONSE" << " ";
        break;
        case MessageType::COMMAND:
        o << "MessageType::COMMAND" << " ";
        break;
    }
    return o;
}
std::ostream& operator << (std::ostream& o,const Particpaint& sample){
    rti::util::StreamFlagSaver flag_saver (o);
    switch(sample.underlying()){
        case Particpaint::NodeA:
        o << "Particpaint::NodeA" << " ";
        break;
        case Particpaint::NodeB:
        o << "Particpaint::NodeB" << " ";
        break;
        case Particpaint::NodeC:
        o << "Particpaint::NodeC" << " ";
        break;
        case Particpaint::Guide:
        o << "Particpaint::Guide" << " ";
        break;
    }
    return o;
}

// ---- MessageHeader: 

MessageHeader::MessageHeader() :
    m_messageId_ (0) ,
    m_sender_(Particpaint::get_default()) ,
    m_receiver_(Particpaint::get_default()) ,
    m_messageType_(MessageType::get_default()) ,
    m_timestamp_ (0ll) ,
    m_sequenceNumber_ (0) ,
    m_priority_ (0) ,
    m_requiresAck_ (false) {
}   

MessageHeader::MessageHeader (
    int32_t messageId,
    const Particpaint& sender,
    const Particpaint& receiver,
    const MessageType& messageType,
    rti::core::int64 timestamp,
    int32_t sequenceNumber,
    int32_t priority,
    bool requiresAck)
    :
        m_messageId_( messageId ),
        m_sender_( sender ),
        m_receiver_( receiver ),
        m_messageType_( messageType ),
        m_timestamp_( timestamp ),
        m_sequenceNumber_( sequenceNumber ),
        m_priority_( priority ),
        m_requiresAck_( requiresAck ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
MessageHeader::MessageHeader(MessageHeader&& other_) OMG_NOEXCEPT  :m_messageId_ (std::move(other_.m_messageId_))
,
m_sender_ (std::move(other_.m_sender_))
,
m_receiver_ (std::move(other_.m_receiver_))
,
m_messageType_ (std::move(other_.m_messageType_))
,
m_timestamp_ (std::move(other_.m_timestamp_))
,
m_sequenceNumber_ (std::move(other_.m_sequenceNumber_))
,
m_priority_ (std::move(other_.m_priority_))
,
m_requiresAck_ (std::move(other_.m_requiresAck_))
{
} 

MessageHeader& MessageHeader::operator=(MessageHeader&&  other_) OMG_NOEXCEPT {
    MessageHeader tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void MessageHeader::swap(MessageHeader& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_messageId_, other_.m_messageId_);
    swap(m_sender_, other_.m_sender_);
    swap(m_receiver_, other_.m_receiver_);
    swap(m_messageType_, other_.m_messageType_);
    swap(m_timestamp_, other_.m_timestamp_);
    swap(m_sequenceNumber_, other_.m_sequenceNumber_);
    swap(m_priority_, other_.m_priority_);
    swap(m_requiresAck_, other_.m_requiresAck_);
}  

bool MessageHeader::operator == (const MessageHeader& other_) const {
    if (m_messageId_ != other_.m_messageId_) {
        return false;
    }
    if (m_sender_ != other_.m_sender_) {
        return false;
    }
    if (m_receiver_ != other_.m_receiver_) {
        return false;
    }
    if (m_messageType_ != other_.m_messageType_) {
        return false;
    }
    if (m_timestamp_ != other_.m_timestamp_) {
        return false;
    }
    if (m_sequenceNumber_ != other_.m_sequenceNumber_) {
        return false;
    }
    if (m_priority_ != other_.m_priority_) {
        return false;
    }
    if (m_requiresAck_ != other_.m_requiresAck_) {
        return false;
    }
    return true;
}
bool MessageHeader::operator != (const MessageHeader& other_) const {
    return !this->operator ==(other_);
}

// --- Getters and Setters: -------------------------------------------------
int32_t MessageHeader::messageId() const OMG_NOEXCEPT{
    return m_messageId_;
}

void MessageHeader::messageId(int32_t value) {
    m_messageId_ = value;
}

Particpaint& MessageHeader::sender() OMG_NOEXCEPT {
    return m_sender_;
}

const Particpaint& MessageHeader::sender() const OMG_NOEXCEPT {
    return m_sender_;
}

void MessageHeader::sender(const Particpaint& value) {
    m_sender_ = value;
}

Particpaint& MessageHeader::receiver() OMG_NOEXCEPT {
    return m_receiver_;
}

const Particpaint& MessageHeader::receiver() const OMG_NOEXCEPT {
    return m_receiver_;
}

void MessageHeader::receiver(const Particpaint& value) {
    m_receiver_ = value;
}

MessageType& MessageHeader::messageType() OMG_NOEXCEPT {
    return m_messageType_;
}

const MessageType& MessageHeader::messageType() const OMG_NOEXCEPT {
    return m_messageType_;
}

void MessageHeader::messageType(const MessageType& value) {
    m_messageType_ = value;
}

rti::core::int64 MessageHeader::timestamp() const OMG_NOEXCEPT{
    return m_timestamp_;
}

void MessageHeader::timestamp(rti::core::int64 value) {
    m_timestamp_ = value;
}

int32_t MessageHeader::sequenceNumber() const OMG_NOEXCEPT{
    return m_sequenceNumber_;
}

void MessageHeader::sequenceNumber(int32_t value) {
    m_sequenceNumber_ = value;
}

int32_t MessageHeader::priority() const OMG_NOEXCEPT{
    return m_priority_;
}

void MessageHeader::priority(int32_t value) {
    m_priority_ = value;
}

bool MessageHeader::requiresAck() const OMG_NOEXCEPT{
    return m_requiresAck_;
}

void MessageHeader::requiresAck(bool value) {
    m_requiresAck_ = value;
}

std::ostream& operator << (std::ostream& o,const MessageHeader& sample){
    rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "messageId: " << sample.messageId()<<", ";
    o << "sender: " << sample.sender()<<", ";
    o << "receiver: " << sample.receiver()<<", ";
    o << "messageType: " << sample.messageType()<<", ";
    o << "timestamp: " << sample.timestamp()<<", ";
    o << "sequenceNumber: " << sample.sequenceNumber()<<", ";
    o << "priority: " << sample.priority()<<", ";
    o << "requiresAck: " << sample.requiresAck() ;
    o <<"]";
    return o;
}

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        const dds::core::xtypes::EnumType& dynamic_type<MessageType>::get()
        {
            return static_cast<const dds::core::xtypes::EnumType&>(
                rti::core::native_conversions::cast_from_native<dds::core::xtypes::DynamicType>(
                    *(MessageType_c_get_typecode())));
        }

        const dds::core::xtypes::EnumType& dynamic_type<Particpaint>::get()
        {
            return static_cast<const dds::core::xtypes::EnumType&>(
                rti::core::native_conversions::cast_from_native<dds::core::xtypes::DynamicType>(
                    *(Particpaint_c_get_typecode())));
        }

        const dds::core::xtypes::StructType& dynamic_type<MessageHeader>::get()
        {
            return static_cast<const dds::core::xtypes::StructType&>(
                rti::core::native_conversions::cast_from_native<dds::core::xtypes::DynamicType>(
                    *(MessageHeader_c_get_typecode())));
        }

    }
}  

namespace dds { 
    namespace topic {
        void topic_type_support<MessageHeader>:: register_type(
            dds::domain::DomainParticipant& participant,
            const std::string& type_name){

            rti::domain::register_type_plugin(
                participant,
                type_name,
                MessageHeader_cPlugin_new,
                MessageHeader_cPlugin_delete);
        }

        void topic_type_support<MessageHeader>::initialize_sample(MessageHeader& sample){

            MessageHeader_c* native_sample=reinterpret_cast<MessageHeader_c*> (&sample);

            struct DDS_TypeDeallocationParams_t deAllocParams = {RTI_FALSE, RTI_FALSE};
            MessageHeader_c_finalize_w_params(native_sample,&deAllocParams);

            struct DDS_TypeAllocationParams_t allocParams = {RTI_FALSE, RTI_FALSE, RTI_TRUE}; 
            RTIBool ok=MessageHeader_c_initialize_w_params(native_sample,&allocParams);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to initialize_w_params");

        } 

        std::vector<char>& topic_type_support<MessageHeader>::to_cdr_buffer(
            std::vector<char>& buffer, const MessageHeader& sample)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = MessageHeader_cPlugin_serialize_to_cdr_buffer(
                NULL, &length,reinterpret_cast<const MessageHeader_c*>(&sample));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = MessageHeader_cPlugin_serialize_to_cdr_buffer(
                &buffer[0], &length, reinterpret_cast<const MessageHeader_c*>(&sample));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;

        }

        void topic_type_support<MessageHeader>::from_cdr_buffer(MessageHeader& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = MessageHeader_cPlugin_deserialize_from_cdr_buffer(
                reinterpret_cast<MessageHeader_c*> (&sample), &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to create MessageHeader from cdr buffer");
        }

    }
}  

