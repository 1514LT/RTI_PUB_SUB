

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TaskImpl.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef TaskImplPlugin_346634424_h
#define TaskImplPlugin_346634424_h

#include "TaskImpl.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "MessageHeaderImplPlugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
task_TaskType_cPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const task_TaskType_c *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
task_TaskType_cPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    task_TaskType_c *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
task_TaskType_cPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
task_TaskType_cPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);    

NDDSUSERDllExport extern unsigned int 
task_TaskType_cPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
task_TaskType_cPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
task_TaskType_cPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const task_TaskType_c * sample);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern unsigned int 
task_TaskType_cPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
task_TaskType_cPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
task_TaskType_cPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const task_TaskType_c *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
task_TaskType_cPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    task_TaskType_c * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
task_TaskType_cPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    task_TaskType_c *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

/* ----------------------------------------------------------------------------
Support functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern void
task_TaskType_cPluginSupport_print_data(
    const task_TaskType_c *sample, const char *desc, int indent_level);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
task_TaskPriority_cPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const task_TaskPriority_c *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
task_TaskPriority_cPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    task_TaskPriority_c *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
task_TaskPriority_cPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
task_TaskPriority_cPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);    

NDDSUSERDllExport extern unsigned int 
task_TaskPriority_cPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
task_TaskPriority_cPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
task_TaskPriority_cPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const task_TaskPriority_c * sample);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern unsigned int 
task_TaskPriority_cPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
task_TaskPriority_cPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
task_TaskPriority_cPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const task_TaskPriority_c *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
task_TaskPriority_cPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    task_TaskPriority_c * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
task_TaskPriority_cPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    task_TaskPriority_c *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

/* ----------------------------------------------------------------------------
Support functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern void
task_TaskPriority_cPluginSupport_print_data(
    const task_TaskPriority_c *sample, const char *desc, int indent_level);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
task_TaskStatus_cPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const task_TaskStatus_c *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
task_TaskStatus_cPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    task_TaskStatus_c *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
task_TaskStatus_cPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
task_TaskStatus_cPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);    

NDDSUSERDllExport extern unsigned int 
task_TaskStatus_cPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
task_TaskStatus_cPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
task_TaskStatus_cPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const task_TaskStatus_c * sample);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern unsigned int 
task_TaskStatus_cPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
task_TaskStatus_cPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
task_TaskStatus_cPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const task_TaskStatus_c *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
task_TaskStatus_cPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    task_TaskStatus_c * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
task_TaskStatus_cPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    task_TaskStatus_c *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

/* ----------------------------------------------------------------------------
Support functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern void
task_TaskStatus_cPluginSupport_print_data(
    const task_TaskStatus_c *sample, const char *desc, int indent_level);

#define task_TaskDefinition_cPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define task_TaskDefinition_cPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define task_TaskDefinition_cPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define task_TaskDefinition_cPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define task_TaskDefinition_cPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern task_TaskDefinition_c*
task_TaskDefinition_cPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern task_TaskDefinition_c*
task_TaskDefinition_cPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern task_TaskDefinition_c*
task_TaskDefinition_cPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
task_TaskDefinition_cPluginSupport_copy_data(
    task_TaskDefinition_c *out,
    const task_TaskDefinition_c *in);

NDDSUSERDllExport extern void 
task_TaskDefinition_cPluginSupport_destroy_data_w_params(
    task_TaskDefinition_c *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
task_TaskDefinition_cPluginSupport_destroy_data_ex(
    task_TaskDefinition_c *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
task_TaskDefinition_cPluginSupport_destroy_data(
    task_TaskDefinition_c *sample);

NDDSUSERDllExport extern void 
task_TaskDefinition_cPluginSupport_print_data(
    const task_TaskDefinition_c *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
task_TaskDefinition_cPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
task_TaskDefinition_cPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
task_TaskDefinition_cPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
task_TaskDefinition_cPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
task_TaskDefinition_cPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    task_TaskDefinition_c *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
task_TaskDefinition_cPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    task_TaskDefinition_c *out,
    const task_TaskDefinition_c *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
task_TaskDefinition_cPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const task_TaskDefinition_c *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
task_TaskDefinition_cPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    task_TaskDefinition_c *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
task_TaskDefinition_cPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const task_TaskDefinition_c *sample); 

NDDSUSERDllExport extern RTIBool 
task_TaskDefinition_cPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    task_TaskDefinition_c **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
task_TaskDefinition_cPlugin_deserialize_from_cdr_buffer(
    task_TaskDefinition_c *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern RTIBool
task_TaskDefinition_cPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
task_TaskDefinition_cPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);    

NDDSUSERDllExport extern unsigned int 
task_TaskDefinition_cPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
task_TaskDefinition_cPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
task_TaskDefinition_cPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const task_TaskDefinition_c * sample);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
task_TaskDefinition_cPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
task_TaskDefinition_cPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
task_TaskDefinition_cPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
task_TaskDefinition_cPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const task_TaskDefinition_c *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
task_TaskDefinition_cPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    task_TaskDefinition_c * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
task_TaskDefinition_cPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    task_TaskDefinition_c ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
task_TaskDefinition_cPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    task_TaskDefinition_c *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
task_TaskDefinition_cPlugin_new(void);

NDDSUSERDllExport extern void
task_TaskDefinition_cPlugin_delete(struct PRESTypePlugin *);

#define task_TaskResult_cPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define task_TaskResult_cPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define task_TaskResult_cPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define task_TaskResult_cPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define task_TaskResult_cPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern task_TaskResult_c*
task_TaskResult_cPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern task_TaskResult_c*
task_TaskResult_cPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern task_TaskResult_c*
task_TaskResult_cPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
task_TaskResult_cPluginSupport_copy_data(
    task_TaskResult_c *out,
    const task_TaskResult_c *in);

NDDSUSERDllExport extern void 
task_TaskResult_cPluginSupport_destroy_data_w_params(
    task_TaskResult_c *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
task_TaskResult_cPluginSupport_destroy_data_ex(
    task_TaskResult_c *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
task_TaskResult_cPluginSupport_destroy_data(
    task_TaskResult_c *sample);

NDDSUSERDllExport extern void 
task_TaskResult_cPluginSupport_print_data(
    const task_TaskResult_c *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
task_TaskResult_cPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
task_TaskResult_cPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
task_TaskResult_cPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
task_TaskResult_cPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
task_TaskResult_cPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    task_TaskResult_c *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
task_TaskResult_cPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    task_TaskResult_c *out,
    const task_TaskResult_c *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
task_TaskResult_cPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const task_TaskResult_c *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
task_TaskResult_cPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    task_TaskResult_c *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
task_TaskResult_cPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const task_TaskResult_c *sample); 

NDDSUSERDllExport extern RTIBool 
task_TaskResult_cPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    task_TaskResult_c **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
task_TaskResult_cPlugin_deserialize_from_cdr_buffer(
    task_TaskResult_c *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern RTIBool
task_TaskResult_cPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
task_TaskResult_cPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);    

NDDSUSERDllExport extern unsigned int 
task_TaskResult_cPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
task_TaskResult_cPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
task_TaskResult_cPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const task_TaskResult_c * sample);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
task_TaskResult_cPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
task_TaskResult_cPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
task_TaskResult_cPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
task_TaskResult_cPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const task_TaskResult_c *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
task_TaskResult_cPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    task_TaskResult_c * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
task_TaskResult_cPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    task_TaskResult_c ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
task_TaskResult_cPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    task_TaskResult_c *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
task_TaskResult_cPlugin_new(void);

NDDSUSERDllExport extern void
task_TaskResult_cPlugin_delete(struct PRESTypePlugin *);

#define task_TaskRequestMessage_cPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define task_TaskRequestMessage_cPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define task_TaskRequestMessage_cPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define task_TaskRequestMessage_cPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define task_TaskRequestMessage_cPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern task_TaskRequestMessage_c*
task_TaskRequestMessage_cPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern task_TaskRequestMessage_c*
task_TaskRequestMessage_cPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern task_TaskRequestMessage_c*
task_TaskRequestMessage_cPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
task_TaskRequestMessage_cPluginSupport_copy_data(
    task_TaskRequestMessage_c *out,
    const task_TaskRequestMessage_c *in);

NDDSUSERDllExport extern void 
task_TaskRequestMessage_cPluginSupport_destroy_data_w_params(
    task_TaskRequestMessage_c *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
task_TaskRequestMessage_cPluginSupport_destroy_data_ex(
    task_TaskRequestMessage_c *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
task_TaskRequestMessage_cPluginSupport_destroy_data(
    task_TaskRequestMessage_c *sample);

NDDSUSERDllExport extern void 
task_TaskRequestMessage_cPluginSupport_print_data(
    const task_TaskRequestMessage_c *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
task_TaskRequestMessage_cPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
task_TaskRequestMessage_cPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
task_TaskRequestMessage_cPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
task_TaskRequestMessage_cPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
task_TaskRequestMessage_cPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    task_TaskRequestMessage_c *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
task_TaskRequestMessage_cPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    task_TaskRequestMessage_c *out,
    const task_TaskRequestMessage_c *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
task_TaskRequestMessage_cPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const task_TaskRequestMessage_c *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
task_TaskRequestMessage_cPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    task_TaskRequestMessage_c *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
task_TaskRequestMessage_cPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const task_TaskRequestMessage_c *sample); 

NDDSUSERDllExport extern RTIBool 
task_TaskRequestMessage_cPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    task_TaskRequestMessage_c **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
task_TaskRequestMessage_cPlugin_deserialize_from_cdr_buffer(
    task_TaskRequestMessage_c *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern RTIBool
task_TaskRequestMessage_cPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
task_TaskRequestMessage_cPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);    

NDDSUSERDllExport extern unsigned int 
task_TaskRequestMessage_cPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
task_TaskRequestMessage_cPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
task_TaskRequestMessage_cPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const task_TaskRequestMessage_c * sample);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
task_TaskRequestMessage_cPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
task_TaskRequestMessage_cPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
task_TaskRequestMessage_cPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
task_TaskRequestMessage_cPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const task_TaskRequestMessage_c *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
task_TaskRequestMessage_cPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    task_TaskRequestMessage_c * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
task_TaskRequestMessage_cPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    task_TaskRequestMessage_c ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
task_TaskRequestMessage_cPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    task_TaskRequestMessage_c *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
task_TaskRequestMessage_cPlugin_new(void);

NDDSUSERDllExport extern void
task_TaskRequestMessage_cPlugin_delete(struct PRESTypePlugin *);

#define task_TaskResponseMessage_cPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define task_TaskResponseMessage_cPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define task_TaskResponseMessage_cPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define task_TaskResponseMessage_cPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define task_TaskResponseMessage_cPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern task_TaskResponseMessage_c*
task_TaskResponseMessage_cPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern task_TaskResponseMessage_c*
task_TaskResponseMessage_cPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern task_TaskResponseMessage_c*
task_TaskResponseMessage_cPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
task_TaskResponseMessage_cPluginSupport_copy_data(
    task_TaskResponseMessage_c *out,
    const task_TaskResponseMessage_c *in);

NDDSUSERDllExport extern void 
task_TaskResponseMessage_cPluginSupport_destroy_data_w_params(
    task_TaskResponseMessage_c *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
task_TaskResponseMessage_cPluginSupport_destroy_data_ex(
    task_TaskResponseMessage_c *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
task_TaskResponseMessage_cPluginSupport_destroy_data(
    task_TaskResponseMessage_c *sample);

NDDSUSERDllExport extern void 
task_TaskResponseMessage_cPluginSupport_print_data(
    const task_TaskResponseMessage_c *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
task_TaskResponseMessage_cPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
task_TaskResponseMessage_cPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
task_TaskResponseMessage_cPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
task_TaskResponseMessage_cPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
task_TaskResponseMessage_cPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    task_TaskResponseMessage_c *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
task_TaskResponseMessage_cPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    task_TaskResponseMessage_c *out,
    const task_TaskResponseMessage_c *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
task_TaskResponseMessage_cPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const task_TaskResponseMessage_c *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
task_TaskResponseMessage_cPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    task_TaskResponseMessage_c *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
task_TaskResponseMessage_cPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const task_TaskResponseMessage_c *sample); 

NDDSUSERDllExport extern RTIBool 
task_TaskResponseMessage_cPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    task_TaskResponseMessage_c **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
task_TaskResponseMessage_cPlugin_deserialize_from_cdr_buffer(
    task_TaskResponseMessage_c *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern RTIBool
task_TaskResponseMessage_cPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
task_TaskResponseMessage_cPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);    

NDDSUSERDllExport extern unsigned int 
task_TaskResponseMessage_cPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
task_TaskResponseMessage_cPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
task_TaskResponseMessage_cPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const task_TaskResponseMessage_c * sample);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
task_TaskResponseMessage_cPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
task_TaskResponseMessage_cPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
task_TaskResponseMessage_cPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
task_TaskResponseMessage_cPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const task_TaskResponseMessage_c *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
task_TaskResponseMessage_cPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    task_TaskResponseMessage_c * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
task_TaskResponseMessage_cPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    task_TaskResponseMessage_c ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
task_TaskResponseMessage_cPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    task_TaskResponseMessage_c *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
task_TaskResponseMessage_cPlugin_new(void);

NDDSUSERDllExport extern void
task_TaskResponseMessage_cPlugin_delete(struct PRESTypePlugin *);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* TaskImplPlugin_346634424_h */

