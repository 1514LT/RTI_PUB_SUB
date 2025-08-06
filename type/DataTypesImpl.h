

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DataTypesImpl.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef DataTypesImpl_470593198_h
#define DataTypesImpl_470593198_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_c_h
#include "ndds/ndds_c.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

extern const char *largePacket_cTYPENAME;

typedef struct largePacket_c {

    DDS_LongLong   sequence_number ;
    DDS_LongLong   timestamp_ns ;
    DDS_Char   payload [1484];

    largePacket_c() {}
} largePacket_c ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* largePacket_c_get_typecode(void); /* Type code */

DDS_SEQUENCE(largePacket_cSeq, largePacket_c);                                        

NDDSUSERDllExport
RTIBool largePacket_c_initialize(
    largePacket_c* self);

NDDSUSERDllExport
RTIBool largePacket_c_initialize_ex(
    largePacket_c* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool largePacket_c_initialize_w_params(
    largePacket_c* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void largePacket_c_finalize(
    largePacket_c* self);

NDDSUSERDllExport
void largePacket_c_finalize_ex(
    largePacket_c* self,RTIBool deletePointers);

NDDSUSERDllExport
void largePacket_c_finalize_w_params(
    largePacket_c* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void largePacket_c_finalize_optional_members(
    largePacket_c* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool largePacket_c_copy(
    largePacket_c* dst,
    const largePacket_c* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern const char *smallPacket_cTYPENAME;

typedef struct smallPacket_c {

    DDS_LongLong   sequence_number ;
    DDS_LongLong   timestamp_ns ;
    DDS_Char   payload0 [4];
    DDS_Char   payload1 [4];
    DDS_Char   payload2 [4];
    DDS_Char   payload3 [4];
    DDS_Char   payload4 [4];

    smallPacket_c() {}
} smallPacket_c ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* smallPacket_c_get_typecode(void); /* Type code */

DDS_SEQUENCE(smallPacket_cSeq, smallPacket_c);                                        

NDDSUSERDllExport
RTIBool smallPacket_c_initialize(
    smallPacket_c* self);

NDDSUSERDllExport
RTIBool smallPacket_c_initialize_ex(
    smallPacket_c* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool smallPacket_c_initialize_w_params(
    smallPacket_c* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void smallPacket_c_finalize(
    smallPacket_c* self);

NDDSUSERDllExport
void smallPacket_c_finalize_ex(
    smallPacket_c* self,RTIBool deletePointers);

NDDSUSERDllExport
void smallPacket_c_finalize_w_params(
    smallPacket_c* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void smallPacket_c_finalize_optional_members(
    smallPacket_c* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool smallPacket_c_copy(
    smallPacket_c* dst,
    const smallPacket_c* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* DataTypesImpl */

