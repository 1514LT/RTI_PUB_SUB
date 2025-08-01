

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
const char *Target_cTYPENAME = "Target";

DDS_TypeCode* Target_c_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode Target_c_g_tc_buff_string = DDS_INITIALIZE_STRING_TYPECODE((255));
    static DDS_TypeCode_Member Target_c_g_tc_members[2]=
    {

        {
            (char *)"index",/* Member name */
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
            (char *)"buff",/* Member name */
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
        }
    };

    static DDS_TypeCode Target_c_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"Target", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            2, /* Number of members */
            Target_c_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for Target_c*/

    if (is_initialized) {
        return &Target_c_g_tc;
    }

    Target_c_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    Target_c_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&Target_c_g_tc_buff_string;

    is_initialized = RTI_TRUE;

    return &Target_c_g_tc;
}

RTIBool Target_c_initialize(
    Target_c* sample) {
    return Target_c_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool Target_c_initialize_ex(
    Target_c* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return Target_c_initialize_w_params(
        sample,&allocParams);

}

RTIBool Target_c_initialize_w_params(
    Target_c* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!RTICdrType_initLong(&sample->index)) {
        return RTI_FALSE;
    }     

    if (allocParams->allocate_memory){
        sample->buff= DDS_String_alloc ((255));
        if (sample->buff == NULL) {
            return RTI_FALSE;
        }

    } else {
        if (sample->buff!= NULL) { 
            sample->buff[0] = '\0';
        }
    }

    return RTI_TRUE;
}

void Target_c_finalize(
    Target_c* sample)
{

    Target_c_finalize_ex(sample,RTI_TRUE);
}

void Target_c_finalize_ex(
    Target_c* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    Target_c_finalize_w_params(
        sample,&deallocParams);
}

void Target_c_finalize_w_params(
    Target_c* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    if (sample->buff != NULL) {
        DDS_String_free(sample->buff);
        sample->buff=NULL;

    }
}

void Target_c_finalize_optional_members(
    Target_c* sample, RTIBool deletePointers)
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

RTIBool Target_c_copy(
    Target_c* dst,
    const Target_c* src)
{

    if (!RTICdrType_copyLong (
        &dst->index, &src->index)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyStringEx (
        &dst->buff, src->buff, 
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
* Configure and implement 'Target_c' sequence class.
*/
#define T Target_c
#define TSeq Target_cSeq
#define T_initialize_w_params Target_c_initialize_w_params
#define T_finalize_w_params   Target_c_finalize_w_params
#define T_copy       Target_c_copy

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
const char *TargetReply_cTYPENAME = "TargetReply";

DDS_TypeCode* TargetReply_c_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member TargetReply_c_g_tc_members[1]=
    {

        {
            (char *)"flag",/* Member name */
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
        }
    };

    static DDS_TypeCode TargetReply_c_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"TargetReply", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            1, /* Number of members */
            TargetReply_c_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for TargetReply_c*/

    if (is_initialized) {
        return &TargetReply_c_g_tc;
    }

    TargetReply_c_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    is_initialized = RTI_TRUE;

    return &TargetReply_c_g_tc;
}

RTIBool TargetReply_c_initialize(
    TargetReply_c* sample) {
    return TargetReply_c_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool TargetReply_c_initialize_ex(
    TargetReply_c* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return TargetReply_c_initialize_w_params(
        sample,&allocParams);

}

RTIBool TargetReply_c_initialize_w_params(
    TargetReply_c* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!RTICdrType_initLong(&sample->flag)) {
        return RTI_FALSE;
    }     

    return RTI_TRUE;
}

void TargetReply_c_finalize(
    TargetReply_c* sample)
{

    TargetReply_c_finalize_ex(sample,RTI_TRUE);
}

void TargetReply_c_finalize_ex(
    TargetReply_c* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    TargetReply_c_finalize_w_params(
        sample,&deallocParams);
}

void TargetReply_c_finalize_w_params(
    TargetReply_c* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

}

void TargetReply_c_finalize_optional_members(
    TargetReply_c* sample, RTIBool deletePointers)
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

RTIBool TargetReply_c_copy(
    TargetReply_c* dst,
    const TargetReply_c* src)
{

    if (!RTICdrType_copyLong (
        &dst->flag, &src->flag)) { 
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'TargetReply_c' sequence class.
*/
#define T TargetReply_c
#define TSeq TargetReply_cSeq
#define T_initialize_w_params TargetReply_c_initialize_w_params
#define T_finalize_w_params   TargetReply_c_finalize_w_params
#define T_copy       TargetReply_c_copy

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

