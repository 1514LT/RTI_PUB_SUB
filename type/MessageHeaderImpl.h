

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MessageHeaderImpl.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef MessageHeaderImpl_953112034_h
#define MessageHeaderImpl_953112034_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_c_h
#include "ndds/ndds_c.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

typedef enum MessageType_c
{
    MessageType_c_HEARTBEAT ,      
    MessageType_c_TASK_REQUEST ,      
    MessageType_c_TASK_RESPONSE ,      
    MessageType_c_COMMAND      
} MessageType_c;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* MessageType_c_get_typecode(void); /* Type code */

DDS_SEQUENCE(MessageType_cSeq, MessageType_c);                                        

NDDSUSERDllExport
RTIBool MessageType_c_initialize(
    MessageType_c* self);

NDDSUSERDllExport
RTIBool MessageType_c_initialize_ex(
    MessageType_c* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool MessageType_c_initialize_w_params(
    MessageType_c* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void MessageType_c_finalize(
    MessageType_c* self);

NDDSUSERDllExport
void MessageType_c_finalize_ex(
    MessageType_c* self,RTIBool deletePointers);

NDDSUSERDllExport
void MessageType_c_finalize_w_params(
    MessageType_c* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void MessageType_c_finalize_optional_members(
    MessageType_c* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool MessageType_c_copy(
    MessageType_c* dst,
    const MessageType_c* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
typedef enum Particpaint_c
{
    Particpaint_c_NodeA ,      
    Particpaint_c_NodeB ,      
    Particpaint_c_NodeC ,      
    Particpaint_c_Guide      
} Particpaint_c;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* Particpaint_c_get_typecode(void); /* Type code */

DDS_SEQUENCE(Particpaint_cSeq, Particpaint_c);                                        

NDDSUSERDllExport
RTIBool Particpaint_c_initialize(
    Particpaint_c* self);

NDDSUSERDllExport
RTIBool Particpaint_c_initialize_ex(
    Particpaint_c* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool Particpaint_c_initialize_w_params(
    Particpaint_c* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void Particpaint_c_finalize(
    Particpaint_c* self);

NDDSUSERDllExport
void Particpaint_c_finalize_ex(
    Particpaint_c* self,RTIBool deletePointers);

NDDSUSERDllExport
void Particpaint_c_finalize_w_params(
    Particpaint_c* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void Particpaint_c_finalize_optional_members(
    Particpaint_c* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool Particpaint_c_copy(
    Particpaint_c* dst,
    const Particpaint_c* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern const char *MessageHeader_cTYPENAME;

typedef struct MessageHeader_c {

    DDS_Long   messageId ;
    Particpaint_c   sender ;
    Particpaint_c   receiver ;
    MessageType_c   messageType ;
    DDS_LongLong   timestamp ;
    DDS_Long   sequenceNumber ;
    DDS_Long   priority ;
    DDS_Boolean   requiresAck ;

    MessageHeader_c() {}
} MessageHeader_c ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* MessageHeader_c_get_typecode(void); /* Type code */

DDS_SEQUENCE(MessageHeader_cSeq, MessageHeader_c);                                        

NDDSUSERDllExport
RTIBool MessageHeader_c_initialize(
    MessageHeader_c* self);

NDDSUSERDllExport
RTIBool MessageHeader_c_initialize_ex(
    MessageHeader_c* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool MessageHeader_c_initialize_w_params(
    MessageHeader_c* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void MessageHeader_c_finalize(
    MessageHeader_c* self);

NDDSUSERDllExport
void MessageHeader_c_finalize_ex(
    MessageHeader_c* self,RTIBool deletePointers);

NDDSUSERDllExport
void MessageHeader_c_finalize_w_params(
    MessageHeader_c* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void MessageHeader_c_finalize_optional_members(
    MessageHeader_c* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool MessageHeader_c_copy(
    MessageHeader_c* dst,
    const MessageHeader_c* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* MessageHeaderImpl */

