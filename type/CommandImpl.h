

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommandImpl.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef CommandImpl_205482868_h
#define CommandImpl_205482868_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_c_h
#include "ndds/ndds_c.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "MessageHeaderImpl.h"
typedef enum cmd_CommandType_c
{
    cmd_CommandType_c_POWER_ON ,      
    cmd_CommandType_c_POWER_OFF ,      
    cmd_CommandType_c_RESET ,      
    cmd_CommandType_c_RECONFIGURE ,      
    cmd_CommandType_c_CALIBRATE ,      
    cmd_CommandType_c_EMERGENCY_STOP ,      
    cmd_CommandType_c_CUSTOM      
} cmd_CommandType_c;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* cmd_CommandType_c_get_typecode(void); /* Type code */

DDS_SEQUENCE(cmd_CommandType_cSeq, cmd_CommandType_c);                                        

NDDSUSERDllExport
RTIBool cmd_CommandType_c_initialize(
    cmd_CommandType_c* self);

NDDSUSERDllExport
RTIBool cmd_CommandType_c_initialize_ex(
    cmd_CommandType_c* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool cmd_CommandType_c_initialize_w_params(
    cmd_CommandType_c* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void cmd_CommandType_c_finalize(
    cmd_CommandType_c* self);

NDDSUSERDllExport
void cmd_CommandType_c_finalize_ex(
    cmd_CommandType_c* self,RTIBool deletePointers);

NDDSUSERDllExport
void cmd_CommandType_c_finalize_w_params(
    cmd_CommandType_c* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void cmd_CommandType_c_finalize_optional_members(
    cmd_CommandType_c* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool cmd_CommandType_c_copy(
    cmd_CommandType_c* dst,
    const cmd_CommandType_c* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern const char *cmd_ControlCommand_cTYPENAME;

typedef struct cmd_ControlCommand_c {

    MessageHeader_c   header ;
    cmd_CommandType_c   commandType ;

    cmd_ControlCommand_c() {}
} cmd_ControlCommand_c ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* cmd_ControlCommand_c_get_typecode(void); /* Type code */

DDS_SEQUENCE(cmd_ControlCommand_cSeq, cmd_ControlCommand_c);                                        

NDDSUSERDllExport
RTIBool cmd_ControlCommand_c_initialize(
    cmd_ControlCommand_c* self);

NDDSUSERDllExport
RTIBool cmd_ControlCommand_c_initialize_ex(
    cmd_ControlCommand_c* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool cmd_ControlCommand_c_initialize_w_params(
    cmd_ControlCommand_c* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void cmd_ControlCommand_c_finalize(
    cmd_ControlCommand_c* self);

NDDSUSERDllExport
void cmd_ControlCommand_c_finalize_ex(
    cmd_ControlCommand_c* self,RTIBool deletePointers);

NDDSUSERDllExport
void cmd_ControlCommand_c_finalize_w_params(
    cmd_ControlCommand_c* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void cmd_ControlCommand_c_finalize_optional_members(
    cmd_ControlCommand_c* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool cmd_ControlCommand_c_copy(
    cmd_ControlCommand_c* dst,
    const cmd_ControlCommand_c* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* CommandImpl */

