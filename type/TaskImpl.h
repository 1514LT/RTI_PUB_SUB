

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TaskImpl.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef TaskImpl_346634424_h
#define TaskImpl_346634424_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_c_h
#include "ndds/ndds_c.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "MessageHeaderImpl.h"
typedef enum task_TaskType_c
{
    task_TaskType_c_IMAGING ,      
    task_TaskType_c_COMMUNICATION ,      
    task_TaskType_c_NAVIGATION ,      
    task_TaskType_c_SCIENCE ,      
    task_TaskType_c_MAINTENANCE ,      
    task_TaskType_c_EMERGENCY      
} task_TaskType_c;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* task_TaskType_c_get_typecode(void); /* Type code */

DDS_SEQUENCE(task_TaskType_cSeq, task_TaskType_c);                                        

NDDSUSERDllExport
RTIBool task_TaskType_c_initialize(
    task_TaskType_c* self);

NDDSUSERDllExport
RTIBool task_TaskType_c_initialize_ex(
    task_TaskType_c* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool task_TaskType_c_initialize_w_params(
    task_TaskType_c* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void task_TaskType_c_finalize(
    task_TaskType_c* self);

NDDSUSERDllExport
void task_TaskType_c_finalize_ex(
    task_TaskType_c* self,RTIBool deletePointers);

NDDSUSERDllExport
void task_TaskType_c_finalize_w_params(
    task_TaskType_c* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void task_TaskType_c_finalize_optional_members(
    task_TaskType_c* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool task_TaskType_c_copy(
    task_TaskType_c* dst,
    const task_TaskType_c* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
typedef enum task_TaskPriority_c
{
    task_TaskPriority_c_CRITICAL ,      
    task_TaskPriority_c_HIGH ,      
    task_TaskPriority_c_MEDIUM ,      
    task_TaskPriority_c_LOW      
} task_TaskPriority_c;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* task_TaskPriority_c_get_typecode(void); /* Type code */

DDS_SEQUENCE(task_TaskPriority_cSeq, task_TaskPriority_c);                                        

NDDSUSERDllExport
RTIBool task_TaskPriority_c_initialize(
    task_TaskPriority_c* self);

NDDSUSERDllExport
RTIBool task_TaskPriority_c_initialize_ex(
    task_TaskPriority_c* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool task_TaskPriority_c_initialize_w_params(
    task_TaskPriority_c* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void task_TaskPriority_c_finalize(
    task_TaskPriority_c* self);

NDDSUSERDllExport
void task_TaskPriority_c_finalize_ex(
    task_TaskPriority_c* self,RTIBool deletePointers);

NDDSUSERDllExport
void task_TaskPriority_c_finalize_w_params(
    task_TaskPriority_c* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void task_TaskPriority_c_finalize_optional_members(
    task_TaskPriority_c* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool task_TaskPriority_c_copy(
    task_TaskPriority_c* dst,
    const task_TaskPriority_c* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
typedef enum task_TaskStatus_c
{
    task_TaskStatus_c_PENDING ,      
    task_TaskStatus_c_IN_PROGRESS ,      
    task_TaskStatus_c_COMPLETED ,      
    task_TaskStatus_c_FAILED ,      
    task_TaskStatus_c_CANCELLED ,      
    task_TaskStatus_c_PAUSED      
} task_TaskStatus_c;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* task_TaskStatus_c_get_typecode(void); /* Type code */

DDS_SEQUENCE(task_TaskStatus_cSeq, task_TaskStatus_c);                                        

NDDSUSERDllExport
RTIBool task_TaskStatus_c_initialize(
    task_TaskStatus_c* self);

NDDSUSERDllExport
RTIBool task_TaskStatus_c_initialize_ex(
    task_TaskStatus_c* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool task_TaskStatus_c_initialize_w_params(
    task_TaskStatus_c* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void task_TaskStatus_c_finalize(
    task_TaskStatus_c* self);

NDDSUSERDllExport
void task_TaskStatus_c_finalize_ex(
    task_TaskStatus_c* self,RTIBool deletePointers);

NDDSUSERDllExport
void task_TaskStatus_c_finalize_w_params(
    task_TaskStatus_c* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void task_TaskStatus_c_finalize_optional_members(
    task_TaskStatus_c* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool task_TaskStatus_c_copy(
    task_TaskStatus_c* dst,
    const task_TaskStatus_c* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern const char *task_TaskDefinition_cTYPENAME;

typedef struct task_TaskDefinition_c {

    DDS_Char *   taskId ;
    DDS_Char *   taskName ;
    task_TaskType_c   taskType ;
    task_TaskPriority_c   priority ;
    DDS_Long   startTime ;
    DDS_Long   endTime ;
    DDS_Char *   targetSatellite ;
    DDS_Char *   parameters ;
    task_TaskStatus_c   status ;

    task_TaskDefinition_c() {}
} task_TaskDefinition_c ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* task_TaskDefinition_c_get_typecode(void); /* Type code */

DDS_SEQUENCE(task_TaskDefinition_cSeq, task_TaskDefinition_c);                                        

NDDSUSERDllExport
RTIBool task_TaskDefinition_c_initialize(
    task_TaskDefinition_c* self);

NDDSUSERDllExport
RTIBool task_TaskDefinition_c_initialize_ex(
    task_TaskDefinition_c* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool task_TaskDefinition_c_initialize_w_params(
    task_TaskDefinition_c* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void task_TaskDefinition_c_finalize(
    task_TaskDefinition_c* self);

NDDSUSERDllExport
void task_TaskDefinition_c_finalize_ex(
    task_TaskDefinition_c* self,RTIBool deletePointers);

NDDSUSERDllExport
void task_TaskDefinition_c_finalize_w_params(
    task_TaskDefinition_c* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void task_TaskDefinition_c_finalize_optional_members(
    task_TaskDefinition_c* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool task_TaskDefinition_c_copy(
    task_TaskDefinition_c* dst,
    const task_TaskDefinition_c* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern const char *task_TaskResult_cTYPENAME;

typedef struct task_TaskResult_c {

    DDS_Char *   taskId ;
    task_TaskStatus_c   status ;
    DDS_Char *   resultData ;
    DDS_Char *   errorMessage ;
    DDS_LongLong   completionTime ;

    task_TaskResult_c() {}
} task_TaskResult_c ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* task_TaskResult_c_get_typecode(void); /* Type code */

DDS_SEQUENCE(task_TaskResult_cSeq, task_TaskResult_c);                                        

NDDSUSERDllExport
RTIBool task_TaskResult_c_initialize(
    task_TaskResult_c* self);

NDDSUSERDllExport
RTIBool task_TaskResult_c_initialize_ex(
    task_TaskResult_c* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool task_TaskResult_c_initialize_w_params(
    task_TaskResult_c* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void task_TaskResult_c_finalize(
    task_TaskResult_c* self);

NDDSUSERDllExport
void task_TaskResult_c_finalize_ex(
    task_TaskResult_c* self,RTIBool deletePointers);

NDDSUSERDllExport
void task_TaskResult_c_finalize_w_params(
    task_TaskResult_c* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void task_TaskResult_c_finalize_optional_members(
    task_TaskResult_c* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool task_TaskResult_c_copy(
    task_TaskResult_c* dst,
    const task_TaskResult_c* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern const char *task_TaskRequestMessage_cTYPENAME;

typedef struct task_TaskRequestMessage_c {

    MessageHeader_c   header ;
    task_TaskDefinition_c   task ;

    task_TaskRequestMessage_c() {}
} task_TaskRequestMessage_c ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* task_TaskRequestMessage_c_get_typecode(void); /* Type code */

DDS_SEQUENCE(task_TaskRequestMessage_cSeq, task_TaskRequestMessage_c);                                        

NDDSUSERDllExport
RTIBool task_TaskRequestMessage_c_initialize(
    task_TaskRequestMessage_c* self);

NDDSUSERDllExport
RTIBool task_TaskRequestMessage_c_initialize_ex(
    task_TaskRequestMessage_c* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool task_TaskRequestMessage_c_initialize_w_params(
    task_TaskRequestMessage_c* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void task_TaskRequestMessage_c_finalize(
    task_TaskRequestMessage_c* self);

NDDSUSERDllExport
void task_TaskRequestMessage_c_finalize_ex(
    task_TaskRequestMessage_c* self,RTIBool deletePointers);

NDDSUSERDllExport
void task_TaskRequestMessage_c_finalize_w_params(
    task_TaskRequestMessage_c* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void task_TaskRequestMessage_c_finalize_optional_members(
    task_TaskRequestMessage_c* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool task_TaskRequestMessage_c_copy(
    task_TaskRequestMessage_c* dst,
    const task_TaskRequestMessage_c* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern const char *task_TaskResponseMessage_cTYPENAME;

typedef struct task_TaskResponseMessage_c {

    MessageHeader_c   header ;
    task_TaskResult_c   result ;

    task_TaskResponseMessage_c() {}
} task_TaskResponseMessage_c ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* task_TaskResponseMessage_c_get_typecode(void); /* Type code */

DDS_SEQUENCE(task_TaskResponseMessage_cSeq, task_TaskResponseMessage_c);                                        

NDDSUSERDllExport
RTIBool task_TaskResponseMessage_c_initialize(
    task_TaskResponseMessage_c* self);

NDDSUSERDllExport
RTIBool task_TaskResponseMessage_c_initialize_ex(
    task_TaskResponseMessage_c* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool task_TaskResponseMessage_c_initialize_w_params(
    task_TaskResponseMessage_c* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void task_TaskResponseMessage_c_finalize(
    task_TaskResponseMessage_c* self);

NDDSUSERDllExport
void task_TaskResponseMessage_c_finalize_ex(
    task_TaskResponseMessage_c* self,RTIBool deletePointers);

NDDSUSERDllExport
void task_TaskResponseMessage_c_finalize_w_params(
    task_TaskResponseMessage_c* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void task_TaskResponseMessage_c_finalize_optional_members(
    task_TaskResponseMessage_c* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool task_TaskResponseMessage_c_copy(
    task_TaskResponseMessage_c* dst,
    const task_TaskResponseMessage_c* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* TaskImpl */

