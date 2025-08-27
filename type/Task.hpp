

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Task.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Task_346634424_hpp
#define Task_346634424_hpp

#include <iosfwd>
#include "TaskImpl.h"

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
namespace task {
    struct TaskType_def {
        enum type {
            IMAGING,      
            COMMUNICATION,      
            NAVIGATION,      
            SCIENCE,      
            MAINTENANCE,      
            EMERGENCY     
        };
        static type get_default(){ return IMAGING;}
    };

    typedef dds::core::safe_enum<TaskType_def> TaskType;
    NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const TaskType& sample);
    struct TaskPriority_def {
        enum type {
            CRITICAL,      
            HIGH,      
            MEDIUM,      
            LOW     
        };
        static type get_default(){ return CRITICAL;}
    };

    typedef dds::core::safe_enum<TaskPriority_def> TaskPriority;
    NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const TaskPriority& sample);
    struct TaskStatus_def {
        enum type {
            PENDING,      
            IN_PROGRESS,      
            COMPLETED,      
            FAILED,      
            CANCELLED,      
            PAUSED     
        };
        static type get_default(){ return PENDING;}
    };

    typedef dds::core::safe_enum<TaskStatus_def> TaskStatus;
    NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const TaskStatus& sample);

    class NDDSUSERDllExport TaskDefinition {

      public:
        TaskDefinition();
        TaskDefinition(
            const dds::core::string& taskId,
            const dds::core::string& taskName,
            const task::TaskType& taskType,
            const task::TaskPriority& priority,
            int32_t startTime,
            int32_t endTime,
            const dds::core::string& targetSatellite,
            const dds::core::string& parameters,
            const task::TaskStatus& status);

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        TaskDefinition (TaskDefinition&& other_) = default;
        TaskDefinition& operator=(TaskDefinition&&  other_) = default;
        TaskDefinition& operator=(const TaskDefinition&) = default;
        TaskDefinition(const TaskDefinition&) = default;
        #else
        TaskDefinition(TaskDefinition&& other_) OMG_NOEXCEPT;  
        TaskDefinition& operator=(TaskDefinition&&  other_) OMG_NOEXCEPT;
        #endif
        #endif 

        dds::core::string& taskId() OMG_NOEXCEPT; 
        const dds::core::string& taskId() const OMG_NOEXCEPT;
        void taskId(const dds::core::string& value);

        dds::core::string& taskName() OMG_NOEXCEPT; 
        const dds::core::string& taskName() const OMG_NOEXCEPT;
        void taskName(const dds::core::string& value);

        task::TaskType& taskType() OMG_NOEXCEPT; 
        const task::TaskType& taskType() const OMG_NOEXCEPT;
        void taskType(const task::TaskType& value);

        task::TaskPriority& priority() OMG_NOEXCEPT; 
        const task::TaskPriority& priority() const OMG_NOEXCEPT;
        void priority(const task::TaskPriority& value);

        int32_t startTime() const OMG_NOEXCEPT;
        void startTime(int32_t value);

        int32_t endTime() const OMG_NOEXCEPT;
        void endTime(int32_t value);

        dds::core::string& targetSatellite() OMG_NOEXCEPT; 
        const dds::core::string& targetSatellite() const OMG_NOEXCEPT;
        void targetSatellite(const dds::core::string& value);

        dds::core::string& parameters() OMG_NOEXCEPT; 
        const dds::core::string& parameters() const OMG_NOEXCEPT;
        void parameters(const dds::core::string& value);

        task::TaskStatus& status() OMG_NOEXCEPT; 
        const task::TaskStatus& status() const OMG_NOEXCEPT;
        void status(const task::TaskStatus& value);

        bool operator == (const TaskDefinition& other_) const;
        bool operator != (const TaskDefinition& other_) const;

        void swap(TaskDefinition& other_) OMG_NOEXCEPT ;

      private:

        dds::core::string m_taskId_;
        dds::core::string m_taskName_;
        task::TaskType m_taskType_;
        task::TaskPriority m_priority_;
        int32_t m_startTime_;
        int32_t m_endTime_;
        dds::core::string m_targetSatellite_;
        dds::core::string m_parameters_;
        task::TaskStatus m_status_;

    };

    inline void swap(TaskDefinition& a, TaskDefinition& b)  OMG_NOEXCEPT 
    {
        a.swap(b);
    }

    NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const TaskDefinition& sample);

    class NDDSUSERDllExport TaskResult {

      public:
        TaskResult();
        TaskResult(
            const dds::core::string& taskId,
            const task::TaskStatus& status,
            const dds::core::string& resultData,
            const dds::core::string& errorMessage,
            rti::core::int64 completionTime);

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        TaskResult (TaskResult&& other_) = default;
        TaskResult& operator=(TaskResult&&  other_) = default;
        TaskResult& operator=(const TaskResult&) = default;
        TaskResult(const TaskResult&) = default;
        #else
        TaskResult(TaskResult&& other_) OMG_NOEXCEPT;  
        TaskResult& operator=(TaskResult&&  other_) OMG_NOEXCEPT;
        #endif
        #endif 

        dds::core::string& taskId() OMG_NOEXCEPT; 
        const dds::core::string& taskId() const OMG_NOEXCEPT;
        void taskId(const dds::core::string& value);

        task::TaskStatus& status() OMG_NOEXCEPT; 
        const task::TaskStatus& status() const OMG_NOEXCEPT;
        void status(const task::TaskStatus& value);

        dds::core::string& resultData() OMG_NOEXCEPT; 
        const dds::core::string& resultData() const OMG_NOEXCEPT;
        void resultData(const dds::core::string& value);

        dds::core::string& errorMessage() OMG_NOEXCEPT; 
        const dds::core::string& errorMessage() const OMG_NOEXCEPT;
        void errorMessage(const dds::core::string& value);

        rti::core::int64 completionTime() const OMG_NOEXCEPT;
        void completionTime(rti::core::int64 value);

        bool operator == (const TaskResult& other_) const;
        bool operator != (const TaskResult& other_) const;

        void swap(TaskResult& other_) OMG_NOEXCEPT ;

      private:

        dds::core::string m_taskId_;
        task::TaskStatus m_status_;
        dds::core::string m_resultData_;
        dds::core::string m_errorMessage_;
        rti::core::int64 m_completionTime_;

    };

    inline void swap(TaskResult& a, TaskResult& b)  OMG_NOEXCEPT 
    {
        a.swap(b);
    }

    NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const TaskResult& sample);

    class NDDSUSERDllExport TaskRequestMessage {

      public:
        TaskRequestMessage();
        TaskRequestMessage(
            const MessageHeader& header,
            const task::TaskDefinition& task);

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        TaskRequestMessage (TaskRequestMessage&& other_) = default;
        TaskRequestMessage& operator=(TaskRequestMessage&&  other_) = default;
        TaskRequestMessage& operator=(const TaskRequestMessage&) = default;
        TaskRequestMessage(const TaskRequestMessage&) = default;
        #else
        TaskRequestMessage(TaskRequestMessage&& other_) OMG_NOEXCEPT;  
        TaskRequestMessage& operator=(TaskRequestMessage&&  other_) OMG_NOEXCEPT;
        #endif
        #endif 

        MessageHeader& header() OMG_NOEXCEPT; 
        const MessageHeader& header() const OMG_NOEXCEPT;
        void header(const MessageHeader& value);

        task::TaskDefinition& task() OMG_NOEXCEPT; 
        const task::TaskDefinition& task() const OMG_NOEXCEPT;
        void task(const task::TaskDefinition& value);

        bool operator == (const TaskRequestMessage& other_) const;
        bool operator != (const TaskRequestMessage& other_) const;

        void swap(TaskRequestMessage& other_) OMG_NOEXCEPT ;

      private:

        MessageHeader m_header_;
        task::TaskDefinition m_task_;

    };

    inline void swap(TaskRequestMessage& a, TaskRequestMessage& b)  OMG_NOEXCEPT 
    {
        a.swap(b);
    }

    NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const TaskRequestMessage& sample);

    class NDDSUSERDllExport TaskResponseMessage {

      public:
        TaskResponseMessage();
        TaskResponseMessage(
            const MessageHeader& header,
            const task::TaskResult& result);

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        TaskResponseMessage (TaskResponseMessage&& other_) = default;
        TaskResponseMessage& operator=(TaskResponseMessage&&  other_) = default;
        TaskResponseMessage& operator=(const TaskResponseMessage&) = default;
        TaskResponseMessage(const TaskResponseMessage&) = default;
        #else
        TaskResponseMessage(TaskResponseMessage&& other_) OMG_NOEXCEPT;  
        TaskResponseMessage& operator=(TaskResponseMessage&&  other_) OMG_NOEXCEPT;
        #endif
        #endif 

        MessageHeader& header() OMG_NOEXCEPT; 
        const MessageHeader& header() const OMG_NOEXCEPT;
        void header(const MessageHeader& value);

        task::TaskResult& result() OMG_NOEXCEPT; 
        const task::TaskResult& result() const OMG_NOEXCEPT;
        void result(const task::TaskResult& value);

        bool operator == (const TaskResponseMessage& other_) const;
        bool operator != (const TaskResponseMessage& other_) const;

        void swap(TaskResponseMessage& other_) OMG_NOEXCEPT ;

      private:

        MessageHeader m_header_;
        task::TaskResult m_result_;

    };

    inline void swap(TaskResponseMessage& a, TaskResponseMessage& b)  OMG_NOEXCEPT 
    {
        a.swap(b);
    }

    NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const TaskResponseMessage& sample);

} // namespace task  
namespace dds { 
    namespace topic {

        template<>
        struct topic_type_name<task::TaskDefinition> {
            NDDSUSERDllExport static std::string value() {
                return "task::TaskDefinition";
            }
        };

        template<>
        struct is_topic_type<task::TaskDefinition> : public dds::core::true_type {};

        template<>
        struct topic_type_support<task::TaskDefinition> {

            NDDSUSERDllExport static void initialize_sample(task::TaskDefinition& sample);

            NDDSUSERDllExport static void register_type(
                dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, const task::TaskDefinition& sample);

            NDDSUSERDllExport static void from_cdr_buffer(task::TaskDefinition& sample, const std::vector<char>& buffer);
        };

        template<>
        struct topic_type_name<task::TaskResult> {
            NDDSUSERDllExport static std::string value() {
                return "task::TaskResult";
            }
        };

        template<>
        struct is_topic_type<task::TaskResult> : public dds::core::true_type {};

        template<>
        struct topic_type_support<task::TaskResult> {

            NDDSUSERDllExport static void initialize_sample(task::TaskResult& sample);

            NDDSUSERDllExport static void register_type(
                dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, const task::TaskResult& sample);

            NDDSUSERDllExport static void from_cdr_buffer(task::TaskResult& sample, const std::vector<char>& buffer);
        };

        template<>
        struct topic_type_name<task::TaskRequestMessage> {
            NDDSUSERDllExport static std::string value() {
                return "task::TaskRequestMessage";
            }
        };

        template<>
        struct is_topic_type<task::TaskRequestMessage> : public dds::core::true_type {};

        template<>
        struct topic_type_support<task::TaskRequestMessage> {

            NDDSUSERDllExport static void initialize_sample(task::TaskRequestMessage& sample);

            NDDSUSERDllExport static void register_type(
                dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, const task::TaskRequestMessage& sample);

            NDDSUSERDllExport static void from_cdr_buffer(task::TaskRequestMessage& sample, const std::vector<char>& buffer);
        };

        template<>
        struct topic_type_name<task::TaskResponseMessage> {
            NDDSUSERDllExport static std::string value() {
                return "task::TaskResponseMessage";
            }
        };

        template<>
        struct is_topic_type<task::TaskResponseMessage> : public dds::core::true_type {};

        template<>
        struct topic_type_support<task::TaskResponseMessage> {

            NDDSUSERDllExport static void initialize_sample(task::TaskResponseMessage& sample);

            NDDSUSERDllExport static void register_type(
                dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, const task::TaskResponseMessage& sample);

            NDDSUSERDllExport static void from_cdr_buffer(task::TaskResponseMessage& sample, const std::vector<char>& buffer);
        };

    }
}

namespace rti { 
    namespace topic {
        template<>
        struct dynamic_type<task::TaskType> {
            typedef dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const dds::core::xtypes::EnumType& get();
        };

        template<>
        struct dynamic_type<task::TaskPriority> {
            typedef dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const dds::core::xtypes::EnumType& get();
        };

        template<>
        struct dynamic_type<task::TaskStatus> {
            typedef dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const dds::core::xtypes::EnumType& get();
        };

        template<>
        struct dynamic_type<task::TaskDefinition> {
            typedef dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const dds::core::xtypes::StructType& get();
        };

        template<>
        struct impl_type<task::TaskDefinition> {
            typedef task_TaskDefinition_c type;
        };

        template<>
        struct dynamic_type<task::TaskResult> {
            typedef dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const dds::core::xtypes::StructType& get();
        };

        template<>
        struct impl_type<task::TaskResult> {
            typedef task_TaskResult_c type;
        };

        template<>
        struct dynamic_type<task::TaskRequestMessage> {
            typedef dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const dds::core::xtypes::StructType& get();
        };

        template<>
        struct impl_type<task::TaskRequestMessage> {
            typedef task_TaskRequestMessage_c type;
        };

        template<>
        struct dynamic_type<task::TaskResponseMessage> {
            typedef dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const dds::core::xtypes::StructType& get();
        };

        template<>
        struct impl_type<task::TaskResponseMessage> {
            typedef task_TaskResponseMessage_c type;
        };

    }
}

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif // Task_346634424_hpp

