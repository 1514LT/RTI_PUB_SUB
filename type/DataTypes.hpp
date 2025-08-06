

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DataTypes.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef DataTypes_470593198_hpp
#define DataTypes_470593198_hpp

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

class NDDSUSERDllExport largePacket {

  public:
    largePacket();
    largePacket(
        rti::core::int64 sequence_number,
        rti::core::int64 timestamp_ns,
        const dds::core::array<char, 1484>& payload);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    largePacket (largePacket&& other_) = default;
    largePacket& operator=(largePacket&&  other_) = default;
    largePacket& operator=(const largePacket&) = default;
    largePacket(const largePacket&) = default;
    #else
    largePacket(largePacket&& other_) OMG_NOEXCEPT;  
    largePacket& operator=(largePacket&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    rti::core::int64 sequence_number() const OMG_NOEXCEPT;
    void sequence_number(rti::core::int64 value);

    rti::core::int64 timestamp_ns() const OMG_NOEXCEPT;
    void timestamp_ns(rti::core::int64 value);

    dds::core::array<char, 1484>& payload() OMG_NOEXCEPT; 
    const dds::core::array<char, 1484>& payload() const OMG_NOEXCEPT;
    void payload(const dds::core::array<char, 1484>& value);

    bool operator == (const largePacket& other_) const;
    bool operator != (const largePacket& other_) const;

    void swap(largePacket& other_) OMG_NOEXCEPT ;

  private:

    rti::core::int64 m_sequence_number_;
    rti::core::int64 m_timestamp_ns_;
    dds::core::array<char, 1484> m_payload_;

};

inline void swap(largePacket& a, largePacket& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const largePacket& sample);

class NDDSUSERDllExport smallPacket {

  public:
    smallPacket();
    smallPacket(
        rti::core::int64 sequence_number,
        rti::core::int64 timestamp_ns,
        const dds::core::array<char, 4>& payload0,
        const dds::core::array<char, 4>& payload1,
        const dds::core::array<char, 4>& payload2,
        const dds::core::array<char, 4>& payload3,
        const dds::core::array<char, 4>& payload4);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    smallPacket (smallPacket&& other_) = default;
    smallPacket& operator=(smallPacket&&  other_) = default;
    smallPacket& operator=(const smallPacket&) = default;
    smallPacket(const smallPacket&) = default;
    #else
    smallPacket(smallPacket&& other_) OMG_NOEXCEPT;  
    smallPacket& operator=(smallPacket&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    rti::core::int64 sequence_number() const OMG_NOEXCEPT;
    void sequence_number(rti::core::int64 value);

    rti::core::int64 timestamp_ns() const OMG_NOEXCEPT;
    void timestamp_ns(rti::core::int64 value);

    dds::core::array<char, 4>& payload0() OMG_NOEXCEPT; 
    const dds::core::array<char, 4>& payload0() const OMG_NOEXCEPT;
    void payload0(const dds::core::array<char, 4>& value);

    dds::core::array<char, 4>& payload1() OMG_NOEXCEPT; 
    const dds::core::array<char, 4>& payload1() const OMG_NOEXCEPT;
    void payload1(const dds::core::array<char, 4>& value);

    dds::core::array<char, 4>& payload2() OMG_NOEXCEPT; 
    const dds::core::array<char, 4>& payload2() const OMG_NOEXCEPT;
    void payload2(const dds::core::array<char, 4>& value);

    dds::core::array<char, 4>& payload3() OMG_NOEXCEPT; 
    const dds::core::array<char, 4>& payload3() const OMG_NOEXCEPT;
    void payload3(const dds::core::array<char, 4>& value);

    dds::core::array<char, 4>& payload4() OMG_NOEXCEPT; 
    const dds::core::array<char, 4>& payload4() const OMG_NOEXCEPT;
    void payload4(const dds::core::array<char, 4>& value);

    bool operator == (const smallPacket& other_) const;
    bool operator != (const smallPacket& other_) const;

    void swap(smallPacket& other_) OMG_NOEXCEPT ;

  private:

    rti::core::int64 m_sequence_number_;
    rti::core::int64 m_timestamp_ns_;
    dds::core::array<char, 4> m_payload0_;
    dds::core::array<char, 4> m_payload1_;
    dds::core::array<char, 4> m_payload2_;
    dds::core::array<char, 4> m_payload3_;
    dds::core::array<char, 4> m_payload4_;

};

inline void swap(smallPacket& a, smallPacket& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const smallPacket& sample);

namespace dds { 
    namespace topic {

        template<>
        struct topic_type_name<largePacket> {
            NDDSUSERDllExport static std::string value() {
                return "largePacket";
            }
        };

        template<>
        struct is_topic_type<largePacket> : public dds::core::true_type {};

        template<>
        struct topic_type_support<largePacket> {

            NDDSUSERDllExport static void initialize_sample(largePacket& sample);

            NDDSUSERDllExport static void register_type(
                dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, const largePacket& sample);

            NDDSUSERDllExport static void from_cdr_buffer(largePacket& sample, const std::vector<char>& buffer);
        };

        template<>
        struct topic_type_name<smallPacket> {
            NDDSUSERDllExport static std::string value() {
                return "smallPacket";
            }
        };

        template<>
        struct is_topic_type<smallPacket> : public dds::core::true_type {};

        template<>
        struct topic_type_support<smallPacket> {

            NDDSUSERDllExport static void initialize_sample(smallPacket& sample);

            NDDSUSERDllExport static void register_type(
                dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, const smallPacket& sample);

            NDDSUSERDllExport static void from_cdr_buffer(smallPacket& sample, const std::vector<char>& buffer);
        };

    }
}

namespace rti { 
    namespace topic {
        template<>
        struct dynamic_type<largePacket> {
            typedef dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const dds::core::xtypes::StructType& get();
        };

        template<>
        struct impl_type<largePacket> {
            typedef largePacket_c type;
        };

        template<>
        struct dynamic_type<smallPacket> {
            typedef dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const dds::core::xtypes::StructType& get();
        };

        template<>
        struct impl_type<smallPacket> {
            typedef smallPacket_c type;
        };

    }
}

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif // DataTypes_470593198_hpp

