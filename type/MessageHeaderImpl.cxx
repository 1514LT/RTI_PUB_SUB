

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MessageHeaderImpl.idl using "rtiddsgen".
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

#include "MessageHeaderImpl.h"

/* ========================================================================= */
const char *MessageType_cTYPENAME = "MessageType";

DDS_TypeCode* MessageType_c_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member MessageType_c_g_tc_members[4]=
    {

        {
            (char *)"HEARTBEAT",/* Member name */
            {
                0, /* Ignored */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            MessageType_c_HEARTBEAT, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"TASK_REQUEST",/* Member name */
            {
                0, /* Ignored */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            MessageType_c_TASK_REQUEST, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"TASK_RESPONSE",/* Member name */
            {
                0, /* Ignored */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            MessageType_c_TASK_RESPONSE, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"COMMAND",/* Member name */
            {
                0, /* Ignored */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            MessageType_c_COMMAND, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode MessageType_c_g_tc =
    {{
            DDS_TK_ENUM,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"MessageType", /* Name */
            NULL,     /* Base class type code is assigned later */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            4, /* Number of members */
            MessageType_c_g_tc_members, /* Members */
            DDS_VM_NONE   /* Type Modifier */        
        }}; /* Type code for MessageType_c*/

    if (is_initialized) {
        return &MessageType_c_g_tc;
    }

    is_initialized = RTI_TRUE;

    return &MessageType_c_g_tc;
}

RTIBool MessageType_c_initialize(
    MessageType_c* sample) {
    *sample = MessageType_c_HEARTBEAT;
    return RTI_TRUE;
}

RTIBool MessageType_c_initialize_ex(
    MessageType_c* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return MessageType_c_initialize_w_params(
        sample,&allocParams);

}

RTIBool MessageType_c_initialize_w_params(
    MessageType_c* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */
    *sample = MessageType_c_HEARTBEAT;
    return RTI_TRUE;
}

void MessageType_c_finalize(
    MessageType_c* sample)
{

    if (sample==NULL) {
        return;
    }
}

void MessageType_c_finalize_ex(
    MessageType_c* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    MessageType_c_finalize_w_params(
        sample,&deallocParams);
}

void MessageType_c_finalize_w_params(
    MessageType_c* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

}

void MessageType_c_finalize_optional_members(
    MessageType_c* sample, RTIBool deletePointers)
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

RTIBool MessageType_c_copy(
    MessageType_c* dst,
    const MessageType_c* src)
{

    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);

}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'MessageType_c' sequence class.
*/
#define T MessageType_c
#define TSeq MessageType_cSeq
#define T_initialize_w_params MessageType_c_initialize_w_params
#define T_finalize_w_params   MessageType_c_finalize_w_params
#define T_copy       MessageType_c_copy

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
const char *Particpaint_cTYPENAME = "Particpaint";

DDS_TypeCode* Particpaint_c_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member Particpaint_c_g_tc_members[4]=
    {

        {
            (char *)"NodeA",/* Member name */
            {
                0, /* Ignored */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            Particpaint_c_NodeA, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"NodeB",/* Member name */
            {
                0, /* Ignored */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            Particpaint_c_NodeB, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"NodeC",/* Member name */
            {
                0, /* Ignored */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            Particpaint_c_NodeC, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"Guide",/* Member name */
            {
                0, /* Ignored */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            Particpaint_c_Guide, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode Particpaint_c_g_tc =
    {{
            DDS_TK_ENUM,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"Particpaint", /* Name */
            NULL,     /* Base class type code is assigned later */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            4, /* Number of members */
            Particpaint_c_g_tc_members, /* Members */
            DDS_VM_NONE   /* Type Modifier */        
        }}; /* Type code for Particpaint_c*/

    if (is_initialized) {
        return &Particpaint_c_g_tc;
    }

    is_initialized = RTI_TRUE;

    return &Particpaint_c_g_tc;
}

RTIBool Particpaint_c_initialize(
    Particpaint_c* sample) {
    *sample = Particpaint_c_NodeA;
    return RTI_TRUE;
}

RTIBool Particpaint_c_initialize_ex(
    Particpaint_c* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return Particpaint_c_initialize_w_params(
        sample,&allocParams);

}

RTIBool Particpaint_c_initialize_w_params(
    Particpaint_c* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */
    *sample = Particpaint_c_NodeA;
    return RTI_TRUE;
}

void Particpaint_c_finalize(
    Particpaint_c* sample)
{

    if (sample==NULL) {
        return;
    }
}

void Particpaint_c_finalize_ex(
    Particpaint_c* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    Particpaint_c_finalize_w_params(
        sample,&deallocParams);
}

void Particpaint_c_finalize_w_params(
    Particpaint_c* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

}

void Particpaint_c_finalize_optional_members(
    Particpaint_c* sample, RTIBool deletePointers)
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

RTIBool Particpaint_c_copy(
    Particpaint_c* dst,
    const Particpaint_c* src)
{

    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);

}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'Particpaint_c' sequence class.
*/
#define T Particpaint_c
#define TSeq Particpaint_cSeq
#define T_initialize_w_params Particpaint_c_initialize_w_params
#define T_finalize_w_params   Particpaint_c_finalize_w_params
#define T_copy       Particpaint_c_copy

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
const char *MessageHeader_cTYPENAME = "MessageHeader";

DDS_TypeCode* MessageHeader_c_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member MessageHeader_c_g_tc_members[8]=
    {

        {
            (char *)"messageId",/* Member name */
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
            (char *)"sender",/* Member name */
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
            (char *)"receiver",/* Member name */
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
            (char *)"messageType",/* Member name */
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
            (char *)"timestamp",/* Member name */
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
            (char *)"sequenceNumber",/* Member name */
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
            (char *)"priority",/* Member name */
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
            (char *)"requiresAck",/* Member name */
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
        }
    };

    static DDS_TypeCode MessageHeader_c_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"MessageHeader", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            8, /* Number of members */
            MessageHeader_c_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for MessageHeader_c*/

    if (is_initialized) {
        return &MessageHeader_c_g_tc;
    }

    MessageHeader_c_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    MessageHeader_c_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)Particpaint_c_get_typecode();

    MessageHeader_c_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)Particpaint_c_get_typecode();

    MessageHeader_c_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)MessageType_c_get_typecode();

    MessageHeader_c_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;

    MessageHeader_c_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    MessageHeader_c_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    MessageHeader_c_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

    is_initialized = RTI_TRUE;

    return &MessageHeader_c_g_tc;
}

RTIBool MessageHeader_c_initialize(
    MessageHeader_c* sample) {
    return MessageHeader_c_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool MessageHeader_c_initialize_ex(
    MessageHeader_c* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return MessageHeader_c_initialize_w_params(
        sample,&allocParams);

}

RTIBool MessageHeader_c_initialize_w_params(
    MessageHeader_c* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!RTICdrType_initLong(&sample->messageId)) {
        return RTI_FALSE;
    }     

    if (!Particpaint_c_initialize_w_params(&sample->sender,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!Particpaint_c_initialize_w_params(&sample->receiver,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!MessageType_c_initialize_w_params(&sample->messageType,
    allocParams)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initLongLong(&sample->timestamp)) {
        return RTI_FALSE;
    }     

    if (!RTICdrType_initLong(&sample->sequenceNumber)) {
        return RTI_FALSE;
    }     

    if (!RTICdrType_initLong(&sample->priority)) {
        return RTI_FALSE;
    }     

    if (!RTICdrType_initBoolean(&sample->requiresAck)) {
        return RTI_FALSE;
    }     

    return RTI_TRUE;
}

void MessageHeader_c_finalize(
    MessageHeader_c* sample)
{

    MessageHeader_c_finalize_ex(sample,RTI_TRUE);
}

void MessageHeader_c_finalize_ex(
    MessageHeader_c* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    MessageHeader_c_finalize_w_params(
        sample,&deallocParams);
}

void MessageHeader_c_finalize_w_params(
    MessageHeader_c* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    Particpaint_c_finalize_w_params(&sample->sender,deallocParams);

    Particpaint_c_finalize_w_params(&sample->receiver,deallocParams);

    MessageType_c_finalize_w_params(&sample->messageType,deallocParams);

}

void MessageHeader_c_finalize_optional_members(
    MessageHeader_c* sample, RTIBool deletePointers)
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

    Particpaint_c_finalize_optional_members(&sample->sender, deallocParams->delete_pointers);
    Particpaint_c_finalize_optional_members(&sample->receiver, deallocParams->delete_pointers);
    MessageType_c_finalize_optional_members(&sample->messageType, deallocParams->delete_pointers);
}

RTIBool MessageHeader_c_copy(
    MessageHeader_c* dst,
    const MessageHeader_c* src)
{

    if (!RTICdrType_copyLong (
        &dst->messageId, &src->messageId)) { 
        return RTI_FALSE;
    }
    if (!Particpaint_c_copy(
        &dst->sender, &src->sender)) {
        return RTI_FALSE;
    } 
    if (!Particpaint_c_copy(
        &dst->receiver, &src->receiver)) {
        return RTI_FALSE;
    } 
    if (!MessageType_c_copy(
        &dst->messageType, &src->messageType)) {
        return RTI_FALSE;
    } 
    if (!RTICdrType_copyLongLong (
        &dst->timestamp, &src->timestamp)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyLong (
        &dst->sequenceNumber, &src->sequenceNumber)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyLong (
        &dst->priority, &src->priority)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyBoolean (
        &dst->requiresAck, &src->requiresAck)) { 
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'MessageHeader_c' sequence class.
*/
#define T MessageHeader_c
#define TSeq MessageHeader_cSeq
#define T_initialize_w_params MessageHeader_c_initialize_w_params
#define T_finalize_w_params   MessageHeader_c_finalize_w_params
#define T_copy       MessageHeader_c_copy

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

