

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MessageHeader.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef MessageHeader_953112034_hpp
#define MessageHeader_953112034_hpp

#include <iosfwd>
#include "MessageHeaderImpl.h"

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

struct MessageType_def {
    enum type {
        HEARTBEAT,      
        TASK_REQUEST,      
        TASK_RESPONSE,      
        COMMAND     
    };
    static type get_default(){ return HEARTBEAT;}
};

typedef dds::core::safe_enum<MessageType_def> MessageType;
NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const MessageType& sample);
struct Particpaint_def {
    enum type {
        NodeA,      
        NodeB,      
        NodeC,      
        Guide     
    };
    static type get_default(){ return NodeA;}
};

typedef dds::core::safe_enum<Particpaint_def> Particpaint;
NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const Particpaint& sample);

class NDDSUSERDllExport MessageHeader {

  public:
    MessageHeader();
    MessageHeader(
        int32_t messageId,
        const Particpaint& sender,
        const Particpaint& receiver,
        const MessageType& messageType,
        rti::core::int64 timestamp,
        int32_t sequenceNumber,
        int32_t priority,
        bool requiresAck);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    MessageHeader (MessageHeader&& other_) = default;
    MessageHeader& operator=(MessageHeader&&  other_) = default;
    MessageHeader& operator=(const MessageHeader&) = default;
    MessageHeader(const MessageHeader&) = default;
    #else
    MessageHeader(MessageHeader&& other_) OMG_NOEXCEPT;  
    MessageHeader& operator=(MessageHeader&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    int32_t messageId() const OMG_NOEXCEPT;
    void messageId(int32_t value);

    Particpaint& sender() OMG_NOEXCEPT; 
    const Particpaint& sender() const OMG_NOEXCEPT;
    void sender(const Particpaint& value);

    Particpaint& receiver() OMG_NOEXCEPT; 
    const Particpaint& receiver() const OMG_NOEXCEPT;
    void receiver(const Particpaint& value);

    MessageType& messageType() OMG_NOEXCEPT; 
    const MessageType& messageType() const OMG_NOEXCEPT;
    void messageType(const MessageType& value);

    rti::core::int64 timestamp() const OMG_NOEXCEPT;
    void timestamp(rti::core::int64 value);

    int32_t sequenceNumber() const OMG_NOEXCEPT;
    void sequenceNumber(int32_t value);

    int32_t priority() const OMG_NOEXCEPT;
    void priority(int32_t value);

    bool requiresAck() const OMG_NOEXCEPT;
    void requiresAck(bool value);

    bool operator == (const MessageHeader& other_) const;
    bool operator != (const MessageHeader& other_) const;

    void swap(MessageHeader& other_) OMG_NOEXCEPT ;

  private:

    int32_t m_messageId_;
    Particpaint m_sender_;
    Particpaint m_receiver_;
    MessageType m_messageType_;
    rti::core::int64 m_timestamp_;
    int32_t m_sequenceNumber_;
    int32_t m_priority_;
    bool m_requiresAck_;

};

inline void swap(MessageHeader& a, MessageHeader& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const MessageHeader& sample);

namespace dds { 
    namespace topic {

        template<>
        struct topic_type_name<MessageHeader> {
            NDDSUSERDllExport static std::string value() {
                return "MessageHeader";
            }
        };

        template<>
        struct is_topic_type<MessageHeader> : public dds::core::true_type {};

        template<>
        struct topic_type_support<MessageHeader> {

            NDDSUSERDllExport static void initialize_sample(MessageHeader& sample);

            NDDSUSERDllExport static void register_type(
                dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, const MessageHeader& sample);

            NDDSUSERDllExport static void from_cdr_buffer(MessageHeader& sample, const std::vector<char>& buffer);
        };

    }
}

namespace rti { 
    namespace topic {
        template<>
        struct dynamic_type<MessageType> {
            typedef dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const dds::core::xtypes::EnumType& get();
        };

        template<>
        struct dynamic_type<Particpaint> {
            typedef dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const dds::core::xtypes::EnumType& get();
        };

        template<>
        struct dynamic_type<MessageHeader> {
            typedef dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const dds::core::xtypes::StructType& get();
        };

        template<>
        struct impl_type<MessageHeader> {
            typedef MessageHeader_c type;
        };

    }
}

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif // MessageHeader_953112034_hpp

