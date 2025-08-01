

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DataTypes.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef DataTypes_470592838_hpp
#define DataTypes_470592838_hpp

#include <iosfwd>
#include "DataTypesImpl.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport __declspec(dllexport)
#endif

#include "dds/domain/DomainParticipant.hpp"
#include "dds/topic/TopicTraits.hpp"
#include "dds/core/SafeEnumeration.hpp"
#include "dds/core/String.hpp"
#include "dds/core/array.hpp"
#include "dds/core/vector.hpp"
#include "dds/core/Optional.hpp"
#include "dds/core/xtypes/DynamicType.hpp"
#include "dds/core/xtypes/StructType.hpp"
#include "dds/core/xtypes/UnionType.hpp"
#include "dds/core/xtypes/EnumType.hpp"
#include "dds/core/xtypes/AliasType.hpp"
#include "rti/core/array.hpp"
#include "rti/util/StreamFlagSaver.hpp"
#include "rti/domain/PluginSupport.hpp"
#include "rti/core/LongDouble.hpp"
#include "rti/core/Pointer.hpp"
#include "rti/topic/TopicTraits.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

class NDDSUSERDllExport Target {

  public:
    Target();
    Target(
        int32_t index,
        const dds::core::string& buff);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    Target (Target&& other_) = default;
    Target& operator=(Target&&  other_) = default;
    Target& operator=(const Target&) = default;
    Target(const Target&) = default;
    #else
    Target(Target&& other_) OMG_NOEXCEPT;  
    Target& operator=(Target&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    int32_t index() const OMG_NOEXCEPT;
    void index(int32_t value);

    dds::core::string& buff() OMG_NOEXCEPT; 
    const dds::core::string& buff() const OMG_NOEXCEPT;
    void buff(const dds::core::string& value);

    bool operator == (const Target& other_) const;
    bool operator != (const Target& other_) const;

    void swap(Target& other_) OMG_NOEXCEPT ;

  private:

    int32_t m_index_;
    dds::core::string m_buff_;

};

inline void swap(Target& a, Target& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const Target& sample);

class NDDSUSERDllExport TargetReply {

  public:
    TargetReply();
    explicit TargetReply(
        int32_t flag);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    TargetReply (TargetReply&& other_) = default;
    TargetReply& operator=(TargetReply&&  other_) = default;
    TargetReply& operator=(const TargetReply&) = default;
    TargetReply(const TargetReply&) = default;
    #else
    TargetReply(TargetReply&& other_) OMG_NOEXCEPT;  
    TargetReply& operator=(TargetReply&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    int32_t flag() const OMG_NOEXCEPT;
    void flag(int32_t value);

    bool operator == (const TargetReply& other_) const;
    bool operator != (const TargetReply& other_) const;

    void swap(TargetReply& other_) OMG_NOEXCEPT ;

  private:

    int32_t m_flag_;

};

inline void swap(TargetReply& a, TargetReply& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const TargetReply& sample);

namespace dds { 
    namespace topic {

        template<>
        struct topic_type_name<Target> {
            NDDSUSERDllExport static std::string value() {
                return "Target";
            }
        };

        template<>
        struct is_topic_type<Target> : public dds::core::true_type {};

        template<>
        struct topic_type_support<Target> {

            NDDSUSERDllExport static void initialize_sample(Target& sample);

            NDDSUSERDllExport static void register_type(
                dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, const Target& sample);

            NDDSUSERDllExport static void from_cdr_buffer(Target& sample, const std::vector<char>& buffer);
        };

        template<>
        struct topic_type_name<TargetReply> {
            NDDSUSERDllExport static std::string value() {
                return "TargetReply";
            }
        };

        template<>
        struct is_topic_type<TargetReply> : public dds::core::true_type {};

        template<>
        struct topic_type_support<TargetReply> {

            NDDSUSERDllExport static void initialize_sample(TargetReply& sample);

            NDDSUSERDllExport static void register_type(
                dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, const TargetReply& sample);

            NDDSUSERDllExport static void from_cdr_buffer(TargetReply& sample, const std::vector<char>& buffer);
        };

    }
}

namespace rti { 
    namespace topic {
        template<>
        struct dynamic_type<Target> {
            typedef dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const dds::core::xtypes::StructType& get();
        };

        template<>
        struct impl_type<Target> {
            typedef Target_c type;
        };

        template<>
        struct dynamic_type<TargetReply> {
            typedef dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const dds::core::xtypes::StructType& get();
        };

        template<>
        struct impl_type<TargetReply> {
            typedef TargetReply_c type;
        };

    }
}

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif // DataTypes_470592838_hpp

