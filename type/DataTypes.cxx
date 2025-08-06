

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DataTypes.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include <iosfwd>
#include <iomanip>
#include "DataTypes.hpp"
#include "DataTypesImplPlugin.h"

// ---- largePacket: 

largePacket::largePacket() :
    m_sequence_number_ (0ll) ,
    m_timestamp_ns_ (0ll) {
        rti::core::fill_array<char>( m_payload_, 0);
}   

largePacket::largePacket (
    rti::core::int64 sequence_number,
    rti::core::int64 timestamp_ns,
    const dds::core::array<char, 1484>& payload)
    :
        m_sequence_number_( sequence_number ),
        m_timestamp_ns_( timestamp_ns ),
        m_payload_( payload ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
largePacket::largePacket(largePacket&& other_) OMG_NOEXCEPT  :m_sequence_number_ (std::move(other_.m_sequence_number_))
,
m_timestamp_ns_ (std::move(other_.m_timestamp_ns_))
,
m_payload_ (std::move(other_.m_payload_))
{
} 

largePacket& largePacket::operator=(largePacket&&  other_) OMG_NOEXCEPT {
    largePacket tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void largePacket::swap(largePacket& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_sequence_number_, other_.m_sequence_number_);
    swap(m_timestamp_ns_, other_.m_timestamp_ns_);
    swap(m_payload_, other_.m_payload_);
}  

bool largePacket::operator == (const largePacket& other_) const {
    if (m_sequence_number_ != other_.m_sequence_number_) {
        return false;
    }
    if (m_timestamp_ns_ != other_.m_timestamp_ns_) {
        return false;
    }
    if (m_payload_ != other_.m_payload_) {
        return false;
    }
    return true;
}
bool largePacket::operator != (const largePacket& other_) const {
    return !this->operator ==(other_);
}

// --- Getters and Setters: -------------------------------------------------
rti::core::int64 largePacket::sequence_number() const OMG_NOEXCEPT{
    return m_sequence_number_;
}

void largePacket::sequence_number(rti::core::int64 value) {
    m_sequence_number_ = value;
}

rti::core::int64 largePacket::timestamp_ns() const OMG_NOEXCEPT{
    return m_timestamp_ns_;
}

void largePacket::timestamp_ns(rti::core::int64 value) {
    m_timestamp_ns_ = value;
}

dds::core::array<char, 1484>& largePacket::payload() OMG_NOEXCEPT {
    return m_payload_;
}

const dds::core::array<char, 1484>& largePacket::payload() const OMG_NOEXCEPT {
    return m_payload_;
}

void largePacket::payload(const dds::core::array<char, 1484>& value) {
    m_payload_ = value;
}

std::ostream& operator << (std::ostream& o,const largePacket& sample){
    rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "sequence_number: " << sample.sequence_number()<<", ";
    o << "timestamp_ns: " << sample.timestamp_ns()<<", ";
    o << "payload: " << sample.payload() ;
    o <<"]";
    return o;
}

// ---- smallPacket: 

smallPacket::smallPacket() :
    m_sequence_number_ (0ll) ,
    m_timestamp_ns_ (0ll) {
        rti::core::fill_array<char>( m_payload0_, 0);
        rti::core::fill_array<char>( m_payload1_, 0);
        rti::core::fill_array<char>( m_payload2_, 0);
        rti::core::fill_array<char>( m_payload3_, 0);
        rti::core::fill_array<char>( m_payload4_, 0);
}   

smallPacket::smallPacket (
    rti::core::int64 sequence_number,
    rti::core::int64 timestamp_ns,
    const dds::core::array<char, 4>& payload0,
    const dds::core::array<char, 4>& payload1,
    const dds::core::array<char, 4>& payload2,
    const dds::core::array<char, 4>& payload3,
    const dds::core::array<char, 4>& payload4)
    :
        m_sequence_number_( sequence_number ),
        m_timestamp_ns_( timestamp_ns ),
        m_payload0_( payload0 ),
        m_payload1_( payload1 ),
        m_payload2_( payload2 ),
        m_payload3_( payload3 ),
        m_payload4_( payload4 ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
smallPacket::smallPacket(smallPacket&& other_) OMG_NOEXCEPT  :m_sequence_number_ (std::move(other_.m_sequence_number_))
,
m_timestamp_ns_ (std::move(other_.m_timestamp_ns_))
,
m_payload0_ (std::move(other_.m_payload0_))
,
m_payload1_ (std::move(other_.m_payload1_))
,
m_payload2_ (std::move(other_.m_payload2_))
,
m_payload3_ (std::move(other_.m_payload3_))
,
m_payload4_ (std::move(other_.m_payload4_))
{
} 

smallPacket& smallPacket::operator=(smallPacket&&  other_) OMG_NOEXCEPT {
    smallPacket tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void smallPacket::swap(smallPacket& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_sequence_number_, other_.m_sequence_number_);
    swap(m_timestamp_ns_, other_.m_timestamp_ns_);
    swap(m_payload0_, other_.m_payload0_);
    swap(m_payload1_, other_.m_payload1_);
    swap(m_payload2_, other_.m_payload2_);
    swap(m_payload3_, other_.m_payload3_);
    swap(m_payload4_, other_.m_payload4_);
}  

bool smallPacket::operator == (const smallPacket& other_) const {
    if (m_sequence_number_ != other_.m_sequence_number_) {
        return false;
    }
    if (m_timestamp_ns_ != other_.m_timestamp_ns_) {
        return false;
    }
    if (m_payload0_ != other_.m_payload0_) {
        return false;
    }
    if (m_payload1_ != other_.m_payload1_) {
        return false;
    }
    if (m_payload2_ != other_.m_payload2_) {
        return false;
    }
    if (m_payload3_ != other_.m_payload3_) {
        return false;
    }
    if (m_payload4_ != other_.m_payload4_) {
        return false;
    }
    return true;
}
bool smallPacket::operator != (const smallPacket& other_) const {
    return !this->operator ==(other_);
}

// --- Getters and Setters: -------------------------------------------------
rti::core::int64 smallPacket::sequence_number() const OMG_NOEXCEPT{
    return m_sequence_number_;
}

void smallPacket::sequence_number(rti::core::int64 value) {
    m_sequence_number_ = value;
}

rti::core::int64 smallPacket::timestamp_ns() const OMG_NOEXCEPT{
    return m_timestamp_ns_;
}

void smallPacket::timestamp_ns(rti::core::int64 value) {
    m_timestamp_ns_ = value;
}

dds::core::array<char, 4>& smallPacket::payload0() OMG_NOEXCEPT {
    return m_payload0_;
}

const dds::core::array<char, 4>& smallPacket::payload0() const OMG_NOEXCEPT {
    return m_payload0_;
}

void smallPacket::payload0(const dds::core::array<char, 4>& value) {
    m_payload0_ = value;
}

dds::core::array<char, 4>& smallPacket::payload1() OMG_NOEXCEPT {
    return m_payload1_;
}

const dds::core::array<char, 4>& smallPacket::payload1() const OMG_NOEXCEPT {
    return m_payload1_;
}

void smallPacket::payload1(const dds::core::array<char, 4>& value) {
    m_payload1_ = value;
}

dds::core::array<char, 4>& smallPacket::payload2() OMG_NOEXCEPT {
    return m_payload2_;
}

const dds::core::array<char, 4>& smallPacket::payload2() const OMG_NOEXCEPT {
    return m_payload2_;
}

void smallPacket::payload2(const dds::core::array<char, 4>& value) {
    m_payload2_ = value;
}

dds::core::array<char, 4>& smallPacket::payload3() OMG_NOEXCEPT {
    return m_payload3_;
}

const dds::core::array<char, 4>& smallPacket::payload3() const OMG_NOEXCEPT {
    return m_payload3_;
}

void smallPacket::payload3(const dds::core::array<char, 4>& value) {
    m_payload3_ = value;
}

dds::core::array<char, 4>& smallPacket::payload4() OMG_NOEXCEPT {
    return m_payload4_;
}

const dds::core::array<char, 4>& smallPacket::payload4() const OMG_NOEXCEPT {
    return m_payload4_;
}

void smallPacket::payload4(const dds::core::array<char, 4>& value) {
    m_payload4_ = value;
}

std::ostream& operator << (std::ostream& o,const smallPacket& sample){
    rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "sequence_number: " << sample.sequence_number()<<", ";
    o << "timestamp_ns: " << sample.timestamp_ns()<<", ";
    o << "payload0: " << sample.payload0()<<", ";
    o << "payload1: " << sample.payload1()<<", ";
    o << "payload2: " << sample.payload2()<<", ";
    o << "payload3: " << sample.payload3()<<", ";
    o << "payload4: " << sample.payload4() ;
    o <<"]";
    return o;
}

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        const dds::core::xtypes::StructType& dynamic_type<largePacket>::get()
        {
            return static_cast<const dds::core::xtypes::StructType&>(
                rti::core::native_conversions::cast_from_native<dds::core::xtypes::DynamicType>(
                    *(largePacket_c_get_typecode())));
        }

        const dds::core::xtypes::StructType& dynamic_type<smallPacket>::get()
        {
            return static_cast<const dds::core::xtypes::StructType&>(
                rti::core::native_conversions::cast_from_native<dds::core::xtypes::DynamicType>(
                    *(smallPacket_c_get_typecode())));
        }

    }
}  

namespace dds { 
    namespace topic {
        void topic_type_support<largePacket>:: register_type(
            dds::domain::DomainParticipant& participant,
            const std::string& type_name){

            rti::domain::register_type_plugin(
                participant,
                type_name,
                largePacket_cPlugin_new,
                largePacket_cPlugin_delete);
        }

        void topic_type_support<largePacket>::initialize_sample(largePacket& sample){

            largePacket_c* native_sample=reinterpret_cast<largePacket_c*> (&sample);

            struct DDS_TypeDeallocationParams_t deAllocParams = {RTI_FALSE, RTI_FALSE};
            largePacket_c_finalize_w_params(native_sample,&deAllocParams);

            struct DDS_TypeAllocationParams_t allocParams = {RTI_FALSE, RTI_FALSE, RTI_TRUE}; 
            RTIBool ok=largePacket_c_initialize_w_params(native_sample,&allocParams);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to initialize_w_params");

        } 

        std::vector<char>& topic_type_support<largePacket>::to_cdr_buffer(
            std::vector<char>& buffer, const largePacket& sample)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = largePacket_cPlugin_serialize_to_cdr_buffer(
                NULL, &length,reinterpret_cast<const largePacket_c*>(&sample));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = largePacket_cPlugin_serialize_to_cdr_buffer(
                &buffer[0], &length, reinterpret_cast<const largePacket_c*>(&sample));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;

        }

        void topic_type_support<largePacket>::from_cdr_buffer(largePacket& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = largePacket_cPlugin_deserialize_from_cdr_buffer(
                reinterpret_cast<largePacket_c*> (&sample), &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to create largePacket from cdr buffer");
        }

        void topic_type_support<smallPacket>:: register_type(
            dds::domain::DomainParticipant& participant,
            const std::string& type_name){

            rti::domain::register_type_plugin(
                participant,
                type_name,
                smallPacket_cPlugin_new,
                smallPacket_cPlugin_delete);
        }

        void topic_type_support<smallPacket>::initialize_sample(smallPacket& sample){

            smallPacket_c* native_sample=reinterpret_cast<smallPacket_c*> (&sample);

            struct DDS_TypeDeallocationParams_t deAllocParams = {RTI_FALSE, RTI_FALSE};
            smallPacket_c_finalize_w_params(native_sample,&deAllocParams);

            struct DDS_TypeAllocationParams_t allocParams = {RTI_FALSE, RTI_FALSE, RTI_TRUE}; 
            RTIBool ok=smallPacket_c_initialize_w_params(native_sample,&allocParams);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to initialize_w_params");

        } 

        std::vector<char>& topic_type_support<smallPacket>::to_cdr_buffer(
            std::vector<char>& buffer, const smallPacket& sample)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = smallPacket_cPlugin_serialize_to_cdr_buffer(
                NULL, &length,reinterpret_cast<const smallPacket_c*>(&sample));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = smallPacket_cPlugin_serialize_to_cdr_buffer(
                &buffer[0], &length, reinterpret_cast<const smallPacket_c*>(&sample));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;

        }

        void topic_type_support<smallPacket>::from_cdr_buffer(smallPacket& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = smallPacket_cPlugin_deserialize_from_cdr_buffer(
                reinterpret_cast<smallPacket_c*> (&sample), &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to create smallPacket from cdr buffer");
        }

    }
}  

