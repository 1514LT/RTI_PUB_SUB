

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DateTypes.idl
using RTI Code Generator (rtiddsgen) version 4.5.0.1.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>
#include <atomic>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "DateTypesPlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "DateTypes.hpp"

#include <rti/util/ostream_operators.hpp>

// ---- Target: 

Target::Target() :
    m_index_ (0) ,
    m_buff_ ("")  {

}   

Target::Target (int32_t index_,const std::string& buff_):
    m_index_(index_), 
    m_buff_(buff_) {
}

void Target::swap(Target& other_)  noexcept 
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

std::ostream& operator << (std::ostream& o,const Target& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "index: " << sample.index()<<", ";
    o << "buff: " << sample.buff();
    o <<"]";
    return o;
}

// ---- TargetReply: 

TargetReply::TargetReply() :
    m_flag_ (0)  {

}   

TargetReply::TargetReply (int32_t flag_):
    m_flag_(flag_) {
}

void TargetReply::swap(TargetReply& other_)  noexcept 
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

std::ostream& operator << (std::ostream& o,const TargetReply& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "flag: " << sample.flag();
    o <<"]";
    return o;
}

#ifdef NDDS_STANDALONE_TYPE
namespace rti {
    namespace topic {
    }
}

#else
// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        template<>
        struct native_type_code< ::Target > {

            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static std::atomic_bool is_initialized {false};

                static DDS_TypeCode Target_g_tc_buff_string;

                static DDS_TypeCode_Member Target_g_tc_members[2]=
                {

                    {
                        (char *)"index",/* Member name */
                        {
                            0,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"buff",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode Target_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"Target", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        Target_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for Target*/

                if (is_initialized.load(std::memory_order_acquire)) {
                    return &Target_g_tc;
                }

                Target_g_tc_buff_string = initialize_string_typecode((255L));

                Target_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Target_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
                Target_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&Target_g_tc_buff_string;

                /* Initialize the values for member annotations. */
                Target_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                Target_g_tc_members[0]._annotations._defaultValue._u.long_value = 0;
                Target_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                Target_g_tc_members[0]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                Target_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                Target_g_tc_members[0]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;
                Target_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                Target_g_tc_members[1]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                Target_g_tc._data._sampleAccessInfo = sample_access_info();
                Target_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized.store(true, std::memory_order_release);

                return &Target_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static std::atomic_bool is_initialized {false};

                ::Target *sample;

                static RTIXCdrMemberAccessInfo Target_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Target_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized.load(std::memory_order_acquire)) {
                    return (RTIXCdrSampleAccessInfo*) &Target_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::Target);
                if (sample == NULL) {
                    return NULL;
                }

                Target_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->index() - (char *)sample);

                Target_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->buff() - (char *)sample);

                Target_g_sampleAccessInfo.memberAccessInfos = 
                Target_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::Target);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Target_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Target_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Target_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Target_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::Target >;

                Target_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized.store(true, std::memory_order_release);
                return (RTIXCdrSampleAccessInfo*) &Target_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Target_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &Target_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::Target >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::Target >::get())));
        }

        template<>
        struct native_type_code< ::TargetReply > {

            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static std::atomic_bool is_initialized {false};

                static DDS_TypeCode_Member TargetReply_g_tc_members[1]=
                {

                    {
                        (char *)"flag",/* Member name */
                        {
                            0,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode TargetReply_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"TargetReply", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        TargetReply_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for TargetReply*/

                if (is_initialized.load(std::memory_order_acquire)) {
                    return &TargetReply_g_tc;
                }

                TargetReply_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                TargetReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                /* Initialize the values for member annotations. */
                TargetReply_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                TargetReply_g_tc_members[0]._annotations._defaultValue._u.long_value = 0;
                TargetReply_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                TargetReply_g_tc_members[0]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                TargetReply_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                TargetReply_g_tc_members[0]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                TargetReply_g_tc._data._sampleAccessInfo = sample_access_info();
                TargetReply_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized.store(true, std::memory_order_release);

                return &TargetReply_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static std::atomic_bool is_initialized {false};

                ::TargetReply *sample;

                static RTIXCdrMemberAccessInfo TargetReply_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo TargetReply_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized.load(std::memory_order_acquire)) {
                    return (RTIXCdrSampleAccessInfo*) &TargetReply_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::TargetReply);
                if (sample == NULL) {
                    return NULL;
                }

                TargetReply_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->flag() - (char *)sample);

                TargetReply_g_sampleAccessInfo.memberAccessInfos = 
                TargetReply_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::TargetReply);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        TargetReply_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        TargetReply_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                TargetReply_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                TargetReply_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::TargetReply >;

                TargetReply_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized.store(true, std::memory_order_release);
                return (RTIXCdrSampleAccessInfo*) &TargetReply_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin TargetReply_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &TargetReply_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::TargetReply >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::TargetReply >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::Target >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::TargetPlugin_new,
                ::TargetPlugin_delete);
        }

        std::vector<char>& topic_type_support< ::Target >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::Target& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = TargetPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = TargetPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::Target >::from_cdr_buffer(::Target& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = TargetPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::Target from cdr buffer");
        }

        void topic_type_support< ::Target >::reset_sample(::Target& sample) 
        {
            sample.index(0);
            sample.buff("");
        }

        void topic_type_support< ::Target >::allocate_sample(::Target& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.buff(),  -1, 255L);
        }
        void topic_type_support< ::TargetReply >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::TargetReplyPlugin_new,
                ::TargetReplyPlugin_delete);
        }

        std::vector<char>& topic_type_support< ::TargetReply >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::TargetReply& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = TargetReplyPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = TargetReplyPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::TargetReply >::from_cdr_buffer(::TargetReply& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = TargetReplyPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::TargetReply from cdr buffer");
        }

        void topic_type_support< ::TargetReply >::reset_sample(::TargetReply& sample) 
        {
            sample.flag(0);
        }

        void topic_type_support< ::TargetReply >::allocate_sample(::TargetReply& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
