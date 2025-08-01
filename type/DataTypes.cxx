

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

// ---- Target: 

Target::Target() :
    m_index_ (0) {
}   

Target::Target (
    int32_t index,
    const dds::core::string& buff)
    :
        m_index_( index ),
        m_buff_( buff ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
Target::Target(Target&& other_) OMG_NOEXCEPT  :m_index_ (std::move(other_.m_index_))
,
m_buff_ (std::move(other_.m_buff_))
{
} 

Target& Target::operator=(Target&&  other_) OMG_NOEXCEPT {
    Target tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void Target::swap(Target& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_index_, other_.m_index_);
    swap(m_buff_, other_.m_buff_);
}  

bool Target::operator == (const Target& other_) const {
    if (m_index_ != other_.m_index_) {
        return false;
    }
    if (m_buff_ != other_.m_buff_) {
        return false;
    }
    return true;
}
bool Target::operator != (const Target& other_) const {
    return !this->operator ==(other_);
}

// --- Getters and Setters: -------------------------------------------------
int32_t Target::index() const OMG_NOEXCEPT{
    return m_index_;
}

void Target::index(int32_t value) {
    m_index_ = value;
}

dds::core::string& Target::buff() OMG_NOEXCEPT {
    return m_buff_;
}

const dds::core::string& Target::buff() const OMG_NOEXCEPT {
    return m_buff_;
}

void Target::buff(const dds::core::string& value) {
    m_buff_ = value;
}

std::ostream& operator << (std::ostream& o,const Target& sample){
    rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "index: " << sample.index()<<", ";
    o << "buff: " << sample.buff() ;
    o <<"]";
    return o;
}

// ---- TargetReply: 

TargetReply::TargetReply() :
    m_flag_ (0) {
}   

TargetReply::TargetReply (
    int32_t flag)
    :
        m_flag_( flag ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
TargetReply::TargetReply(TargetReply&& other_) OMG_NOEXCEPT  :m_flag_ (std::move(other_.m_flag_))
{
} 

TargetReply& TargetReply::operator=(TargetReply&&  other_) OMG_NOEXCEPT {
    TargetReply tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void TargetReply::swap(TargetReply& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_flag_, other_.m_flag_);
}  

bool TargetReply::operator == (const TargetReply& other_) const {
    if (m_flag_ != other_.m_flag_) {
        return false;
    }
    return true;
}
bool TargetReply::operator != (const TargetReply& other_) const {
    return !this->operator ==(other_);
}

// --- Getters and Setters: -------------------------------------------------
int32_t TargetReply::flag() const OMG_NOEXCEPT{
    return m_flag_;
}

void TargetReply::flag(int32_t value) {
    m_flag_ = value;
}

std::ostream& operator << (std::ostream& o,const TargetReply& sample){
    rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "flag: " << sample.flag() ;
    o <<"]";
    return o;
}

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        const dds::core::xtypes::StructType& dynamic_type<Target>::get()
        {
            return static_cast<const dds::core::xtypes::StructType&>(
                rti::core::native_conversions::cast_from_native<dds::core::xtypes::DynamicType>(
                    *(Target_c_get_typecode())));
        }

        const dds::core::xtypes::StructType& dynamic_type<TargetReply>::get()
        {
            return static_cast<const dds::core::xtypes::StructType&>(
                rti::core::native_conversions::cast_from_native<dds::core::xtypes::DynamicType>(
                    *(TargetReply_c_get_typecode())));
        }

    }
}  

namespace dds { 
    namespace topic {
        void topic_type_support<Target>:: register_type(
            dds::domain::DomainParticipant& participant,
            const std::string& type_name){

            rti::domain::register_type_plugin(
                participant,
                type_name,
                Target_cPlugin_new,
                Target_cPlugin_delete);
        }

        void topic_type_support<Target>::initialize_sample(Target& sample){

            Target_c* native_sample=reinterpret_cast<Target_c*> (&sample);

            struct DDS_TypeDeallocationParams_t deAllocParams = {RTI_FALSE, RTI_FALSE};
            Target_c_finalize_w_params(native_sample,&deAllocParams);

            struct DDS_TypeAllocationParams_t allocParams = {RTI_FALSE, RTI_FALSE, RTI_TRUE}; 
            RTIBool ok=Target_c_initialize_w_params(native_sample,&allocParams);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to initialize_w_params");

        } 

        std::vector<char>& topic_type_support<Target>::to_cdr_buffer(
            std::vector<char>& buffer, const Target& sample)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = Target_cPlugin_serialize_to_cdr_buffer(
                NULL, &length,reinterpret_cast<const Target_c*>(&sample));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = Target_cPlugin_serialize_to_cdr_buffer(
                &buffer[0], &length, reinterpret_cast<const Target_c*>(&sample));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;

        }

        void topic_type_support<Target>::from_cdr_buffer(Target& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = Target_cPlugin_deserialize_from_cdr_buffer(
                reinterpret_cast<Target_c*> (&sample), &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to create Target from cdr buffer");
        }

        void topic_type_support<TargetReply>:: register_type(
            dds::domain::DomainParticipant& participant,
            const std::string& type_name){

            rti::domain::register_type_plugin(
                participant,
                type_name,
                TargetReply_cPlugin_new,
                TargetReply_cPlugin_delete);
        }

        void topic_type_support<TargetReply>::initialize_sample(TargetReply& sample){

            TargetReply_c* native_sample=reinterpret_cast<TargetReply_c*> (&sample);

            struct DDS_TypeDeallocationParams_t deAllocParams = {RTI_FALSE, RTI_FALSE};
            TargetReply_c_finalize_w_params(native_sample,&deAllocParams);

            struct DDS_TypeAllocationParams_t allocParams = {RTI_FALSE, RTI_FALSE, RTI_TRUE}; 
            RTIBool ok=TargetReply_c_initialize_w_params(native_sample,&allocParams);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to initialize_w_params");

        } 

        std::vector<char>& topic_type_support<TargetReply>::to_cdr_buffer(
            std::vector<char>& buffer, const TargetReply& sample)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = TargetReply_cPlugin_serialize_to_cdr_buffer(
                NULL, &length,reinterpret_cast<const TargetReply_c*>(&sample));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = TargetReply_cPlugin_serialize_to_cdr_buffer(
                &buffer[0], &length, reinterpret_cast<const TargetReply_c*>(&sample));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;

        }

        void topic_type_support<TargetReply>::from_cdr_buffer(TargetReply& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = TargetReply_cPlugin_deserialize_from_cdr_buffer(
                reinterpret_cast<TargetReply_c*> (&sample), &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to create TargetReply from cdr buffer");
        }

    }
}  

