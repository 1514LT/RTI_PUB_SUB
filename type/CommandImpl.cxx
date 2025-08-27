

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommandImpl.idl using "rtiddsgen".
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

#include "CommandImpl.h"

/* ========================================================================= */
const char *cmd_CommandType_cTYPENAME = "cmd::CommandType";

DDS_TypeCode* cmd_CommandType_c_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member cmd_CommandType_c_g_tc_members[7]=
    {

        {
            (char *)"POWER_ON",/* Member name */
            {
                0, /* Ignored */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            cmd_CommandType_c_POWER_ON, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"POWER_OFF",/* Member name */
            {
                0, /* Ignored */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            cmd_CommandType_c_POWER_OFF, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"RESET",/* Member name */
            {
                0, /* Ignored */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            cmd_CommandType_c_RESET, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"RECONFIGURE",/* Member name */
            {
                0, /* Ignored */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            cmd_CommandType_c_RECONFIGURE, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"CALIBRATE",/* Member name */
            {
                0, /* Ignored */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            cmd_CommandType_c_CALIBRATE, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"EMERGENCY_STOP",/* Member name */
            {
                0, /* Ignored */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            cmd_CommandType_c_EMERGENCY_STOP, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"CUSTOM",/* Member name */
            {
                0, /* Ignored */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            cmd_CommandType_c_CUSTOM, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode cmd_CommandType_c_g_tc =
    {{
            DDS_TK_ENUM,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"cmd::CommandType", /* Name */
            NULL,     /* Base class type code is assigned later */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            7, /* Number of members */
            cmd_CommandType_c_g_tc_members, /* Members */
            DDS_VM_NONE   /* Type Modifier */        
        }}; /* Type code for cmd_CommandType_c*/

    if (is_initialized) {
        return &cmd_CommandType_c_g_tc;
    }

    is_initialized = RTI_TRUE;

    return &cmd_CommandType_c_g_tc;
}

RTIBool cmd_CommandType_c_initialize(
    cmd_CommandType_c* sample) {
    *sample = cmd_CommandType_c_POWER_ON;
    return RTI_TRUE;
}

RTIBool cmd_CommandType_c_initialize_ex(
    cmd_CommandType_c* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return cmd_CommandType_c_initialize_w_params(
        sample,&allocParams);

}

RTIBool cmd_CommandType_c_initialize_w_params(
    cmd_CommandType_c* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */
    *sample = cmd_CommandType_c_POWER_ON;
    return RTI_TRUE;
}

void cmd_CommandType_c_finalize(
    cmd_CommandType_c* sample)
{

    if (sample==NULL) {
        return;
    }
}

void cmd_CommandType_c_finalize_ex(
    cmd_CommandType_c* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    cmd_CommandType_c_finalize_w_params(
        sample,&deallocParams);
}

void cmd_CommandType_c_finalize_w_params(
    cmd_CommandType_c* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

}

void cmd_CommandType_c_finalize_optional_members(
    cmd_CommandType_c* sample, RTIBool deletePointers)
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

RTIBool cmd_CommandType_c_copy(
    cmd_CommandType_c* dst,
    const cmd_CommandType_c* src)
{

    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);

}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'cmd_CommandType_c' sequence class.
*/
#define T cmd_CommandType_c
#define TSeq cmd_CommandType_cSeq
#define T_initialize_w_params cmd_CommandType_c_initialize_w_params
#define T_finalize_w_params   cmd_CommandType_c_finalize_w_params
#define T_copy       cmd_CommandType_c_copy

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
const char *cmd_ControlCommand_cTYPENAME = "cmd::ControlCommand";

DDS_TypeCode* cmd_ControlCommand_c_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member cmd_ControlCommand_c_g_tc_members[2]=
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
            (char *)"commandType",/* Member name */
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

    static DDS_TypeCode cmd_ControlCommand_c_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"cmd::ControlCommand", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            2, /* Number of members */
            cmd_ControlCommand_c_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for cmd_ControlCommand_c*/

    if (is_initialized) {
        return &cmd_ControlCommand_c_g_tc;
    }

    cmd_ControlCommand_c_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)MessageHeader_c_get_typecode();

    cmd_ControlCommand_c_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)cmd_CommandType_c_get_typecode();

    is_initialized = RTI_TRUE;

    return &cmd_ControlCommand_c_g_tc;
}

RTIBool cmd_ControlCommand_c_initialize(
    cmd_ControlCommand_c* sample) {
    return cmd_ControlCommand_c_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool cmd_ControlCommand_c_initialize_ex(
    cmd_ControlCommand_c* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return cmd_ControlCommand_c_initialize_w_params(
        sample,&allocParams);

}

RTIBool cmd_ControlCommand_c_initialize_w_params(
    cmd_ControlCommand_c* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!MessageHeader_c_initialize_w_params(&sample->header,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!cmd_CommandType_c_initialize_w_params(&sample->commandType,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void cmd_ControlCommand_c_finalize(
    cmd_ControlCommand_c* sample)
{

    cmd_ControlCommand_c_finalize_ex(sample,RTI_TRUE);
}

void cmd_ControlCommand_c_finalize_ex(
    cmd_ControlCommand_c* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    cmd_ControlCommand_c_finalize_w_params(
        sample,&deallocParams);
}

void cmd_ControlCommand_c_finalize_w_params(
    cmd_ControlCommand_c* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    MessageHeader_c_finalize_w_params(&sample->header,deallocParams);

    cmd_CommandType_c_finalize_w_params(&sample->commandType,deallocParams);

}

void cmd_ControlCommand_c_finalize_optional_members(
    cmd_ControlCommand_c* sample, RTIBool deletePointers)
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
    cmd_CommandType_c_finalize_optional_members(&sample->commandType, deallocParams->delete_pointers);
}

RTIBool cmd_ControlCommand_c_copy(
    cmd_ControlCommand_c* dst,
    const cmd_ControlCommand_c* src)
{

    if (!MessageHeader_c_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    } 
    if (!cmd_CommandType_c_copy(
        &dst->commandType, &src->commandType)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'cmd_ControlCommand_c' sequence class.
*/
#define T cmd_ControlCommand_c
#define TSeq cmd_ControlCommand_cSeq
#define T_initialize_w_params cmd_ControlCommand_c_initialize_w_params
#define T_finalize_w_params   cmd_ControlCommand_c_finalize_w_params
#define T_copy       cmd_ControlCommand_c_copy

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

