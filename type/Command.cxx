

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Command.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include <iosfwd>
#include <iomanip>
#include "Command.hpp"
#include "CommandImplPlugin.h"

namespace cmd {
    std::ostream& operator << (std::ostream& o,const CommandType& sample){
        rti::util::StreamFlagSaver flag_saver (o);
        switch(sample.underlying()){
            case CommandType::POWER_ON:
            o << "CommandType::POWER_ON" << " ";
            break;
            case CommandType::POWER_OFF:
            o << "CommandType::POWER_OFF" << " ";
            break;
            case CommandType::RESET:
            o << "CommandType::RESET" << " ";
            break;
            case CommandType::RECONFIGURE:
            o << "CommandType::RECONFIGURE" << " ";
            break;
            case CommandType::CALIBRATE:
            o << "CommandType::CALIBRATE" << " ";
            break;
            case CommandType::EMERGENCY_STOP:
            o << "CommandType::EMERGENCY_STOP" << " ";
            break;
            case CommandType::CUSTOM:
            o << "CommandType::CUSTOM" << " ";
            break;
        }
        return o;
    }

    // ---- ControlCommand: 

    ControlCommand::ControlCommand() :
        m_commandType_(cmd::CommandType::get_default()) {
    }   

    ControlCommand::ControlCommand (
        const MessageHeader& header,
        const cmd::CommandType& commandType)
        :
            m_header_( header ),
            m_commandType_( commandType ) {
    }

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    ControlCommand::ControlCommand(ControlCommand&& other_) OMG_NOEXCEPT  :m_header_ (std::move(other_.m_header_))
    ,
    m_commandType_ (std::move(other_.m_commandType_))
    {
    } 

    ControlCommand& ControlCommand::operator=(ControlCommand&&  other_) OMG_NOEXCEPT {
        ControlCommand tmp(std::move(other_));
        swap(tmp); 
        return *this;
    }
    #endif
    #endif   

    void ControlCommand::swap(ControlCommand& other_)  OMG_NOEXCEPT 
    {
        using std::swap;
        swap(m_header_, other_.m_header_);
        swap(m_commandType_, other_.m_commandType_);
    }  

    bool ControlCommand::operator == (const ControlCommand& other_) const {
        if (m_header_ != other_.m_header_) {
            return false;
        }
        if (m_commandType_ != other_.m_commandType_) {
            return false;
        }
        return true;
    }
    bool ControlCommand::operator != (const ControlCommand& other_) const {
        return !this->operator ==(other_);
    }

    // --- Getters and Setters: -------------------------------------------------
    MessageHeader& cmd::ControlCommand::header() OMG_NOEXCEPT {
        return m_header_;
    }

    const MessageHeader& cmd::ControlCommand::header() const OMG_NOEXCEPT {
        return m_header_;
    }

    void cmd::ControlCommand::header(const MessageHeader& value) {
        m_header_ = value;
    }

    cmd::CommandType& cmd::ControlCommand::commandType() OMG_NOEXCEPT {
        return m_commandType_;
    }

    const cmd::CommandType& cmd::ControlCommand::commandType() const OMG_NOEXCEPT {
        return m_commandType_;
    }

    void cmd::ControlCommand::commandType(const cmd::CommandType& value) {
        m_commandType_ = value;
    }

    std::ostream& operator << (std::ostream& o,const ControlCommand& sample){
        rti::util::StreamFlagSaver flag_saver (o);
        o <<"[";
        o << "header: " << sample.header()<<", ";
        o << "commandType: " << sample.commandType() ;
        o <<"]";
        return o;
    }

} // namespace cmd  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        const dds::core::xtypes::EnumType& dynamic_type<cmd::CommandType>::get()
        {
            return static_cast<const dds::core::xtypes::EnumType&>(
                rti::core::native_conversions::cast_from_native<dds::core::xtypes::DynamicType>(
                    *(cmd_CommandType_c_get_typecode())));
        }

        const dds::core::xtypes::StructType& dynamic_type<cmd::ControlCommand>::get()
        {
            return static_cast<const dds::core::xtypes::StructType&>(
                rti::core::native_conversions::cast_from_native<dds::core::xtypes::DynamicType>(
                    *(cmd_ControlCommand_c_get_typecode())));
        }

    }
}  

namespace dds { 
    namespace topic {
        void topic_type_support<cmd::ControlCommand>:: register_type(
            dds::domain::DomainParticipant& participant,
            const std::string& type_name){

            rti::domain::register_type_plugin(
                participant,
                type_name,
                cmd_ControlCommand_cPlugin_new,
                cmd_ControlCommand_cPlugin_delete);
        }

        void topic_type_support<cmd::ControlCommand>::initialize_sample(cmd::ControlCommand& sample){

            cmd_ControlCommand_c* native_sample=reinterpret_cast<cmd_ControlCommand_c*> (&sample);

            struct DDS_TypeDeallocationParams_t deAllocParams = {RTI_FALSE, RTI_FALSE};
            cmd_ControlCommand_c_finalize_w_params(native_sample,&deAllocParams);

            struct DDS_TypeAllocationParams_t allocParams = {RTI_FALSE, RTI_FALSE, RTI_TRUE}; 
            RTIBool ok=cmd_ControlCommand_c_initialize_w_params(native_sample,&allocParams);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to initialize_w_params");

        } 

        std::vector<char>& topic_type_support<cmd::ControlCommand>::to_cdr_buffer(
            std::vector<char>& buffer, const cmd::ControlCommand& sample)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = cmd_ControlCommand_cPlugin_serialize_to_cdr_buffer(
                NULL, &length,reinterpret_cast<const cmd_ControlCommand_c*>(&sample));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = cmd_ControlCommand_cPlugin_serialize_to_cdr_buffer(
                &buffer[0], &length, reinterpret_cast<const cmd_ControlCommand_c*>(&sample));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;

        }

        void topic_type_support<cmd::ControlCommand>::from_cdr_buffer(cmd::ControlCommand& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = cmd_ControlCommand_cPlugin_deserialize_from_cdr_buffer(
                reinterpret_cast<cmd_ControlCommand_c*> (&sample), &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to create cmd::ControlCommand from cdr buffer");
        }

    }
}  

