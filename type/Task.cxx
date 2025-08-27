

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Task.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include <iosfwd>
#include <iomanip>
#include "Task.hpp"
#include "TaskImplPlugin.h"

namespace task {
    std::ostream& operator << (std::ostream& o,const TaskType& sample){
        rti::util::StreamFlagSaver flag_saver (o);
        switch(sample.underlying()){
            case TaskType::IMAGING:
            o << "TaskType::IMAGING" << " ";
            break;
            case TaskType::COMMUNICATION:
            o << "TaskType::COMMUNICATION" << " ";
            break;
            case TaskType::NAVIGATION:
            o << "TaskType::NAVIGATION" << " ";
            break;
            case TaskType::SCIENCE:
            o << "TaskType::SCIENCE" << " ";
            break;
            case TaskType::MAINTENANCE:
            o << "TaskType::MAINTENANCE" << " ";
            break;
            case TaskType::EMERGENCY:
            o << "TaskType::EMERGENCY" << " ";
            break;
        }
        return o;
    }
    std::ostream& operator << (std::ostream& o,const TaskPriority& sample){
        rti::util::StreamFlagSaver flag_saver (o);
        switch(sample.underlying()){
            case TaskPriority::CRITICAL:
            o << "TaskPriority::CRITICAL" << " ";
            break;
            case TaskPriority::HIGH:
            o << "TaskPriority::HIGH" << " ";
            break;
            case TaskPriority::MEDIUM:
            o << "TaskPriority::MEDIUM" << " ";
            break;
            case TaskPriority::LOW:
            o << "TaskPriority::LOW" << " ";
            break;
        }
        return o;
    }
    std::ostream& operator << (std::ostream& o,const TaskStatus& sample){
        rti::util::StreamFlagSaver flag_saver (o);
        switch(sample.underlying()){
            case TaskStatus::PENDING:
            o << "TaskStatus::PENDING" << " ";
            break;
            case TaskStatus::IN_PROGRESS:
            o << "TaskStatus::IN_PROGRESS" << " ";
            break;
            case TaskStatus::COMPLETED:
            o << "TaskStatus::COMPLETED" << " ";
            break;
            case TaskStatus::FAILED:
            o << "TaskStatus::FAILED" << " ";
            break;
            case TaskStatus::CANCELLED:
            o << "TaskStatus::CANCELLED" << " ";
            break;
            case TaskStatus::PAUSED:
            o << "TaskStatus::PAUSED" << " ";
            break;
        }
        return o;
    }

    // ---- TaskDefinition: 

    TaskDefinition::TaskDefinition() :
        m_taskType_(task::TaskType::get_default()) ,
        m_priority_(task::TaskPriority::get_default()) ,
        m_startTime_ (0) ,
        m_endTime_ (0) ,
        m_status_(task::TaskStatus::get_default()) {
    }   

    TaskDefinition::TaskDefinition (
        const dds::core::string& taskId,
        const dds::core::string& taskName,
        const task::TaskType& taskType,
        const task::TaskPriority& priority,
        int32_t startTime,
        int32_t endTime,
        const dds::core::string& targetSatellite,
        const dds::core::string& parameters,
        const task::TaskStatus& status)
        :
            m_taskId_( taskId ),
            m_taskName_( taskName ),
            m_taskType_( taskType ),
            m_priority_( priority ),
            m_startTime_( startTime ),
            m_endTime_( endTime ),
            m_targetSatellite_( targetSatellite ),
            m_parameters_( parameters ),
            m_status_( status ) {
    }

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    TaskDefinition::TaskDefinition(TaskDefinition&& other_) OMG_NOEXCEPT  :m_taskId_ (std::move(other_.m_taskId_))
    ,
    m_taskName_ (std::move(other_.m_taskName_))
    ,
    m_taskType_ (std::move(other_.m_taskType_))
    ,
    m_priority_ (std::move(other_.m_priority_))
    ,
    m_startTime_ (std::move(other_.m_startTime_))
    ,
    m_endTime_ (std::move(other_.m_endTime_))
    ,
    m_targetSatellite_ (std::move(other_.m_targetSatellite_))
    ,
    m_parameters_ (std::move(other_.m_parameters_))
    ,
    m_status_ (std::move(other_.m_status_))
    {
    } 

    TaskDefinition& TaskDefinition::operator=(TaskDefinition&&  other_) OMG_NOEXCEPT {
        TaskDefinition tmp(std::move(other_));
        swap(tmp); 
        return *this;
    }
    #endif
    #endif   

    void TaskDefinition::swap(TaskDefinition& other_)  OMG_NOEXCEPT 
    {
        using std::swap;
        swap(m_taskId_, other_.m_taskId_);
        swap(m_taskName_, other_.m_taskName_);
        swap(m_taskType_, other_.m_taskType_);
        swap(m_priority_, other_.m_priority_);
        swap(m_startTime_, other_.m_startTime_);
        swap(m_endTime_, other_.m_endTime_);
        swap(m_targetSatellite_, other_.m_targetSatellite_);
        swap(m_parameters_, other_.m_parameters_);
        swap(m_status_, other_.m_status_);
    }  

    bool TaskDefinition::operator == (const TaskDefinition& other_) const {
        if (m_taskId_ != other_.m_taskId_) {
            return false;
        }
        if (m_taskName_ != other_.m_taskName_) {
            return false;
        }
        if (m_taskType_ != other_.m_taskType_) {
            return false;
        }
        if (m_priority_ != other_.m_priority_) {
            return false;
        }
        if (m_startTime_ != other_.m_startTime_) {
            return false;
        }
        if (m_endTime_ != other_.m_endTime_) {
            return false;
        }
        if (m_targetSatellite_ != other_.m_targetSatellite_) {
            return false;
        }
        if (m_parameters_ != other_.m_parameters_) {
            return false;
        }
        if (m_status_ != other_.m_status_) {
            return false;
        }
        return true;
    }
    bool TaskDefinition::operator != (const TaskDefinition& other_) const {
        return !this->operator ==(other_);
    }

    // --- Getters and Setters: -------------------------------------------------
    dds::core::string& task::TaskDefinition::taskId() OMG_NOEXCEPT {
        return m_taskId_;
    }

    const dds::core::string& task::TaskDefinition::taskId() const OMG_NOEXCEPT {
        return m_taskId_;
    }

    void task::TaskDefinition::taskId(const dds::core::string& value) {
        m_taskId_ = value;
    }

    dds::core::string& task::TaskDefinition::taskName() OMG_NOEXCEPT {
        return m_taskName_;
    }

    const dds::core::string& task::TaskDefinition::taskName() const OMG_NOEXCEPT {
        return m_taskName_;
    }

    void task::TaskDefinition::taskName(const dds::core::string& value) {
        m_taskName_ = value;
    }

    task::TaskType& task::TaskDefinition::taskType() OMG_NOEXCEPT {
        return m_taskType_;
    }

    const task::TaskType& task::TaskDefinition::taskType() const OMG_NOEXCEPT {
        return m_taskType_;
    }

    void task::TaskDefinition::taskType(const task::TaskType& value) {
        m_taskType_ = value;
    }

    task::TaskPriority& task::TaskDefinition::priority() OMG_NOEXCEPT {
        return m_priority_;
    }

    const task::TaskPriority& task::TaskDefinition::priority() const OMG_NOEXCEPT {
        return m_priority_;
    }

    void task::TaskDefinition::priority(const task::TaskPriority& value) {
        m_priority_ = value;
    }

    int32_t task::TaskDefinition::startTime() const OMG_NOEXCEPT{
        return m_startTime_;
    }

    void task::TaskDefinition::startTime(int32_t value) {
        m_startTime_ = value;
    }

    int32_t task::TaskDefinition::endTime() const OMG_NOEXCEPT{
        return m_endTime_;
    }

    void task::TaskDefinition::endTime(int32_t value) {
        m_endTime_ = value;
    }

    dds::core::string& task::TaskDefinition::targetSatellite() OMG_NOEXCEPT {
        return m_targetSatellite_;
    }

    const dds::core::string& task::TaskDefinition::targetSatellite() const OMG_NOEXCEPT {
        return m_targetSatellite_;
    }

    void task::TaskDefinition::targetSatellite(const dds::core::string& value) {
        m_targetSatellite_ = value;
    }

    dds::core::string& task::TaskDefinition::parameters() OMG_NOEXCEPT {
        return m_parameters_;
    }

    const dds::core::string& task::TaskDefinition::parameters() const OMG_NOEXCEPT {
        return m_parameters_;
    }

    void task::TaskDefinition::parameters(const dds::core::string& value) {
        m_parameters_ = value;
    }

    task::TaskStatus& task::TaskDefinition::status() OMG_NOEXCEPT {
        return m_status_;
    }

    const task::TaskStatus& task::TaskDefinition::status() const OMG_NOEXCEPT {
        return m_status_;
    }

    void task::TaskDefinition::status(const task::TaskStatus& value) {
        m_status_ = value;
    }

    std::ostream& operator << (std::ostream& o,const TaskDefinition& sample){
        rti::util::StreamFlagSaver flag_saver (o);
        o <<"[";
        o << "taskId: " << sample.taskId()<<", ";
        o << "taskName: " << sample.taskName()<<", ";
        o << "taskType: " << sample.taskType()<<", ";
        o << "priority: " << sample.priority()<<", ";
        o << "startTime: " << sample.startTime()<<", ";
        o << "endTime: " << sample.endTime()<<", ";
        o << "targetSatellite: " << sample.targetSatellite()<<", ";
        o << "parameters: " << sample.parameters()<<", ";
        o << "status: " << sample.status() ;
        o <<"]";
        return o;
    }

    // ---- TaskResult: 

    TaskResult::TaskResult() :
        m_status_(task::TaskStatus::get_default()) ,
        m_completionTime_ (0ll) {
    }   

    TaskResult::TaskResult (
        const dds::core::string& taskId,
        const task::TaskStatus& status,
        const dds::core::string& resultData,
        const dds::core::string& errorMessage,
        rti::core::int64 completionTime)
        :
            m_taskId_( taskId ),
            m_status_( status ),
            m_resultData_( resultData ),
            m_errorMessage_( errorMessage ),
            m_completionTime_( completionTime ) {
    }

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    TaskResult::TaskResult(TaskResult&& other_) OMG_NOEXCEPT  :m_taskId_ (std::move(other_.m_taskId_))
    ,
    m_status_ (std::move(other_.m_status_))
    ,
    m_resultData_ (std::move(other_.m_resultData_))
    ,
    m_errorMessage_ (std::move(other_.m_errorMessage_))
    ,
    m_completionTime_ (std::move(other_.m_completionTime_))
    {
    } 

    TaskResult& TaskResult::operator=(TaskResult&&  other_) OMG_NOEXCEPT {
        TaskResult tmp(std::move(other_));
        swap(tmp); 
        return *this;
    }
    #endif
    #endif   

    void TaskResult::swap(TaskResult& other_)  OMG_NOEXCEPT 
    {
        using std::swap;
        swap(m_taskId_, other_.m_taskId_);
        swap(m_status_, other_.m_status_);
        swap(m_resultData_, other_.m_resultData_);
        swap(m_errorMessage_, other_.m_errorMessage_);
        swap(m_completionTime_, other_.m_completionTime_);
    }  

    bool TaskResult::operator == (const TaskResult& other_) const {
        if (m_taskId_ != other_.m_taskId_) {
            return false;
        }
        if (m_status_ != other_.m_status_) {
            return false;
        }
        if (m_resultData_ != other_.m_resultData_) {
            return false;
        }
        if (m_errorMessage_ != other_.m_errorMessage_) {
            return false;
        }
        if (m_completionTime_ != other_.m_completionTime_) {
            return false;
        }
        return true;
    }
    bool TaskResult::operator != (const TaskResult& other_) const {
        return !this->operator ==(other_);
    }

    // --- Getters and Setters: -------------------------------------------------
    dds::core::string& task::TaskResult::taskId() OMG_NOEXCEPT {
        return m_taskId_;
    }

    const dds::core::string& task::TaskResult::taskId() const OMG_NOEXCEPT {
        return m_taskId_;
    }

    void task::TaskResult::taskId(const dds::core::string& value) {
        m_taskId_ = value;
    }

    task::TaskStatus& task::TaskResult::status() OMG_NOEXCEPT {
        return m_status_;
    }

    const task::TaskStatus& task::TaskResult::status() const OMG_NOEXCEPT {
        return m_status_;
    }

    void task::TaskResult::status(const task::TaskStatus& value) {
        m_status_ = value;
    }

    dds::core::string& task::TaskResult::resultData() OMG_NOEXCEPT {
        return m_resultData_;
    }

    const dds::core::string& task::TaskResult::resultData() const OMG_NOEXCEPT {
        return m_resultData_;
    }

    void task::TaskResult::resultData(const dds::core::string& value) {
        m_resultData_ = value;
    }

    dds::core::string& task::TaskResult::errorMessage() OMG_NOEXCEPT {
        return m_errorMessage_;
    }

    const dds::core::string& task::TaskResult::errorMessage() const OMG_NOEXCEPT {
        return m_errorMessage_;
    }

    void task::TaskResult::errorMessage(const dds::core::string& value) {
        m_errorMessage_ = value;
    }

    rti::core::int64 task::TaskResult::completionTime() const OMG_NOEXCEPT{
        return m_completionTime_;
    }

    void task::TaskResult::completionTime(rti::core::int64 value) {
        m_completionTime_ = value;
    }

    std::ostream& operator << (std::ostream& o,const TaskResult& sample){
        rti::util::StreamFlagSaver flag_saver (o);
        o <<"[";
        o << "taskId: " << sample.taskId()<<", ";
        o << "status: " << sample.status()<<", ";
        o << "resultData: " << sample.resultData()<<", ";
        o << "errorMessage: " << sample.errorMessage()<<", ";
        o << "completionTime: " << sample.completionTime() ;
        o <<"]";
        return o;
    }

    // ---- TaskRequestMessage: 

    TaskRequestMessage::TaskRequestMessage() {
    }   

    TaskRequestMessage::TaskRequestMessage (
        const MessageHeader& header,
        const task::TaskDefinition& task)
        :
            m_header_( header ),
            m_task_( task ) {
    }

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    TaskRequestMessage::TaskRequestMessage(TaskRequestMessage&& other_) OMG_NOEXCEPT  :m_header_ (std::move(other_.m_header_))
    ,
    m_task_ (std::move(other_.m_task_))
    {
    } 

    TaskRequestMessage& TaskRequestMessage::operator=(TaskRequestMessage&&  other_) OMG_NOEXCEPT {
        TaskRequestMessage tmp(std::move(other_));
        swap(tmp); 
        return *this;
    }
    #endif
    #endif   

    void TaskRequestMessage::swap(TaskRequestMessage& other_)  OMG_NOEXCEPT 
    {
        using std::swap;
        swap(m_header_, other_.m_header_);
        swap(m_task_, other_.m_task_);
    }  

    bool TaskRequestMessage::operator == (const TaskRequestMessage& other_) const {
        if (m_header_ != other_.m_header_) {
            return false;
        }
        if (m_task_ != other_.m_task_) {
            return false;
        }
        return true;
    }
    bool TaskRequestMessage::operator != (const TaskRequestMessage& other_) const {
        return !this->operator ==(other_);
    }

    // --- Getters and Setters: -------------------------------------------------
    MessageHeader& task::TaskRequestMessage::header() OMG_NOEXCEPT {
        return m_header_;
    }

    const MessageHeader& task::TaskRequestMessage::header() const OMG_NOEXCEPT {
        return m_header_;
    }

    void task::TaskRequestMessage::header(const MessageHeader& value) {
        m_header_ = value;
    }

    task::TaskDefinition& task::TaskRequestMessage::task() OMG_NOEXCEPT {
        return m_task_;
    }

    const task::TaskDefinition& task::TaskRequestMessage::task() const OMG_NOEXCEPT {
        return m_task_;
    }

    void task::TaskRequestMessage::task(const task::TaskDefinition& value) {
        m_task_ = value;
    }

    std::ostream& operator << (std::ostream& o,const TaskRequestMessage& sample){
        rti::util::StreamFlagSaver flag_saver (o);
        o <<"[";
        o << "header: " << sample.header()<<", ";
        o << "task: " << sample.task() ;
        o <<"]";
        return o;
    }

    // ---- TaskResponseMessage: 

    TaskResponseMessage::TaskResponseMessage() {
    }   

    TaskResponseMessage::TaskResponseMessage (
        const MessageHeader& header,
        const task::TaskResult& result)
        :
            m_header_( header ),
            m_result_( result ) {
    }

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    TaskResponseMessage::TaskResponseMessage(TaskResponseMessage&& other_) OMG_NOEXCEPT  :m_header_ (std::move(other_.m_header_))
    ,
    m_result_ (std::move(other_.m_result_))
    {
    } 

    TaskResponseMessage& TaskResponseMessage::operator=(TaskResponseMessage&&  other_) OMG_NOEXCEPT {
        TaskResponseMessage tmp(std::move(other_));
        swap(tmp); 
        return *this;
    }
    #endif
    #endif   

    void TaskResponseMessage::swap(TaskResponseMessage& other_)  OMG_NOEXCEPT 
    {
        using std::swap;
        swap(m_header_, other_.m_header_);
        swap(m_result_, other_.m_result_);
    }  

    bool TaskResponseMessage::operator == (const TaskResponseMessage& other_) const {
        if (m_header_ != other_.m_header_) {
            return false;
        }
        if (m_result_ != other_.m_result_) {
            return false;
        }
        return true;
    }
    bool TaskResponseMessage::operator != (const TaskResponseMessage& other_) const {
        return !this->operator ==(other_);
    }

    // --- Getters and Setters: -------------------------------------------------
    MessageHeader& task::TaskResponseMessage::header() OMG_NOEXCEPT {
        return m_header_;
    }

    const MessageHeader& task::TaskResponseMessage::header() const OMG_NOEXCEPT {
        return m_header_;
    }

    void task::TaskResponseMessage::header(const MessageHeader& value) {
        m_header_ = value;
    }

    task::TaskResult& task::TaskResponseMessage::result() OMG_NOEXCEPT {
        return m_result_;
    }

    const task::TaskResult& task::TaskResponseMessage::result() const OMG_NOEXCEPT {
        return m_result_;
    }

    void task::TaskResponseMessage::result(const task::TaskResult& value) {
        m_result_ = value;
    }

    std::ostream& operator << (std::ostream& o,const TaskResponseMessage& sample){
        rti::util::StreamFlagSaver flag_saver (o);
        o <<"[";
        o << "header: " << sample.header()<<", ";
        o << "result: " << sample.result() ;
        o <<"]";
        return o;
    }

} // namespace task  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        const dds::core::xtypes::EnumType& dynamic_type<task::TaskType>::get()
        {
            return static_cast<const dds::core::xtypes::EnumType&>(
                rti::core::native_conversions::cast_from_native<dds::core::xtypes::DynamicType>(
                    *(task_TaskType_c_get_typecode())));
        }

        const dds::core::xtypes::EnumType& dynamic_type<task::TaskPriority>::get()
        {
            return static_cast<const dds::core::xtypes::EnumType&>(
                rti::core::native_conversions::cast_from_native<dds::core::xtypes::DynamicType>(
                    *(task_TaskPriority_c_get_typecode())));
        }

        const dds::core::xtypes::EnumType& dynamic_type<task::TaskStatus>::get()
        {
            return static_cast<const dds::core::xtypes::EnumType&>(
                rti::core::native_conversions::cast_from_native<dds::core::xtypes::DynamicType>(
                    *(task_TaskStatus_c_get_typecode())));
        }

        const dds::core::xtypes::StructType& dynamic_type<task::TaskDefinition>::get()
        {
            return static_cast<const dds::core::xtypes::StructType&>(
                rti::core::native_conversions::cast_from_native<dds::core::xtypes::DynamicType>(
                    *(task_TaskDefinition_c_get_typecode())));
        }

        const dds::core::xtypes::StructType& dynamic_type<task::TaskResult>::get()
        {
            return static_cast<const dds::core::xtypes::StructType&>(
                rti::core::native_conversions::cast_from_native<dds::core::xtypes::DynamicType>(
                    *(task_TaskResult_c_get_typecode())));
        }

        const dds::core::xtypes::StructType& dynamic_type<task::TaskRequestMessage>::get()
        {
            return static_cast<const dds::core::xtypes::StructType&>(
                rti::core::native_conversions::cast_from_native<dds::core::xtypes::DynamicType>(
                    *(task_TaskRequestMessage_c_get_typecode())));
        }

        const dds::core::xtypes::StructType& dynamic_type<task::TaskResponseMessage>::get()
        {
            return static_cast<const dds::core::xtypes::StructType&>(
                rti::core::native_conversions::cast_from_native<dds::core::xtypes::DynamicType>(
                    *(task_TaskResponseMessage_c_get_typecode())));
        }

    }
}  

namespace dds { 
    namespace topic {
        void topic_type_support<task::TaskDefinition>:: register_type(
            dds::domain::DomainParticipant& participant,
            const std::string& type_name){

            rti::domain::register_type_plugin(
                participant,
                type_name,
                task_TaskDefinition_cPlugin_new,
                task_TaskDefinition_cPlugin_delete);
        }

        void topic_type_support<task::TaskDefinition>::initialize_sample(task::TaskDefinition& sample){

            task_TaskDefinition_c* native_sample=reinterpret_cast<task_TaskDefinition_c*> (&sample);

            struct DDS_TypeDeallocationParams_t deAllocParams = {RTI_FALSE, RTI_FALSE};
            task_TaskDefinition_c_finalize_w_params(native_sample,&deAllocParams);

            struct DDS_TypeAllocationParams_t allocParams = {RTI_FALSE, RTI_FALSE, RTI_TRUE}; 
            RTIBool ok=task_TaskDefinition_c_initialize_w_params(native_sample,&allocParams);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to initialize_w_params");

        } 

        std::vector<char>& topic_type_support<task::TaskDefinition>::to_cdr_buffer(
            std::vector<char>& buffer, const task::TaskDefinition& sample)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = task_TaskDefinition_cPlugin_serialize_to_cdr_buffer(
                NULL, &length,reinterpret_cast<const task_TaskDefinition_c*>(&sample));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = task_TaskDefinition_cPlugin_serialize_to_cdr_buffer(
                &buffer[0], &length, reinterpret_cast<const task_TaskDefinition_c*>(&sample));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;

        }

        void topic_type_support<task::TaskDefinition>::from_cdr_buffer(task::TaskDefinition& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = task_TaskDefinition_cPlugin_deserialize_from_cdr_buffer(
                reinterpret_cast<task_TaskDefinition_c*> (&sample), &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to create task::TaskDefinition from cdr buffer");
        }

        void topic_type_support<task::TaskResult>:: register_type(
            dds::domain::DomainParticipant& participant,
            const std::string& type_name){

            rti::domain::register_type_plugin(
                participant,
                type_name,
                task_TaskResult_cPlugin_new,
                task_TaskResult_cPlugin_delete);
        }

        void topic_type_support<task::TaskResult>::initialize_sample(task::TaskResult& sample){

            task_TaskResult_c* native_sample=reinterpret_cast<task_TaskResult_c*> (&sample);

            struct DDS_TypeDeallocationParams_t deAllocParams = {RTI_FALSE, RTI_FALSE};
            task_TaskResult_c_finalize_w_params(native_sample,&deAllocParams);

            struct DDS_TypeAllocationParams_t allocParams = {RTI_FALSE, RTI_FALSE, RTI_TRUE}; 
            RTIBool ok=task_TaskResult_c_initialize_w_params(native_sample,&allocParams);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to initialize_w_params");

        } 

        std::vector<char>& topic_type_support<task::TaskResult>::to_cdr_buffer(
            std::vector<char>& buffer, const task::TaskResult& sample)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = task_TaskResult_cPlugin_serialize_to_cdr_buffer(
                NULL, &length,reinterpret_cast<const task_TaskResult_c*>(&sample));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = task_TaskResult_cPlugin_serialize_to_cdr_buffer(
                &buffer[0], &length, reinterpret_cast<const task_TaskResult_c*>(&sample));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;

        }

        void topic_type_support<task::TaskResult>::from_cdr_buffer(task::TaskResult& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = task_TaskResult_cPlugin_deserialize_from_cdr_buffer(
                reinterpret_cast<task_TaskResult_c*> (&sample), &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to create task::TaskResult from cdr buffer");
        }

        void topic_type_support<task::TaskRequestMessage>:: register_type(
            dds::domain::DomainParticipant& participant,
            const std::string& type_name){

            rti::domain::register_type_plugin(
                participant,
                type_name,
                task_TaskRequestMessage_cPlugin_new,
                task_TaskRequestMessage_cPlugin_delete);
        }

        void topic_type_support<task::TaskRequestMessage>::initialize_sample(task::TaskRequestMessage& sample){

            task_TaskRequestMessage_c* native_sample=reinterpret_cast<task_TaskRequestMessage_c*> (&sample);

            struct DDS_TypeDeallocationParams_t deAllocParams = {RTI_FALSE, RTI_FALSE};
            task_TaskRequestMessage_c_finalize_w_params(native_sample,&deAllocParams);

            struct DDS_TypeAllocationParams_t allocParams = {RTI_FALSE, RTI_FALSE, RTI_TRUE}; 
            RTIBool ok=task_TaskRequestMessage_c_initialize_w_params(native_sample,&allocParams);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to initialize_w_params");

        } 

        std::vector<char>& topic_type_support<task::TaskRequestMessage>::to_cdr_buffer(
            std::vector<char>& buffer, const task::TaskRequestMessage& sample)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = task_TaskRequestMessage_cPlugin_serialize_to_cdr_buffer(
                NULL, &length,reinterpret_cast<const task_TaskRequestMessage_c*>(&sample));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = task_TaskRequestMessage_cPlugin_serialize_to_cdr_buffer(
                &buffer[0], &length, reinterpret_cast<const task_TaskRequestMessage_c*>(&sample));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;

        }

        void topic_type_support<task::TaskRequestMessage>::from_cdr_buffer(task::TaskRequestMessage& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = task_TaskRequestMessage_cPlugin_deserialize_from_cdr_buffer(
                reinterpret_cast<task_TaskRequestMessage_c*> (&sample), &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to create task::TaskRequestMessage from cdr buffer");
        }

        void topic_type_support<task::TaskResponseMessage>:: register_type(
            dds::domain::DomainParticipant& participant,
            const std::string& type_name){

            rti::domain::register_type_plugin(
                participant,
                type_name,
                task_TaskResponseMessage_cPlugin_new,
                task_TaskResponseMessage_cPlugin_delete);
        }

        void topic_type_support<task::TaskResponseMessage>::initialize_sample(task::TaskResponseMessage& sample){

            task_TaskResponseMessage_c* native_sample=reinterpret_cast<task_TaskResponseMessage_c*> (&sample);

            struct DDS_TypeDeallocationParams_t deAllocParams = {RTI_FALSE, RTI_FALSE};
            task_TaskResponseMessage_c_finalize_w_params(native_sample,&deAllocParams);

            struct DDS_TypeAllocationParams_t allocParams = {RTI_FALSE, RTI_FALSE, RTI_TRUE}; 
            RTIBool ok=task_TaskResponseMessage_c_initialize_w_params(native_sample,&allocParams);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to initialize_w_params");

        } 

        std::vector<char>& topic_type_support<task::TaskResponseMessage>::to_cdr_buffer(
            std::vector<char>& buffer, const task::TaskResponseMessage& sample)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = task_TaskResponseMessage_cPlugin_serialize_to_cdr_buffer(
                NULL, &length,reinterpret_cast<const task_TaskResponseMessage_c*>(&sample));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = task_TaskResponseMessage_cPlugin_serialize_to_cdr_buffer(
                &buffer[0], &length, reinterpret_cast<const task_TaskResponseMessage_c*>(&sample));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;

        }

        void topic_type_support<task::TaskResponseMessage>::from_cdr_buffer(task::TaskResponseMessage& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = task_TaskResponseMessage_cPlugin_deserialize_from_cdr_buffer(
                reinterpret_cast<task_TaskResponseMessage_c*> (&sample), &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to create task::TaskResponseMessage from cdr buffer");
        }

    }
}  

