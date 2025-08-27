

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Command.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Command_205482868_hpp
#define Command_205482868_hpp

#include <iosfwd>
#include "CommandImpl.h"

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

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
#include "MessageHeader.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace cmd {
    struct CommandType_def {
        enum type {
            POWER_ON,      
            POWER_OFF,      
            RESET,      
            RECONFIGURE,      
            CALIBRATE,      
            EMERGENCY_STOP,      
            CUSTOM     
        };
        static type get_default(){ return POWER_ON;}
    };

    typedef dds::core::safe_enum<CommandType_def> CommandType;
    NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const CommandType& sample);

    class NDDSUSERDllExport ControlCommand {

      public:
        ControlCommand();
        ControlCommand(
            const MessageHeader& header,
            const cmd::CommandType& commandType);

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        ControlCommand (ControlCommand&& other_) = default;
        ControlCommand& operator=(ControlCommand&&  other_) = default;
        ControlCommand& operator=(const ControlCommand&) = default;
        ControlCommand(const ControlCommand&) = default;
        #else
        ControlCommand(ControlCommand&& other_) OMG_NOEXCEPT;  
        ControlCommand& operator=(ControlCommand&&  other_) OMG_NOEXCEPT;
        #endif
        #endif 

        MessageHeader& header() OMG_NOEXCEPT; 
        const MessageHeader& header() const OMG_NOEXCEPT;
        void header(const MessageHeader& value);

        cmd::CommandType& commandType() OMG_NOEXCEPT; 
        const cmd::CommandType& commandType() const OMG_NOEXCEPT;
        void commandType(const cmd::CommandType& value);

        bool operator == (const ControlCommand& other_) const;
        bool operator != (const ControlCommand& other_) const;

        void swap(ControlCommand& other_) OMG_NOEXCEPT ;

      private:

        MessageHeader m_header_;
        cmd::CommandType m_commandType_;

    };

    inline void swap(ControlCommand& a, ControlCommand& b)  OMG_NOEXCEPT 
    {
        a.swap(b);
    }

    NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const ControlCommand& sample);

} // namespace cmd  
namespace dds { 
    namespace topic {

        template<>
        struct topic_type_name<cmd::ControlCommand> {
            NDDSUSERDllExport static std::string value() {
                return "cmd::ControlCommand";
            }
        };

        template<>
        struct is_topic_type<cmd::ControlCommand> : public dds::core::true_type {};

        template<>
        struct topic_type_support<cmd::ControlCommand> {

            NDDSUSERDllExport static void initialize_sample(cmd::ControlCommand& sample);

            NDDSUSERDllExport static void register_type(
                dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, const cmd::ControlCommand& sample);

            NDDSUSERDllExport static void from_cdr_buffer(cmd::ControlCommand& sample, const std::vector<char>& buffer);
        };

    }
}

namespace rti { 
    namespace topic {
        template<>
        struct dynamic_type<cmd::CommandType> {
            typedef dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const dds::core::xtypes::EnumType& get();
        };

        template<>
        struct dynamic_type<cmd::ControlCommand> {
            typedef dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const dds::core::xtypes::StructType& get();
        };

        template<>
        struct impl_type<cmd::ControlCommand> {
            typedef cmd_ControlCommand_c type;
        };

    }
}

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif // Command_205482868_hpp

