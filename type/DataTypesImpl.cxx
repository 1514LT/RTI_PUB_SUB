

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DataTypesImpl.idl using "rtiddsgen".
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

#include "DataTypesImpl.h"

/* ========================================================================= */
const char *largePacket_cTYPENAME = "largePacket";

DDS_TypeCode* largePacket_c_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode largePacket_c_g_tc_payload_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,1484, NULL,NULL);
    static DDS_TypeCode_Member largePacket_c_g_tc_members[3]=
    {

        {
            (char *)"sequence_number",/* Member name */
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
            (char *)"timestamp_ns",/* Member name */
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
            (char *)"payload",/* Member name */
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
        }
    };

    static DDS_TypeCode largePacket_c_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"largePacket", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            3, /* Number of members */
            largePacket_c_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for largePacket_c*/

    if (is_initialized) {
        return &largePacket_c_g_tc;
    }

    largePacket_c_g_tc_payload_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_char;

    largePacket_c_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;

    largePacket_c_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;

    largePacket_c_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)& largePacket_c_g_tc_payload_array;

    is_initialized = RTI_TRUE;

    return &largePacket_c_g_tc;
}

RTIBool largePacket_c_initialize(
    largePacket_c* sample) {
    return largePacket_c_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool largePacket_c_initialize_ex(
    largePacket_c* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return largePacket_c_initialize_w_params(
        sample,&allocParams);

}

RTIBool largePacket_c_initialize_w_params(
    largePacket_c* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!RTICdrType_initLongLong(&sample->sequence_number)) {
        return RTI_FALSE;
    }     

    if (!RTICdrType_initLongLong(&sample->timestamp_ns)) {
        return RTI_FALSE;
    }     

    if (!RTICdrType_initArray(
        sample->payload, (1484), RTI_CDR_CHAR_SIZE)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void largePacket_c_finalize(
    largePacket_c* sample)
{

    largePacket_c_finalize_ex(sample,RTI_TRUE);
}

void largePacket_c_finalize_ex(
    largePacket_c* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    largePacket_c_finalize_w_params(
        sample,&deallocParams);
}

void largePacket_c_finalize_w_params(
    largePacket_c* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

}

void largePacket_c_finalize_optional_members(
    largePacket_c* sample, RTIBool deletePointers)
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

RTIBool largePacket_c_copy(
    largePacket_c* dst,
    const largePacket_c* src)
{

    if (!RTICdrType_copyLongLong (
        &dst->sequence_number, &src->sequence_number)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyLongLong (
        &dst->timestamp_ns, &src->timestamp_ns)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyArray(
        dst->payload ,src->payload,(1484), RTI_CDR_CHAR_SIZE)) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'largePacket_c' sequence class.
*/
#define T largePacket_c
#define TSeq largePacket_cSeq
#define T_initialize_w_params largePacket_c_initialize_w_params
#define T_finalize_w_params   largePacket_c_finalize_w_params
#define T_copy       largePacket_c_copy

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
const char *smallPacket_cTYPENAME = "smallPacket";

DDS_TypeCode* smallPacket_c_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode smallPacket_c_g_tc_payload0_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,4, NULL,NULL);
    static DDS_TypeCode smallPacket_c_g_tc_payload1_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,4, NULL,NULL);
    static DDS_TypeCode smallPacket_c_g_tc_payload2_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,4, NULL,NULL);
    static DDS_TypeCode smallPacket_c_g_tc_payload3_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,4, NULL,NULL);
    static DDS_TypeCode smallPacket_c_g_tc_payload4_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,4, NULL,NULL);
    static DDS_TypeCode_Member smallPacket_c_g_tc_members[7]=
    {

        {
            (char *)"sequence_number",/* Member name */
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
            (char *)"timestamp_ns",/* Member name */
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
            (char *)"payload0",/* Member name */
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
            (char *)"payload1",/* Member name */
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
            (char *)"payload2",/* Member name */
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
            (char *)"payload3",/* Member name */
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
            (char *)"payload4",/* Member name */
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
        }
    };

    static DDS_TypeCode smallPacket_c_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"smallPacket", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            7, /* Number of members */
            smallPacket_c_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for smallPacket_c*/

    if (is_initialized) {
        return &smallPacket_c_g_tc;
    }

    smallPacket_c_g_tc_payload0_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_char;

    smallPacket_c_g_tc_payload1_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_char;

    smallPacket_c_g_tc_payload2_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_char;

    smallPacket_c_g_tc_payload3_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_char;

    smallPacket_c_g_tc_payload4_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_char;

    smallPacket_c_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;

    smallPacket_c_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;

    smallPacket_c_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)& smallPacket_c_g_tc_payload0_array;
    smallPacket_c_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)& smallPacket_c_g_tc_payload1_array;
    smallPacket_c_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)& smallPacket_c_g_tc_payload2_array;
    smallPacket_c_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)& smallPacket_c_g_tc_payload3_array;
    smallPacket_c_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)& smallPacket_c_g_tc_payload4_array;

    is_initialized = RTI_TRUE;

    return &smallPacket_c_g_tc;
}

RTIBool smallPacket_c_initialize(
    smallPacket_c* sample) {
    return smallPacket_c_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool smallPacket_c_initialize_ex(
    smallPacket_c* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return smallPacket_c_initialize_w_params(
        sample,&allocParams);

}

RTIBool smallPacket_c_initialize_w_params(
    smallPacket_c* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!RTICdrType_initLongLong(&sample->sequence_number)) {
        return RTI_FALSE;
    }     

    if (!RTICdrType_initLongLong(&sample->timestamp_ns)) {
        return RTI_FALSE;
    }     

    if (!RTICdrType_initArray(
        sample->payload0, (4), RTI_CDR_CHAR_SIZE)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_initArray(
        sample->payload1, (4), RTI_CDR_CHAR_SIZE)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_initArray(
        sample->payload2, (4), RTI_CDR_CHAR_SIZE)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_initArray(
        sample->payload3, (4), RTI_CDR_CHAR_SIZE)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_initArray(
        sample->payload4, (4), RTI_CDR_CHAR_SIZE)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void smallPacket_c_finalize(
    smallPacket_c* sample)
{

    smallPacket_c_finalize_ex(sample,RTI_TRUE);
}

void smallPacket_c_finalize_ex(
    smallPacket_c* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    smallPacket_c_finalize_w_params(
        sample,&deallocParams);
}

void smallPacket_c_finalize_w_params(
    smallPacket_c* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

}

void smallPacket_c_finalize_optional_members(
    smallPacket_c* sample, RTIBool deletePointers)
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

RTIBool smallPacket_c_copy(
    smallPacket_c* dst,
    const smallPacket_c* src)
{

    if (!RTICdrType_copyLongLong (
        &dst->sequence_number, &src->sequence_number)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyLongLong (
        &dst->timestamp_ns, &src->timestamp_ns)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyArray(
        dst->payload0 ,src->payload0,(4), RTI_CDR_CHAR_SIZE)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_copyArray(
        dst->payload1 ,src->payload1,(4), RTI_CDR_CHAR_SIZE)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_copyArray(
        dst->payload2 ,src->payload2,(4), RTI_CDR_CHAR_SIZE)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_copyArray(
        dst->payload3 ,src->payload3,(4), RTI_CDR_CHAR_SIZE)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_copyArray(
        dst->payload4 ,src->payload4,(4), RTI_CDR_CHAR_SIZE)) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'smallPacket_c' sequence class.
*/
#define T smallPacket_c
#define TSeq smallPacket_cSeq
#define T_initialize_w_params smallPacket_c_initialize_w_params
#define T_finalize_w_params   smallPacket_c_finalize_w_params
#define T_copy       smallPacket_c_copy

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

