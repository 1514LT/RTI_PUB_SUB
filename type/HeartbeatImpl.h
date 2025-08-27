

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from HeartbeatImpl.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef HeartbeatImpl_816432136_h
#define HeartbeatImpl_816432136_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_c_h
#include "ndds/ndds_c.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "MessageHeaderImpl.h"
typedef enum heartbeat_SatelliteStatus_c
{
    heartbeat_SatelliteStatus_c_OPERATIONAL ,      
    heartbeat_SatelliteStatus_c_MAINTENANCE ,      
    heartbeat_SatelliteStatus_c_EMERGENCY ,      
    heartbeat_SatelliteStatus_c_OFFLINE ,      
    heartbeat_SatelliteStatus_c_RECONFIGURING      
} heartbeat_SatelliteStatus_c;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* heartbeat_SatelliteStatus_c_get_typecode(void); /* Type code */

DDS_SEQUENCE(heartbeat_SatelliteStatus_cSeq, heartbeat_SatelliteStatus_c);                                        

NDDSUSERDllExport
RTIBool heartbeat_SatelliteStatus_c_initialize(
    heartbeat_SatelliteStatus_c* self);

NDDSUSERDllExport
RTIBool heartbeat_SatelliteStatus_c_initialize_ex(
    heartbeat_SatelliteStatus_c* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool heartbeat_SatelliteStatus_c_initialize_w_params(
    heartbeat_SatelliteStatus_c* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void heartbeat_SatelliteStatus_c_finalize(
    heartbeat_SatelliteStatus_c* self);

NDDSUSERDllExport
void heartbeat_SatelliteStatus_c_finalize_ex(
    heartbeat_SatelliteStatus_c* self,RTIBool deletePointers);

NDDSUSERDllExport
void heartbeat_SatelliteStatus_c_finalize_w_params(
    heartbeat_SatelliteStatus_c* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void heartbeat_SatelliteStatus_c_finalize_optional_members(
    heartbeat_SatelliteStatus_c* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool heartbeat_SatelliteStatus_c_copy(
    heartbeat_SatelliteStatus_c* dst,
    const heartbeat_SatelliteStatus_c* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern const char *heartbeat_TelemetryData_cTYPENAME;

typedef struct heartbeat_TelemetryData_c {

    DDS_Char *   satelliteId ;
    DDS_LongLong   timestamp ;
    DDS_Double   batteryLevel ;
    DDS_Double   solarPanelOutput ;
    DDS_Double   temperature ;
    DDS_Double   cpuUsage ;
    DDS_Double   memoryUsage ;
    DDS_Double   dataStorageUsage ;
    DDS_Boolean   antennaStatus ;
    DDS_Boolean   cameraStatus ;
    DDS_Char *   systemHealth ;

    heartbeat_TelemetryData_c() {}
} heartbeat_TelemetryData_c ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* heartbeat_TelemetryData_c_get_typecode(void); /* Type code */

DDS_SEQUENCE(heartbeat_TelemetryData_cSeq, heartbeat_TelemetryData_c);                                        

NDDSUSERDllExport
RTIBool heartbeat_TelemetryData_c_initialize(
    heartbeat_TelemetryData_c* self);

NDDSUSERDllExport
RTIBool heartbeat_TelemetryData_c_initialize_ex(
    heartbeat_TelemetryData_c* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool heartbeat_TelemetryData_c_initialize_w_params(
    heartbeat_TelemetryData_c* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void heartbeat_TelemetryData_c_finalize(
    heartbeat_TelemetryData_c* self);

NDDSUSERDllExport
void heartbeat_TelemetryData_c_finalize_ex(
    heartbeat_TelemetryData_c* self,RTIBool deletePointers);

NDDSUSERDllExport
void heartbeat_TelemetryData_c_finalize_w_params(
    heartbeat_TelemetryData_c* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void heartbeat_TelemetryData_c_finalize_optional_members(
    heartbeat_TelemetryData_c* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool heartbeat_TelemetryData_c_copy(
    heartbeat_TelemetryData_c* dst,
    const heartbeat_TelemetryData_c* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern const char *heartbeat_SatelliteInfo_cTYPENAME;

typedef struct heartbeat_SatelliteInfo_c {

    DDS_Char *   satelliteId ;
    DDS_Char *   satelliteName ;
    DDS_Char *   constellation ;
    DDS_Double   latitude ;
    DDS_Double   longitude ;
    DDS_Double   altitude ;
    DDS_Double   velocity ;
    DDS_LongLong   timestamp ;
    heartbeat_SatelliteStatus_c   status ;

    heartbeat_SatelliteInfo_c() {}
} heartbeat_SatelliteInfo_c ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* heartbeat_SatelliteInfo_c_get_typecode(void); /* Type code */

DDS_SEQUENCE(heartbeat_SatelliteInfo_cSeq, heartbeat_SatelliteInfo_c);                                        

NDDSUSERDllExport
RTIBool heartbeat_SatelliteInfo_c_initialize(
    heartbeat_SatelliteInfo_c* self);

NDDSUSERDllExport
RTIBool heartbeat_SatelliteInfo_c_initialize_ex(
    heartbeat_SatelliteInfo_c* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool heartbeat_SatelliteInfo_c_initialize_w_params(
    heartbeat_SatelliteInfo_c* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void heartbeat_SatelliteInfo_c_finalize(
    heartbeat_SatelliteInfo_c* self);

NDDSUSERDllExport
void heartbeat_SatelliteInfo_c_finalize_ex(
    heartbeat_SatelliteInfo_c* self,RTIBool deletePointers);

NDDSUSERDllExport
void heartbeat_SatelliteInfo_c_finalize_w_params(
    heartbeat_SatelliteInfo_c* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void heartbeat_SatelliteInfo_c_finalize_optional_members(
    heartbeat_SatelliteInfo_c* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool heartbeat_SatelliteInfo_c_copy(
    heartbeat_SatelliteInfo_c* dst,
    const heartbeat_SatelliteInfo_c* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern const char *heartbeat_HeartbeatMessage_cTYPENAME;

typedef struct heartbeat_HeartbeatMessage_c {

    MessageHeader_c   header ;
    heartbeat_SatelliteInfo_c   satelliteInfo ;
    heartbeat_TelemetryData_c   telemetry ;
    DDS_Long   uptime ;

    heartbeat_HeartbeatMessage_c() {}
} heartbeat_HeartbeatMessage_c ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* heartbeat_HeartbeatMessage_c_get_typecode(void); /* Type code */

DDS_SEQUENCE(heartbeat_HeartbeatMessage_cSeq, heartbeat_HeartbeatMessage_c);                                        

NDDSUSERDllExport
RTIBool heartbeat_HeartbeatMessage_c_initialize(
    heartbeat_HeartbeatMessage_c* self);

NDDSUSERDllExport
RTIBool heartbeat_HeartbeatMessage_c_initialize_ex(
    heartbeat_HeartbeatMessage_c* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool heartbeat_HeartbeatMessage_c_initialize_w_params(
    heartbeat_HeartbeatMessage_c* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void heartbeat_HeartbeatMessage_c_finalize(
    heartbeat_HeartbeatMessage_c* self);

NDDSUSERDllExport
void heartbeat_HeartbeatMessage_c_finalize_ex(
    heartbeat_HeartbeatMessage_c* self,RTIBool deletePointers);

NDDSUSERDllExport
void heartbeat_HeartbeatMessage_c_finalize_w_params(
    heartbeat_HeartbeatMessage_c* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void heartbeat_HeartbeatMessage_c_finalize_optional_members(
    heartbeat_HeartbeatMessage_c* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool heartbeat_HeartbeatMessage_c_copy(
    heartbeat_HeartbeatMessage_c* dst,
    const heartbeat_HeartbeatMessage_c* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* HeartbeatImpl */

