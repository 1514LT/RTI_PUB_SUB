

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from HeartbeatImpl.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_c_h
#include "ndds/ndds_c.h"
#endif

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif    

#ifndef osapi_heap_h
#include "osapi/osapi_heap.h" 
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "HeartbeatImpl.h"

/* ========================================================================= */
const char *heartbeat_SatelliteStatus_cTYPENAME = "heartbeat::SatelliteStatus";

DDS_TypeCode* heartbeat_SatelliteStatus_c_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member heartbeat_SatelliteStatus_c_g_tc_members[5]=
    {

        {
            (char *)"OPERATIONAL",/* Member name */
            {
                0, /* Ignored */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            heartbeat_SatelliteStatus_c_OPERATIONAL, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"MAINTENANCE",/* Member name */
            {
                0, /* Ignored */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            heartbeat_SatelliteStatus_c_MAINTENANCE, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"EMERGENCY",/* Member name */
            {
                0, /* Ignored */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            heartbeat_SatelliteStatus_c_EMERGENCY, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"OFFLINE",/* Member name */
            {
                0, /* Ignored */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            heartbeat_SatelliteStatus_c_OFFLINE, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"RECONFIGURING",/* Member name */
            {
                0, /* Ignored */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            heartbeat_SatelliteStatus_c_RECONFIGURING, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode heartbeat_SatelliteStatus_c_g_tc =
    {{
            DDS_TK_ENUM,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"heartbeat::SatelliteStatus", /* Name */
            NULL,     /* Base class type code is assigned later */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            5, /* Number of members */
            heartbeat_SatelliteStatus_c_g_tc_members, /* Members */
            DDS_VM_NONE   /* Type Modifier */        
        }}; /* Type code for heartbeat_SatelliteStatus_c*/

    if (is_initialized) {
        return &heartbeat_SatelliteStatus_c_g_tc;
    }

    is_initialized = RTI_TRUE;

    return &heartbeat_SatelliteStatus_c_g_tc;
}

RTIBool heartbeat_SatelliteStatus_c_initialize(
    heartbeat_SatelliteStatus_c* sample) {
    *sample = heartbeat_SatelliteStatus_c_OPERATIONAL;
    return RTI_TRUE;
}

RTIBool heartbeat_SatelliteStatus_c_initialize_ex(
    heartbeat_SatelliteStatus_c* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return heartbeat_SatelliteStatus_c_initialize_w_params(
        sample,&allocParams);

}

RTIBool heartbeat_SatelliteStatus_c_initialize_w_params(
    heartbeat_SatelliteStatus_c* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */
    *sample = heartbeat_SatelliteStatus_c_OPERATIONAL;
    return RTI_TRUE;
}

void heartbeat_SatelliteStatus_c_finalize(
    heartbeat_SatelliteStatus_c* sample)
{

    if (sample==NULL) {
        return;
    }
}

void heartbeat_SatelliteStatus_c_finalize_ex(
    heartbeat_SatelliteStatus_c* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    heartbeat_SatelliteStatus_c_finalize_w_params(
        sample,&deallocParams);
}

void heartbeat_SatelliteStatus_c_finalize_w_params(
    heartbeat_SatelliteStatus_c* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

}

void heartbeat_SatelliteStatus_c_finalize_optional_members(
    heartbeat_SatelliteStatus_c* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool heartbeat_SatelliteStatus_c_copy(
    heartbeat_SatelliteStatus_c* dst,
    const heartbeat_SatelliteStatus_c* src)
{

    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);

}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'heartbeat_SatelliteStatus_c' sequence class.
*/
#define T heartbeat_SatelliteStatus_c
#define TSeq heartbeat_SatelliteStatus_cSeq
#define T_initialize_w_params heartbeat_SatelliteStatus_c_initialize_w_params
#define T_finalize_w_params   heartbeat_SatelliteStatus_c_finalize_w_params
#define T_copy       heartbeat_SatelliteStatus_c_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */
const char *heartbeat_TelemetryData_cTYPENAME = "heartbeat::TelemetryData";

DDS_TypeCode* heartbeat_TelemetryData_c_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode heartbeat_TelemetryData_c_g_tc_satelliteId_string = DDS_INITIALIZE_STRING_TYPECODE((255));
    static DDS_TypeCode heartbeat_TelemetryData_c_g_tc_systemHealth_string = DDS_INITIALIZE_STRING_TYPECODE((255));
    static DDS_TypeCode_Member heartbeat_TelemetryData_c_g_tc_members[11]=
    {

        {
            (char *)"satelliteId",/* Member name */
            {
                0,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"timestamp",/* Member name */
            {
                1,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"batteryLevel",/* Member name */
            {
                2,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"solarPanelOutput",/* Member name */
            {
                3,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"temperature",/* Member name */
            {
                4,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"cpuUsage",/* Member name */
            {
                5,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"memoryUsage",/* Member name */
            {
                6,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"dataStorageUsage",/* Member name */
            {
                7,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"antennaStatus",/* Member name */
            {
                8,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"cameraStatus",/* Member name */
            {
                9,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"systemHealth",/* Member name */
            {
                10,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode heartbeat_TelemetryData_c_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"heartbeat::TelemetryData", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            11, /* Number of members */
            heartbeat_TelemetryData_c_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for heartbeat_TelemetryData_c*/

    if (is_initialized) {
        return &heartbeat_TelemetryData_c_g_tc;
    }

    heartbeat_TelemetryData_c_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&heartbeat_TelemetryData_c_g_tc_satelliteId_string;

    heartbeat_TelemetryData_c_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;

    heartbeat_TelemetryData_c_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    heartbeat_TelemetryData_c_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    heartbeat_TelemetryData_c_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    heartbeat_TelemetryData_c_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    heartbeat_TelemetryData_c_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    heartbeat_TelemetryData_c_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    heartbeat_TelemetryData_c_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

    heartbeat_TelemetryData_c_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

    heartbeat_TelemetryData_c_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&heartbeat_TelemetryData_c_g_tc_systemHealth_string;

    is_initialized = RTI_TRUE;

    return &heartbeat_TelemetryData_c_g_tc;
}

RTIBool heartbeat_TelemetryData_c_initialize(
    heartbeat_TelemetryData_c* sample) {
    return heartbeat_TelemetryData_c_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool heartbeat_TelemetryData_c_initialize_ex(
    heartbeat_TelemetryData_c* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return heartbeat_TelemetryData_c_initialize_w_params(
        sample,&allocParams);

}

RTIBool heartbeat_TelemetryData_c_initialize_w_params(
    heartbeat_TelemetryData_c* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (allocParams->allocate_memory){
        sample->satelliteId= DDS_String_alloc ((255));
        if (sample->satelliteId == NULL) {
            return RTI_FALSE;
        }

    } else {
        if (sample->satelliteId!= NULL) { 
            sample->satelliteId[0] = '\0';
        }
    }

    if (!RTICdrType_initLongLong(&sample->timestamp)) {
        return RTI_FALSE;
    }     

    if (!RTICdrType_initDouble(&sample->batteryLevel)) {
        return RTI_FALSE;
    }     

    if (!RTICdrType_initDouble(&sample->solarPanelOutput)) {
        return RTI_FALSE;
    }     

    if (!RTICdrType_initDouble(&sample->temperature)) {
        return RTI_FALSE;
    }     

    if (!RTICdrType_initDouble(&sample->cpuUsage)) {
        return RTI_FALSE;
    }     

    if (!RTICdrType_initDouble(&sample->memoryUsage)) {
        return RTI_FALSE;
    }     

    if (!RTICdrType_initDouble(&sample->dataStorageUsage)) {
        return RTI_FALSE;
    }     

    if (!RTICdrType_initBoolean(&sample->antennaStatus)) {
        return RTI_FALSE;
    }     

    if (!RTICdrType_initBoolean(&sample->cameraStatus)) {
        return RTI_FALSE;
    }     

    if (allocParams->allocate_memory){
        sample->systemHealth= DDS_String_alloc ((255));
        if (sample->systemHealth == NULL) {
            return RTI_FALSE;
        }

    } else {
        if (sample->systemHealth!= NULL) { 
            sample->systemHealth[0] = '\0';
        }
    }

    return RTI_TRUE;
}

void heartbeat_TelemetryData_c_finalize(
    heartbeat_TelemetryData_c* sample)
{

    heartbeat_TelemetryData_c_finalize_ex(sample,RTI_TRUE);
}

void heartbeat_TelemetryData_c_finalize_ex(
    heartbeat_TelemetryData_c* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    heartbeat_TelemetryData_c_finalize_w_params(
        sample,&deallocParams);
}

void heartbeat_TelemetryData_c_finalize_w_params(
    heartbeat_TelemetryData_c* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    if (sample->satelliteId != NULL) {
        DDS_String_free(sample->satelliteId);
        sample->satelliteId=NULL;

    }

    if (sample->systemHealth != NULL) {
        DDS_String_free(sample->systemHealth);
        sample->systemHealth=NULL;

    }
}

void heartbeat_TelemetryData_c_finalize_optional_members(
    heartbeat_TelemetryData_c* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool heartbeat_TelemetryData_c_copy(
    heartbeat_TelemetryData_c* dst,
    const heartbeat_TelemetryData_c* src)
{

    if (!RTICdrType_copyStringEx (
        &dst->satelliteId, src->satelliteId, 
        (255) + 1,RTI_TRUE)){
        return RTI_FALSE;
    }
    if (!RTICdrType_copyLongLong (
        &dst->timestamp, &src->timestamp)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->batteryLevel, &src->batteryLevel)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->solarPanelOutput, &src->solarPanelOutput)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->temperature, &src->temperature)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->cpuUsage, &src->cpuUsage)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->memoryUsage, &src->memoryUsage)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->dataStorageUsage, &src->dataStorageUsage)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyBoolean (
        &dst->antennaStatus, &src->antennaStatus)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyBoolean (
        &dst->cameraStatus, &src->cameraStatus)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyStringEx (
        &dst->systemHealth, src->systemHealth, 
        (255) + 1,RTI_TRUE)){
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'heartbeat_TelemetryData_c' sequence class.
*/
#define T heartbeat_TelemetryData_c
#define TSeq heartbeat_TelemetryData_cSeq
#define T_initialize_w_params heartbeat_TelemetryData_c_initialize_w_params
#define T_finalize_w_params   heartbeat_TelemetryData_c_finalize_w_params
#define T_copy       heartbeat_TelemetryData_c_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */
const char *heartbeat_SatelliteInfo_cTYPENAME = "heartbeat::SatelliteInfo";

DDS_TypeCode* heartbeat_SatelliteInfo_c_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode heartbeat_SatelliteInfo_c_g_tc_satelliteId_string = DDS_INITIALIZE_STRING_TYPECODE((255));
    static DDS_TypeCode heartbeat_SatelliteInfo_c_g_tc_satelliteName_string = DDS_INITIALIZE_STRING_TYPECODE((255));
    static DDS_TypeCode heartbeat_SatelliteInfo_c_g_tc_constellation_string = DDS_INITIALIZE_STRING_TYPECODE((255));
    static DDS_TypeCode_Member heartbeat_SatelliteInfo_c_g_tc_members[9]=
    {

        {
            (char *)"satelliteId",/* Member name */
            {
                0,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"satelliteName",/* Member name */
            {
                1,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"constellation",/* Member name */
            {
                2,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"latitude",/* Member name */
            {
                3,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"longitude",/* Member name */
            {
                4,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"altitude",/* Member name */
            {
                5,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"velocity",/* Member name */
            {
                6,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"timestamp",/* Member name */
            {
                7,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"status",/* Member name */
            {
                8,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode heartbeat_SatelliteInfo_c_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"heartbeat::SatelliteInfo", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            9, /* Number of members */
            heartbeat_SatelliteInfo_c_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for heartbeat_SatelliteInfo_c*/

    if (is_initialized) {
        return &heartbeat_SatelliteInfo_c_g_tc;
    }

    heartbeat_SatelliteInfo_c_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&heartbeat_SatelliteInfo_c_g_tc_satelliteId_string;

    heartbeat_SatelliteInfo_c_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&heartbeat_SatelliteInfo_c_g_tc_satelliteName_string;

    heartbeat_SatelliteInfo_c_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&heartbeat_SatelliteInfo_c_g_tc_constellation_string;

    heartbeat_SatelliteInfo_c_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    heartbeat_SatelliteInfo_c_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    heartbeat_SatelliteInfo_c_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    heartbeat_SatelliteInfo_c_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    heartbeat_SatelliteInfo_c_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;

    heartbeat_SatelliteInfo_c_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)heartbeat_SatelliteStatus_c_get_typecode();

    is_initialized = RTI_TRUE;

    return &heartbeat_SatelliteInfo_c_g_tc;
}

RTIBool heartbeat_SatelliteInfo_c_initialize(
    heartbeat_SatelliteInfo_c* sample) {
    return heartbeat_SatelliteInfo_c_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool heartbeat_SatelliteInfo_c_initialize_ex(
    heartbeat_SatelliteInfo_c* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return heartbeat_SatelliteInfo_c_initialize_w_params(
        sample,&allocParams);

}

RTIBool heartbeat_SatelliteInfo_c_initialize_w_params(
    heartbeat_SatelliteInfo_c* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (allocParams->allocate_memory){
        sample->satelliteId= DDS_String_alloc ((255));
        if (sample->satelliteId == NULL) {
            return RTI_FALSE;
        }

    } else {
        if (sample->satelliteId!= NULL) { 
            sample->satelliteId[0] = '\0';
        }
    }

    if (allocParams->allocate_memory){
        sample->satelliteName= DDS_String_alloc ((255));
        if (sample->satelliteName == NULL) {
            return RTI_FALSE;
        }

    } else {
        if (sample->satelliteName!= NULL) { 
            sample->satelliteName[0] = '\0';
        }
    }

    if (allocParams->allocate_memory){
        sample->constellation= DDS_String_alloc ((255));
        if (sample->constellation == NULL) {
            return RTI_FALSE;
        }

    } else {
        if (sample->constellation!= NULL) { 
            sample->constellation[0] = '\0';
        }
    }

    if (!RTICdrType_initDouble(&sample->latitude)) {
        return RTI_FALSE;
    }     

    if (!RTICdrType_initDouble(&sample->longitude)) {
        return RTI_FALSE;
    }     

    if (!RTICdrType_initDouble(&sample->altitude)) {
        return RTI_FALSE;
    }     

    if (!RTICdrType_initDouble(&sample->velocity)) {
        return RTI_FALSE;
    }     

    if (!RTICdrType_initLongLong(&sample->timestamp)) {
        return RTI_FALSE;
    }     

    if (!heartbeat_SatelliteStatus_c_initialize_w_params(&sample->status,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void heartbeat_SatelliteInfo_c_finalize(
    heartbeat_SatelliteInfo_c* sample)
{

    heartbeat_SatelliteInfo_c_finalize_ex(sample,RTI_TRUE);
}

void heartbeat_SatelliteInfo_c_finalize_ex(
    heartbeat_SatelliteInfo_c* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    heartbeat_SatelliteInfo_c_finalize_w_params(
        sample,&deallocParams);
}

void heartbeat_SatelliteInfo_c_finalize_w_params(
    heartbeat_SatelliteInfo_c* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    if (sample->satelliteId != NULL) {
        DDS_String_free(sample->satelliteId);
        sample->satelliteId=NULL;

    }
    if (sample->satelliteName != NULL) {
        DDS_String_free(sample->satelliteName);
        sample->satelliteName=NULL;

    }
    if (sample->constellation != NULL) {
        DDS_String_free(sample->constellation);
        sample->constellation=NULL;

    }

    heartbeat_SatelliteStatus_c_finalize_w_params(&sample->status,deallocParams);

}

void heartbeat_SatelliteInfo_c_finalize_optional_members(
    heartbeat_SatelliteInfo_c* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    heartbeat_SatelliteStatus_c_finalize_optional_members(&sample->status, deallocParams->delete_pointers);
}

RTIBool heartbeat_SatelliteInfo_c_copy(
    heartbeat_SatelliteInfo_c* dst,
    const heartbeat_SatelliteInfo_c* src)
{

    if (!RTICdrType_copyStringEx (
        &dst->satelliteId, src->satelliteId, 
        (255) + 1,RTI_TRUE)){
        return RTI_FALSE;
    }
    if (!RTICdrType_copyStringEx (
        &dst->satelliteName, src->satelliteName, 
        (255) + 1,RTI_TRUE)){
        return RTI_FALSE;
    }
    if (!RTICdrType_copyStringEx (
        &dst->constellation, src->constellation, 
        (255) + 1,RTI_TRUE)){
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->latitude, &src->latitude)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->longitude, &src->longitude)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->altitude, &src->altitude)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->velocity, &src->velocity)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyLongLong (
        &dst->timestamp, &src->timestamp)) { 
        return RTI_FALSE;
    }
    if (!heartbeat_SatelliteStatus_c_copy(
        &dst->status, &src->status)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'heartbeat_SatelliteInfo_c' sequence class.
*/
#define T heartbeat_SatelliteInfo_c
#define TSeq heartbeat_SatelliteInfo_cSeq
#define T_initialize_w_params heartbeat_SatelliteInfo_c_initialize_w_params
#define T_finalize_w_params   heartbeat_SatelliteInfo_c_finalize_w_params
#define T_copy       heartbeat_SatelliteInfo_c_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */
const char *heartbeat_HeartbeatMessage_cTYPENAME = "heartbeat::HeartbeatMessage";

DDS_TypeCode* heartbeat_HeartbeatMessage_c_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member heartbeat_HeartbeatMessage_c_g_tc_members[4]=
    {

        {
            (char *)"header",/* Member name */
            {
                0,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"satelliteInfo",/* Member name */
            {
                1,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"telemetry",/* Member name */
            {
                2,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"uptime",/* Member name */
            {
                3,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode heartbeat_HeartbeatMessage_c_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"heartbeat::HeartbeatMessage", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            4, /* Number of members */
            heartbeat_HeartbeatMessage_c_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for heartbeat_HeartbeatMessage_c*/

    if (is_initialized) {
        return &heartbeat_HeartbeatMessage_c_g_tc;
    }

    heartbeat_HeartbeatMessage_c_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)MessageHeader_c_get_typecode();

    heartbeat_HeartbeatMessage_c_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)heartbeat_SatelliteInfo_c_get_typecode();

    heartbeat_HeartbeatMessage_c_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)heartbeat_TelemetryData_c_get_typecode();

    heartbeat_HeartbeatMessage_c_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    is_initialized = RTI_TRUE;

    return &heartbeat_HeartbeatMessage_c_g_tc;
}

RTIBool heartbeat_HeartbeatMessage_c_initialize(
    heartbeat_HeartbeatMessage_c* sample) {
    return heartbeat_HeartbeatMessage_c_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool heartbeat_HeartbeatMessage_c_initialize_ex(
    heartbeat_HeartbeatMessage_c* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return heartbeat_HeartbeatMessage_c_initialize_w_params(
        sample,&allocParams);

}

RTIBool heartbeat_HeartbeatMessage_c_initialize_w_params(
    heartbeat_HeartbeatMessage_c* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!MessageHeader_c_initialize_w_params(&sample->header,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!heartbeat_SatelliteInfo_c_initialize_w_params(&sample->satelliteInfo,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!heartbeat_TelemetryData_c_initialize_w_params(&sample->telemetry,
    allocParams)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initLong(&sample->uptime)) {
        return RTI_FALSE;
    }     

    return RTI_TRUE;
}

void heartbeat_HeartbeatMessage_c_finalize(
    heartbeat_HeartbeatMessage_c* sample)
{

    heartbeat_HeartbeatMessage_c_finalize_ex(sample,RTI_TRUE);
}

void heartbeat_HeartbeatMessage_c_finalize_ex(
    heartbeat_HeartbeatMessage_c* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    heartbeat_HeartbeatMessage_c_finalize_w_params(
        sample,&deallocParams);
}

void heartbeat_HeartbeatMessage_c_finalize_w_params(
    heartbeat_HeartbeatMessage_c* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    MessageHeader_c_finalize_w_params(&sample->header,deallocParams);

    heartbeat_SatelliteInfo_c_finalize_w_params(&sample->satelliteInfo,deallocParams);

    heartbeat_TelemetryData_c_finalize_w_params(&sample->telemetry,deallocParams);

}

void heartbeat_HeartbeatMessage_c_finalize_optional_members(
    heartbeat_HeartbeatMessage_c* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    MessageHeader_c_finalize_optional_members(&sample->header, deallocParams->delete_pointers);
    heartbeat_SatelliteInfo_c_finalize_optional_members(&sample->satelliteInfo, deallocParams->delete_pointers);
    heartbeat_TelemetryData_c_finalize_optional_members(&sample->telemetry, deallocParams->delete_pointers);
}

RTIBool heartbeat_HeartbeatMessage_c_copy(
    heartbeat_HeartbeatMessage_c* dst,
    const heartbeat_HeartbeatMessage_c* src)
{

    if (!MessageHeader_c_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    } 
    if (!heartbeat_SatelliteInfo_c_copy(
        &dst->satelliteInfo, &src->satelliteInfo)) {
        return RTI_FALSE;
    } 
    if (!heartbeat_TelemetryData_c_copy(
        &dst->telemetry, &src->telemetry)) {
        return RTI_FALSE;
    } 
    if (!RTICdrType_copyLong (
        &dst->uptime, &src->uptime)) { 
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'heartbeat_HeartbeatMessage_c' sequence class.
*/
#define T heartbeat_HeartbeatMessage_c
#define TSeq heartbeat_HeartbeatMessage_cSeq
#define T_initialize_w_params heartbeat_HeartbeatMessage_c_initialize_w_params
#define T_finalize_w_params   heartbeat_HeartbeatMessage_c_finalize_w_params
#define T_copy       heartbeat_HeartbeatMessage_c_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

