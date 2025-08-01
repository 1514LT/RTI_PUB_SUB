

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DataTypesImpl.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef DataTypesImpl_470592838_h
#define DataTypesImpl_470592838_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_c_h
#include "ndds/ndds_c.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

extern const char *Target_cTYPENAME;

typedef struct Target_c {

    DDS_Long   index ;
    DDS_Char *   buff ;

    Target_c() {}
} Target_c ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* Target_c_get_typecode(void); /* Type code */

DDS_SEQUENCE(Target_cSeq, Target_c);                                        

NDDSUSERDllExport
RTIBool Target_c_initialize(
    Target_c* self);

NDDSUSERDllExport
RTIBool Target_c_initialize_ex(
    Target_c* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool Target_c_initialize_w_params(
    Target_c* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void Target_c_finalize(
    Target_c* self);

NDDSUSERDllExport
void Target_c_finalize_ex(
    Target_c* self,RTIBool deletePointers);

NDDSUSERDllExport
void Target_c_finalize_w_params(
    Target_c* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void Target_c_finalize_optional_members(
    Target_c* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool Target_c_copy(
    Target_c* dst,
    const Target_c* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern const char *TargetReply_cTYPENAME;

typedef struct TargetReply_c {

    DDS_Long   flag ;

    TargetReply_c() {}
} TargetReply_c ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* TargetReply_c_get_typecode(void); /* Type code */

DDS_SEQUENCE(TargetReply_cSeq, TargetReply_c);                                        

NDDSUSERDllExport
RTIBool TargetReply_c_initialize(
    TargetReply_c* self);

NDDSUSERDllExport
RTIBool TargetReply_c_initialize_ex(
    TargetReply_c* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool TargetReply_c_initialize_w_params(
    TargetReply_c* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void TargetReply_c_finalize(
    TargetReply_c* self);

NDDSUSERDllExport
void TargetReply_c_finalize_ex(
    TargetReply_c* self,RTIBool deletePointers);

NDDSUSERDllExport
void TargetReply_c_finalize_w_params(
    TargetReply_c* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void TargetReply_c_finalize_optional_members(
    TargetReply_c* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool TargetReply_c_copy(
    TargetReply_c* dst,
    const TargetReply_c* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* DataTypesImpl */

