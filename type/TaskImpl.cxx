

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TaskImpl.idl using "rtiddsgen".
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

#include "TaskImpl.h"

/* ========================================================================= */
const char *task_TaskType_cTYPENAME = "task::TaskType";

DDS_TypeCode* task_TaskType_c_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member task_TaskType_c_g_tc_members[6]=
    {

        {
            (char *)"IMAGING",/* Member name */
            {
                0, /* Ignored */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            task_TaskType_c_IMAGING, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"COMMUNICATION",/* Member name */
            {
                0, /* Ignored */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            task_TaskType_c_COMMUNICATION, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"NAVIGATION",/* Member name */
            {
                0, /* Ignored */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            task_TaskType_c_NAVIGATION, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"SCIENCE",/* Member name */
            {
                0, /* Ignored */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            task_TaskType_c_SCIENCE, /* Enumerator ordinal */
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
            task_TaskType_c_MAINTENANCE, /* Enumerator ordinal */
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
            task_TaskType_c_EMERGENCY, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode task_TaskType_c_g_tc =
    {{
            DDS_TK_ENUM,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"task::TaskType", /* Name */
            NULL,     /* Base class type code is assigned later */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            6, /* Number of members */
            task_TaskType_c_g_tc_members, /* Members */
            DDS_VM_NONE   /* Type Modifier */        
        }}; /* Type code for task_TaskType_c*/

    if (is_initialized) {
        return &task_TaskType_c_g_tc;
    }

    is_initialized = RTI_TRUE;

    return &task_TaskType_c_g_tc;
}

RTIBool task_TaskType_c_initialize(
    task_TaskType_c* sample) {
    *sample = task_TaskType_c_IMAGING;
    return RTI_TRUE;
}

RTIBool task_TaskType_c_initialize_ex(
    task_TaskType_c* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return task_TaskType_c_initialize_w_params(
        sample,&allocParams);

}

RTIBool task_TaskType_c_initialize_w_params(
    task_TaskType_c* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */
    *sample = task_TaskType_c_IMAGING;
    return RTI_TRUE;
}

void task_TaskType_c_finalize(
    task_TaskType_c* sample)
{

    if (sample==NULL) {
        return;
    }
}

void task_TaskType_c_finalize_ex(
    task_TaskType_c* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    task_TaskType_c_finalize_w_params(
        sample,&deallocParams);
}

void task_TaskType_c_finalize_w_params(
    task_TaskType_c* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

}

void task_TaskType_c_finalize_optional_members(
    task_TaskType_c* sample, RTIBool deletePointers)
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

RTIBool task_TaskType_c_copy(
    task_TaskType_c* dst,
    const task_TaskType_c* src)
{

    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);

}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'task_TaskType_c' sequence class.
*/
#define T task_TaskType_c
#define TSeq task_TaskType_cSeq
#define T_initialize_w_params task_TaskType_c_initialize_w_params
#define T_finalize_w_params   task_TaskType_c_finalize_w_params
#define T_copy       task_TaskType_c_copy

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
const char *task_TaskPriority_cTYPENAME = "task::TaskPriority";

DDS_TypeCode* task_TaskPriority_c_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member task_TaskPriority_c_g_tc_members[4]=
    {

        {
            (char *)"CRITICAL",/* Member name */
            {
                0, /* Ignored */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            task_TaskPriority_c_CRITICAL, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"HIGH",/* Member name */
            {
                0, /* Ignored */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            task_TaskPriority_c_HIGH, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"MEDIUM",/* Member name */
            {
                0, /* Ignored */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            task_TaskPriority_c_MEDIUM, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"LOW",/* Member name */
            {
                0, /* Ignored */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            task_TaskPriority_c_LOW, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode task_TaskPriority_c_g_tc =
    {{
            DDS_TK_ENUM,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"task::TaskPriority", /* Name */
            NULL,     /* Base class type code is assigned later */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            4, /* Number of members */
            task_TaskPriority_c_g_tc_members, /* Members */
            DDS_VM_NONE   /* Type Modifier */        
        }}; /* Type code for task_TaskPriority_c*/

    if (is_initialized) {
        return &task_TaskPriority_c_g_tc;
    }

    is_initialized = RTI_TRUE;

    return &task_TaskPriority_c_g_tc;
}

RTIBool task_TaskPriority_c_initialize(
    task_TaskPriority_c* sample) {
    *sample = task_TaskPriority_c_CRITICAL;
    return RTI_TRUE;
}

RTIBool task_TaskPriority_c_initialize_ex(
    task_TaskPriority_c* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return task_TaskPriority_c_initialize_w_params(
        sample,&allocParams);

}

RTIBool task_TaskPriority_c_initialize_w_params(
    task_TaskPriority_c* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */
    *sample = task_TaskPriority_c_CRITICAL;
    return RTI_TRUE;
}

void task_TaskPriority_c_finalize(
    task_TaskPriority_c* sample)
{

    if (sample==NULL) {
        return;
    }
}

void task_TaskPriority_c_finalize_ex(
    task_TaskPriority_c* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    task_TaskPriority_c_finalize_w_params(
        sample,&deallocParams);
}

void task_TaskPriority_c_finalize_w_params(
    task_TaskPriority_c* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

}

void task_TaskPriority_c_finalize_optional_members(
    task_TaskPriority_c* sample, RTIBool deletePointers)
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

RTIBool task_TaskPriority_c_copy(
    task_TaskPriority_c* dst,
    const task_TaskPriority_c* src)
{

    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);

}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'task_TaskPriority_c' sequence class.
*/
#define T task_TaskPriority_c
#define TSeq task_TaskPriority_cSeq
#define T_initialize_w_params task_TaskPriority_c_initialize_w_params
#define T_finalize_w_params   task_TaskPriority_c_finalize_w_params
#define T_copy       task_TaskPriority_c_copy

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
const char *task_TaskStatus_cTYPENAME = "task::TaskStatus";

DDS_TypeCode* task_TaskStatus_c_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member task_TaskStatus_c_g_tc_members[6]=
    {

        {
            (char *)"PENDING",/* Member name */
            {
                0, /* Ignored */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            task_TaskStatus_c_PENDING, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"IN_PROGRESS",/* Member name */
            {
                0, /* Ignored */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            task_TaskStatus_c_IN_PROGRESS, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"COMPLETED",/* Member name */
            {
                0, /* Ignored */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            task_TaskStatus_c_COMPLETED, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"FAILED",/* Member name */
            {
                0, /* Ignored */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            task_TaskStatus_c_FAILED, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"CANCELLED",/* Member name */
            {
                0, /* Ignored */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            task_TaskStatus_c_CANCELLED, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"PAUSED",/* Member name */
            {
                0, /* Ignored */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            task_TaskStatus_c_PAUSED, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode task_TaskStatus_c_g_tc =
    {{
            DDS_TK_ENUM,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"task::TaskStatus", /* Name */
            NULL,     /* Base class type code is assigned later */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            6, /* Number of members */
            task_TaskStatus_c_g_tc_members, /* Members */
            DDS_VM_NONE   /* Type Modifier */        
        }}; /* Type code for task_TaskStatus_c*/

    if (is_initialized) {
        return &task_TaskStatus_c_g_tc;
    }

    is_initialized = RTI_TRUE;

    return &task_TaskStatus_c_g_tc;
}

RTIBool task_TaskStatus_c_initialize(
    task_TaskStatus_c* sample) {
    *sample = task_TaskStatus_c_PENDING;
    return RTI_TRUE;
}

RTIBool task_TaskStatus_c_initialize_ex(
    task_TaskStatus_c* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return task_TaskStatus_c_initialize_w_params(
        sample,&allocParams);

}

RTIBool task_TaskStatus_c_initialize_w_params(
    task_TaskStatus_c* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */
    *sample = task_TaskStatus_c_PENDING;
    return RTI_TRUE;
}

void task_TaskStatus_c_finalize(
    task_TaskStatus_c* sample)
{

    if (sample==NULL) {
        return;
    }
}

void task_TaskStatus_c_finalize_ex(
    task_TaskStatus_c* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    task_TaskStatus_c_finalize_w_params(
        sample,&deallocParams);
}

void task_TaskStatus_c_finalize_w_params(
    task_TaskStatus_c* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

}

void task_TaskStatus_c_finalize_optional_members(
    task_TaskStatus_c* sample, RTIBool deletePointers)
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

RTIBool task_TaskStatus_c_copy(
    task_TaskStatus_c* dst,
    const task_TaskStatus_c* src)
{

    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);

}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'task_TaskStatus_c' sequence class.
*/
#define T task_TaskStatus_c
#define TSeq task_TaskStatus_cSeq
#define T_initialize_w_params task_TaskStatus_c_initialize_w_params
#define T_finalize_w_params   task_TaskStatus_c_finalize_w_params
#define T_copy       task_TaskStatus_c_copy

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
const char *task_TaskDefinition_cTYPENAME = "task::TaskDefinition";

DDS_TypeCode* task_TaskDefinition_c_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode task_TaskDefinition_c_g_tc_taskId_string = DDS_INITIALIZE_STRING_TYPECODE((255));
    static DDS_TypeCode task_TaskDefinition_c_g_tc_taskName_string = DDS_INITIALIZE_STRING_TYPECODE((255));
    static DDS_TypeCode task_TaskDefinition_c_g_tc_targetSatellite_string = DDS_INITIALIZE_STRING_TYPECODE((255));
    static DDS_TypeCode task_TaskDefinition_c_g_tc_parameters_string = DDS_INITIALIZE_STRING_TYPECODE((255));
    static DDS_TypeCode_Member task_TaskDefinition_c_g_tc_members[9]=
    {

        {
            (char *)"taskId",/* Member name */
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
            (char *)"taskName",/* Member name */
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
            (char *)"taskType",/* Member name */
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
            (char *)"priority",/* Member name */
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
            (char *)"startTime",/* Member name */
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
            (char *)"endTime",/* Member name */
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
            (char *)"targetSatellite",/* Member name */
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
            (char *)"parameters",/* Member name */
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

    static DDS_TypeCode task_TaskDefinition_c_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"task::TaskDefinition", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            9, /* Number of members */
            task_TaskDefinition_c_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for task_TaskDefinition_c*/

    if (is_initialized) {
        return &task_TaskDefinition_c_g_tc;
    }

    task_TaskDefinition_c_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&task_TaskDefinition_c_g_tc_taskId_string;

    task_TaskDefinition_c_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&task_TaskDefinition_c_g_tc_taskName_string;

    task_TaskDefinition_c_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)task_TaskType_c_get_typecode();

    task_TaskDefinition_c_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)task_TaskPriority_c_get_typecode();

    task_TaskDefinition_c_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    task_TaskDefinition_c_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    task_TaskDefinition_c_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&task_TaskDefinition_c_g_tc_targetSatellite_string;

    task_TaskDefinition_c_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&task_TaskDefinition_c_g_tc_parameters_string;

    task_TaskDefinition_c_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)task_TaskStatus_c_get_typecode();

    is_initialized = RTI_TRUE;

    return &task_TaskDefinition_c_g_tc;
}

RTIBool task_TaskDefinition_c_initialize(
    task_TaskDefinition_c* sample) {
    return task_TaskDefinition_c_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool task_TaskDefinition_c_initialize_ex(
    task_TaskDefinition_c* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return task_TaskDefinition_c_initialize_w_params(
        sample,&allocParams);

}

RTIBool task_TaskDefinition_c_initialize_w_params(
    task_TaskDefinition_c* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (allocParams->allocate_memory){
        sample->taskId= DDS_String_alloc ((255));
        if (sample->taskId == NULL) {
            return RTI_FALSE;
        }

    } else {
        if (sample->taskId!= NULL) { 
            sample->taskId[0] = '\0';
        }
    }

    if (allocParams->allocate_memory){
        sample->taskName= DDS_String_alloc ((255));
        if (sample->taskName == NULL) {
            return RTI_FALSE;
        }

    } else {
        if (sample->taskName!= NULL) { 
            sample->taskName[0] = '\0';
        }
    }

    if (!task_TaskType_c_initialize_w_params(&sample->taskType,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!task_TaskPriority_c_initialize_w_params(&sample->priority,
    allocParams)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initLong(&sample->startTime)) {
        return RTI_FALSE;
    }     

    if (!RTICdrType_initLong(&sample->endTime)) {
        return RTI_FALSE;
    }     

    if (allocParams->allocate_memory){
        sample->targetSatellite= DDS_String_alloc ((255));
        if (sample->targetSatellite == NULL) {
            return RTI_FALSE;
        }

    } else {
        if (sample->targetSatellite!= NULL) { 
            sample->targetSatellite[0] = '\0';
        }
    }

    if (allocParams->allocate_memory){
        sample->parameters= DDS_String_alloc ((255));
        if (sample->parameters == NULL) {
            return RTI_FALSE;
        }

    } else {
        if (sample->parameters!= NULL) { 
            sample->parameters[0] = '\0';
        }
    }

    if (!task_TaskStatus_c_initialize_w_params(&sample->status,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void task_TaskDefinition_c_finalize(
    task_TaskDefinition_c* sample)
{

    task_TaskDefinition_c_finalize_ex(sample,RTI_TRUE);
}

void task_TaskDefinition_c_finalize_ex(
    task_TaskDefinition_c* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    task_TaskDefinition_c_finalize_w_params(
        sample,&deallocParams);
}

void task_TaskDefinition_c_finalize_w_params(
    task_TaskDefinition_c* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    if (sample->taskId != NULL) {
        DDS_String_free(sample->taskId);
        sample->taskId=NULL;

    }
    if (sample->taskName != NULL) {
        DDS_String_free(sample->taskName);
        sample->taskName=NULL;

    }
    task_TaskType_c_finalize_w_params(&sample->taskType,deallocParams);

    task_TaskPriority_c_finalize_w_params(&sample->priority,deallocParams);

    if (sample->targetSatellite != NULL) {
        DDS_String_free(sample->targetSatellite);
        sample->targetSatellite=NULL;

    }
    if (sample->parameters != NULL) {
        DDS_String_free(sample->parameters);
        sample->parameters=NULL;

    }
    task_TaskStatus_c_finalize_w_params(&sample->status,deallocParams);

}

void task_TaskDefinition_c_finalize_optional_members(
    task_TaskDefinition_c* sample, RTIBool deletePointers)
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

    task_TaskType_c_finalize_optional_members(&sample->taskType, deallocParams->delete_pointers);
    task_TaskPriority_c_finalize_optional_members(&sample->priority, deallocParams->delete_pointers);
    task_TaskStatus_c_finalize_optional_members(&sample->status, deallocParams->delete_pointers);
}

RTIBool task_TaskDefinition_c_copy(
    task_TaskDefinition_c* dst,
    const task_TaskDefinition_c* src)
{

    if (!RTICdrType_copyStringEx (
        &dst->taskId, src->taskId, 
        (255) + 1,RTI_TRUE)){
        return RTI_FALSE;
    }
    if (!RTICdrType_copyStringEx (
        &dst->taskName, src->taskName, 
        (255) + 1,RTI_TRUE)){
        return RTI_FALSE;
    }
    if (!task_TaskType_c_copy(
        &dst->taskType, &src->taskType)) {
        return RTI_FALSE;
    } 
    if (!task_TaskPriority_c_copy(
        &dst->priority, &src->priority)) {
        return RTI_FALSE;
    } 
    if (!RTICdrType_copyLong (
        &dst->startTime, &src->startTime)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyLong (
        &dst->endTime, &src->endTime)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyStringEx (
        &dst->targetSatellite, src->targetSatellite, 
        (255) + 1,RTI_TRUE)){
        return RTI_FALSE;
    }
    if (!RTICdrType_copyStringEx (
        &dst->parameters, src->parameters, 
        (255) + 1,RTI_TRUE)){
        return RTI_FALSE;
    }
    if (!task_TaskStatus_c_copy(
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
* Configure and implement 'task_TaskDefinition_c' sequence class.
*/
#define T task_TaskDefinition_c
#define TSeq task_TaskDefinition_cSeq
#define T_initialize_w_params task_TaskDefinition_c_initialize_w_params
#define T_finalize_w_params   task_TaskDefinition_c_finalize_w_params
#define T_copy       task_TaskDefinition_c_copy

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
const char *task_TaskResult_cTYPENAME = "task::TaskResult";

DDS_TypeCode* task_TaskResult_c_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode task_TaskResult_c_g_tc_taskId_string = DDS_INITIALIZE_STRING_TYPECODE((255));
    static DDS_TypeCode task_TaskResult_c_g_tc_resultData_string = DDS_INITIALIZE_STRING_TYPECODE((255));
    static DDS_TypeCode task_TaskResult_c_g_tc_errorMessage_string = DDS_INITIALIZE_STRING_TYPECODE((255));
    static DDS_TypeCode_Member task_TaskResult_c_g_tc_members[5]=
    {

        {
            (char *)"taskId",/* Member name */
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
            (char *)"status",/* Member name */
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
            (char *)"resultData",/* Member name */
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
            (char *)"errorMessage",/* Member name */
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
            (char *)"completionTime",/* Member name */
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
        }
    };

    static DDS_TypeCode task_TaskResult_c_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"task::TaskResult", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            5, /* Number of members */
            task_TaskResult_c_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for task_TaskResult_c*/

    if (is_initialized) {
        return &task_TaskResult_c_g_tc;
    }

    task_TaskResult_c_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&task_TaskResult_c_g_tc_taskId_string;

    task_TaskResult_c_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)task_TaskStatus_c_get_typecode();

    task_TaskResult_c_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&task_TaskResult_c_g_tc_resultData_string;

    task_TaskResult_c_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&task_TaskResult_c_g_tc_errorMessage_string;

    task_TaskResult_c_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;

    is_initialized = RTI_TRUE;

    return &task_TaskResult_c_g_tc;
}

RTIBool task_TaskResult_c_initialize(
    task_TaskResult_c* sample) {
    return task_TaskResult_c_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool task_TaskResult_c_initialize_ex(
    task_TaskResult_c* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return task_TaskResult_c_initialize_w_params(
        sample,&allocParams);

}

RTIBool task_TaskResult_c_initialize_w_params(
    task_TaskResult_c* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (allocParams->allocate_memory){
        sample->taskId= DDS_String_alloc ((255));
        if (sample->taskId == NULL) {
            return RTI_FALSE;
        }

    } else {
        if (sample->taskId!= NULL) { 
            sample->taskId[0] = '\0';
        }
    }

    if (!task_TaskStatus_c_initialize_w_params(&sample->status,
    allocParams)) {
        return RTI_FALSE;
    }

    if (allocParams->allocate_memory){
        sample->resultData= DDS_String_alloc ((255));
        if (sample->resultData == NULL) {
            return RTI_FALSE;
        }

    } else {
        if (sample->resultData!= NULL) { 
            sample->resultData[0] = '\0';
        }
    }

    if (allocParams->allocate_memory){
        sample->errorMessage= DDS_String_alloc ((255));
        if (sample->errorMessage == NULL) {
            return RTI_FALSE;
        }

    } else {
        if (sample->errorMessage!= NULL) { 
            sample->errorMessage[0] = '\0';
        }
    }

    if (!RTICdrType_initLongLong(&sample->completionTime)) {
        return RTI_FALSE;
    }     

    return RTI_TRUE;
}

void task_TaskResult_c_finalize(
    task_TaskResult_c* sample)
{

    task_TaskResult_c_finalize_ex(sample,RTI_TRUE);
}

void task_TaskResult_c_finalize_ex(
    task_TaskResult_c* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    task_TaskResult_c_finalize_w_params(
        sample,&deallocParams);
}

void task_TaskResult_c_finalize_w_params(
    task_TaskResult_c* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    if (sample->taskId != NULL) {
        DDS_String_free(sample->taskId);
        sample->taskId=NULL;

    }
    task_TaskStatus_c_finalize_w_params(&sample->status,deallocParams);

    if (sample->resultData != NULL) {
        DDS_String_free(sample->resultData);
        sample->resultData=NULL;

    }
    if (sample->errorMessage != NULL) {
        DDS_String_free(sample->errorMessage);
        sample->errorMessage=NULL;

    }

}

void task_TaskResult_c_finalize_optional_members(
    task_TaskResult_c* sample, RTIBool deletePointers)
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

    task_TaskStatus_c_finalize_optional_members(&sample->status, deallocParams->delete_pointers);
}

RTIBool task_TaskResult_c_copy(
    task_TaskResult_c* dst,
    const task_TaskResult_c* src)
{

    if (!RTICdrType_copyStringEx (
        &dst->taskId, src->taskId, 
        (255) + 1,RTI_TRUE)){
        return RTI_FALSE;
    }
    if (!task_TaskStatus_c_copy(
        &dst->status, &src->status)) {
        return RTI_FALSE;
    } 
    if (!RTICdrType_copyStringEx (
        &dst->resultData, src->resultData, 
        (255) + 1,RTI_TRUE)){
        return RTI_FALSE;
    }
    if (!RTICdrType_copyStringEx (
        &dst->errorMessage, src->errorMessage, 
        (255) + 1,RTI_TRUE)){
        return RTI_FALSE;
    }
    if (!RTICdrType_copyLongLong (
        &dst->completionTime, &src->completionTime)) { 
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'task_TaskResult_c' sequence class.
*/
#define T task_TaskResult_c
#define TSeq task_TaskResult_cSeq
#define T_initialize_w_params task_TaskResult_c_initialize_w_params
#define T_finalize_w_params   task_TaskResult_c_finalize_w_params
#define T_copy       task_TaskResult_c_copy

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
const char *task_TaskRequestMessage_cTYPENAME = "task::TaskRequestMessage";

DDS_TypeCode* task_TaskRequestMessage_c_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member task_TaskRequestMessage_c_g_tc_members[2]=
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
            (char *)"task",/* Member name */
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

    static DDS_TypeCode task_TaskRequestMessage_c_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"task::TaskRequestMessage", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            2, /* Number of members */
            task_TaskRequestMessage_c_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for task_TaskRequestMessage_c*/

    if (is_initialized) {
        return &task_TaskRequestMessage_c_g_tc;
    }

    task_TaskRequestMessage_c_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)MessageHeader_c_get_typecode();

    task_TaskRequestMessage_c_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)task_TaskDefinition_c_get_typecode();

    is_initialized = RTI_TRUE;

    return &task_TaskRequestMessage_c_g_tc;
}

RTIBool task_TaskRequestMessage_c_initialize(
    task_TaskRequestMessage_c* sample) {
    return task_TaskRequestMessage_c_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool task_TaskRequestMessage_c_initialize_ex(
    task_TaskRequestMessage_c* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return task_TaskRequestMessage_c_initialize_w_params(
        sample,&allocParams);

}

RTIBool task_TaskRequestMessage_c_initialize_w_params(
    task_TaskRequestMessage_c* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!MessageHeader_c_initialize_w_params(&sample->header,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!task_TaskDefinition_c_initialize_w_params(&sample->task,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void task_TaskRequestMessage_c_finalize(
    task_TaskRequestMessage_c* sample)
{

    task_TaskRequestMessage_c_finalize_ex(sample,RTI_TRUE);
}

void task_TaskRequestMessage_c_finalize_ex(
    task_TaskRequestMessage_c* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    task_TaskRequestMessage_c_finalize_w_params(
        sample,&deallocParams);
}

void task_TaskRequestMessage_c_finalize_w_params(
    task_TaskRequestMessage_c* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    MessageHeader_c_finalize_w_params(&sample->header,deallocParams);

    task_TaskDefinition_c_finalize_w_params(&sample->task,deallocParams);

}

void task_TaskRequestMessage_c_finalize_optional_members(
    task_TaskRequestMessage_c* sample, RTIBool deletePointers)
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
    task_TaskDefinition_c_finalize_optional_members(&sample->task, deallocParams->delete_pointers);
}

RTIBool task_TaskRequestMessage_c_copy(
    task_TaskRequestMessage_c* dst,
    const task_TaskRequestMessage_c* src)
{

    if (!MessageHeader_c_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    } 
    if (!task_TaskDefinition_c_copy(
        &dst->task, &src->task)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'task_TaskRequestMessage_c' sequence class.
*/
#define T task_TaskRequestMessage_c
#define TSeq task_TaskRequestMessage_cSeq
#define T_initialize_w_params task_TaskRequestMessage_c_initialize_w_params
#define T_finalize_w_params   task_TaskRequestMessage_c_finalize_w_params
#define T_copy       task_TaskRequestMessage_c_copy

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
const char *task_TaskResponseMessage_cTYPENAME = "task::TaskResponseMessage";

DDS_TypeCode* task_TaskResponseMessage_c_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member task_TaskResponseMessage_c_g_tc_members[2]=
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
            (char *)"result",/* Member name */
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

    static DDS_TypeCode task_TaskResponseMessage_c_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"task::TaskResponseMessage", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            2, /* Number of members */
            task_TaskResponseMessage_c_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for task_TaskResponseMessage_c*/

    if (is_initialized) {
        return &task_TaskResponseMessage_c_g_tc;
    }

    task_TaskResponseMessage_c_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)MessageHeader_c_get_typecode();

    task_TaskResponseMessage_c_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)task_TaskResult_c_get_typecode();

    is_initialized = RTI_TRUE;

    return &task_TaskResponseMessage_c_g_tc;
}

RTIBool task_TaskResponseMessage_c_initialize(
    task_TaskResponseMessage_c* sample) {
    return task_TaskResponseMessage_c_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool task_TaskResponseMessage_c_initialize_ex(
    task_TaskResponseMessage_c* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return task_TaskResponseMessage_c_initialize_w_params(
        sample,&allocParams);

}

RTIBool task_TaskResponseMessage_c_initialize_w_params(
    task_TaskResponseMessage_c* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!MessageHeader_c_initialize_w_params(&sample->header,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!task_TaskResult_c_initialize_w_params(&sample->result,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void task_TaskResponseMessage_c_finalize(
    task_TaskResponseMessage_c* sample)
{

    task_TaskResponseMessage_c_finalize_ex(sample,RTI_TRUE);
}

void task_TaskResponseMessage_c_finalize_ex(
    task_TaskResponseMessage_c* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    task_TaskResponseMessage_c_finalize_w_params(
        sample,&deallocParams);
}

void task_TaskResponseMessage_c_finalize_w_params(
    task_TaskResponseMessage_c* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    MessageHeader_c_finalize_w_params(&sample->header,deallocParams);

    task_TaskResult_c_finalize_w_params(&sample->result,deallocParams);

}

void task_TaskResponseMessage_c_finalize_optional_members(
    task_TaskResponseMessage_c* sample, RTIBool deletePointers)
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
    task_TaskResult_c_finalize_optional_members(&sample->result, deallocParams->delete_pointers);
}

RTIBool task_TaskResponseMessage_c_copy(
    task_TaskResponseMessage_c* dst,
    const task_TaskResponseMessage_c* src)
{

    if (!MessageHeader_c_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    } 
    if (!task_TaskResult_c_copy(
        &dst->result, &src->result)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'task_TaskResponseMessage_c' sequence class.
*/
#define T task_TaskResponseMessage_c
#define TSeq task_TaskResponseMessage_cSeq
#define T_initialize_w_params task_TaskResponseMessage_c_initialize_w_params
#define T_finalize_w_params   task_TaskResponseMessage_c_finalize_w_params
#define T_copy       task_TaskResponseMessage_c_copy

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

