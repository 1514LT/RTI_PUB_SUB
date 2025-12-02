

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Base.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
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

#include "Base.h"

/* ========================================================================= */
const char *BasicStructTYPENAME = "BasicStruct";

DDS_TypeCode* BasicStruct_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode BasicStruct_g_tc_name_string = DDS_INITIALIZE_STRING_TYPECODE((255));
    static DDS_TypeCode_Member BasicStruct_g_tc_members[3]=
    {

        {
            (char *)"id",/* Member name */
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
            (char *)"name",/* Member name */
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
            (char *)"value",/* Member name */
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

    static DDS_TypeCode BasicStruct_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"BasicStruct", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            3, /* Number of members */
            BasicStruct_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for BasicStruct*/

    if (is_initialized) {
        return &BasicStruct_g_tc;
    }

    BasicStruct_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    BasicStruct_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&BasicStruct_g_tc_name_string;

    BasicStruct_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    is_initialized = RTI_TRUE;

    return &BasicStruct_g_tc;
}

RTIBool BasicStruct_initialize(
    BasicStruct* sample) {
    return BasicStruct_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool BasicStruct_initialize_ex(
    BasicStruct* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return BasicStruct_initialize_w_params(
        sample,&allocParams);

}

RTIBool BasicStruct_initialize_w_params(
    BasicStruct* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!RTICdrType_initLong(&sample->id)) {
        return RTI_FALSE;
    }     

    if (allocParams->allocate_memory){
        sample->name= DDS_String_alloc ((255));
        if (sample->name == NULL) {
            return RTI_FALSE;
        }

    } else {
        if (sample->name!= NULL) { 
            sample->name[0] = '\0';
        }
    }

    if (!RTICdrType_initDouble(&sample->value)) {
        return RTI_FALSE;
    }     

    return RTI_TRUE;
}

void BasicStruct_finalize(
    BasicStruct* sample)
{

    BasicStruct_finalize_ex(sample,RTI_TRUE);
}

void BasicStruct_finalize_ex(
    BasicStruct* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    BasicStruct_finalize_w_params(
        sample,&deallocParams);
}

void BasicStruct_finalize_w_params(
    BasicStruct* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    if (sample->name != NULL) {
        DDS_String_free(sample->name);
        sample->name=NULL;

    }

}

void BasicStruct_finalize_optional_members(
    BasicStruct* sample, RTIBool deletePointers)
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

RTIBool BasicStruct_copy(
    BasicStruct* dst,
    const BasicStruct* src)
{

    if (!RTICdrType_copyLong (
        &dst->id, &src->id)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyStringEx (
        &dst->name, src->name, 
        (255) + 1, RTI_FALSE)){
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->value, &src->value)) { 
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'BasicStruct' sequence class.
*/
#define T BasicStruct
#define TSeq BasicStructSeq
#define T_initialize_w_params BasicStruct_initialize_w_params
#define T_finalize_w_params   BasicStruct_finalize_w_params
#define T_copy       BasicStruct_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

