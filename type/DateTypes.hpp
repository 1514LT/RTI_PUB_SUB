

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DateTypes.idl
using RTI Code Generator (rtiddsgen) version 4.5.0.1.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef DateTypes_1256646860_hpp
#define DateTypes_1256646860_hpp

#include <iosfwd>

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport __declspec(dllexport)
#endif

#include "dds/core/SafeEnumeration.hpp"
#include "dds/core/String.hpp"
#include "dds/core/array.hpp"
#include "dds/core/vector.hpp"
#include "dds/core/External.hpp"
#include "rti/core/LongDouble.hpp"
#include "rti/core/Pointer.hpp"
#include "rti/core/array.hpp"
#include "rti/topic/TopicTraits.hpp"

#include "omg/types/string_view.hpp"

#include "rti/core/BoundedSequence.hpp"
#include "dds/core/Optional.hpp"

#ifndef NDDS_STANDALONE_TYPE
#include "cdr/cdr_typeCode.h"
#include "dds/domain/DomainParticipant.hpp"
#include "dds/topic/TopicTraits.hpp"
#include "dds/core/xtypes/DynamicType.hpp"
#include "dds/core/xtypes/StructType.hpp"
#include "dds/core/xtypes/UnionType.hpp"
#include "dds/core/xtypes/EnumType.hpp"
#include "dds/core/xtypes/AliasType.hpp"
#include "rti/util/StreamFlagSaver.hpp"
#include "rti/domain/PluginSupport.hpp"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

class NDDSUSERDllExport Target {
  public:

    Target();

    Target(int32_t index_,const std::string& buff_);

    int32_t& index() noexcept {
        return m_index_;
    }

    const int32_t& index() const noexcept {
        return m_index_;
    }

    void index(int32_t value) {

        m_index_ = value;
    }

    std::string& buff() noexcept {
        return m_buff_;
    }

    const std::string& buff() const noexcept {
        return m_buff_;
    }

    void buff(const std::string& value) {

        m_buff_ = value;
    }

    void buff(std::string&& value) {
        m_buff_ = std::move(value);
    }
    bool operator == (const Target& other_) const;
    bool operator != (const Target& other_) const;

    void swap(Target& other_) noexcept ;

  private:

    int32_t m_index_;
    std::string m_buff_;

};

inline void swap(Target& a, Target& b)  noexcept 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const Target& sample);

class NDDSUSERDllExport TargetReply {
  public:

    TargetReply();

    explicit TargetReply(int32_t flag_);

    int32_t& flag() noexcept {
        return m_flag_;
    }

    const int32_t& flag() const noexcept {
        return m_flag_;
    }

    void flag(int32_t value) {

        m_flag_ = value;
    }

    bool operator == (const TargetReply& other_) const;
    bool operator != (const TargetReply& other_) const;

    void swap(TargetReply& other_) noexcept ;

  private:

    int32_t m_flag_;

};

inline void swap(TargetReply& a, TargetReply& b)  noexcept 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const TargetReply& sample);

#ifdef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace topic {
    }
}
#else

namespace rti {
    namespace flat {
        namespace topic {
        }
    }
}
namespace dds {
    namespace topic {

        template<>
        struct topic_type_name< ::Target > {
            NDDSUSERDllExport static std::string value() {
                return "Target";
            }
        };

        template<>
        struct is_topic_type< ::Target > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::Target > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::Target& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::Target& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::Target& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::Target& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
        template<>
        struct topic_type_name< ::TargetReply > {
            NDDSUSERDllExport static std::string value() {
                return "TargetReply";
            }
        };

        template<>
        struct is_topic_type< ::TargetReply > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::TargetReply > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::TargetReply& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::TargetReply& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::TargetReply& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::TargetReply& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::Target > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::Target > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::TargetReply > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::TargetReply > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

    }
}

#endif // NDDS_STANDALONE_TYPE
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif // DateTypes_1256646860_hpp
