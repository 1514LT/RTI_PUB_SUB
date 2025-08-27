

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommandImpl.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef CommandImplPlugin_205482868_h
#define CommandImplPlugin_205482868_h

#include "CommandImpl.h"

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
cmd_CommandType_cPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const cmd_CommandType_c *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
cmd_CommandType_cPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    cmd_CommandType_c *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
cmd_CommandType_cPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
cmd_CommandType_cPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);    

NDDSUSERDllExport extern unsigned int 
cmd_CommandType_cPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
cmd_CommandType_cPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
cmd_CommandType_cPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const cmd_CommandType_c * sample);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern unsigned int 
cmd_CommandType_cPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
cmd_CommandType_cPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
cmd_CommandType_cPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const cmd_CommandType_c *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
cmd_CommandType_cPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    cmd_CommandType_c * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
cmd_CommandType_cPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    cmd_CommandType_c *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

/* ----------------------------------------------------------------------------
Support functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern void
cmd_CommandType_cPluginSupport_print_data(
    const cmd_CommandType_c *sample, const char *desc, int indent_level);

#define cmd_ControlCommand_cPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define cmd_ControlCommand_cPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define cmd_ControlCommand_cPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define cmd_ControlCommand_cPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define cmd_ControlCommand_cPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern cmd_ControlCommand_c*
cmd_ControlCommand_cPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern cmd_ControlCommand_c*
cmd_ControlCommand_cPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern cmd_ControlCommand_c*
cmd_ControlCommand_cPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
cmd_ControlCommand_cPluginSupport_copy_data(
    cmd_ControlCommand_c *out,
    const cmd_ControlCommand_c *in);

NDDSUSERDllExport extern void 
cmd_ControlCommand_cPluginSupport_destroy_data_w_params(
    cmd_ControlCommand_c *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
cmd_ControlCommand_cPluginSupport_destroy_data_ex(
    cmd_ControlCommand_c *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
cmd_ControlCommand_cPluginSupport_destroy_data(
    cmd_ControlCommand_c *sample);

NDDSUSERDllExport extern void 
cmd_ControlCommand_cPluginSupport_print_data(
    const cmd_ControlCommand_c *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
cmd_ControlCommand_cPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
cmd_ControlCommand_cPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
cmd_ControlCommand_cPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
cmd_ControlCommand_cPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
cmd_ControlCommand_cPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    cmd_ControlCommand_c *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
cmd_ControlCommand_cPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    cmd_ControlCommand_c *out,
    const cmd_ControlCommand_c *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
cmd_ControlCommand_cPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const cmd_ControlCommand_c *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
cmd_ControlCommand_cPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    cmd_ControlCommand_c *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
cmd_ControlCommand_cPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const cmd_ControlCommand_c *sample); 

NDDSUSERDllExport extern RTIBool 
cmd_ControlCommand_cPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    cmd_ControlCommand_c **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
cmd_ControlCommand_cPlugin_deserialize_from_cdr_buffer(
    cmd_ControlCommand_c *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern RTIBool
cmd_ControlCommand_cPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
cmd_ControlCommand_cPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);    

NDDSUSERDllExport extern unsigned int 
cmd_ControlCommand_cPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
cmd_ControlCommand_cPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
cmd_ControlCommand_cPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const cmd_ControlCommand_c * sample);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
cmd_ControlCommand_cPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
cmd_ControlCommand_cPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
cmd_ControlCommand_cPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
cmd_ControlCommand_cPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const cmd_ControlCommand_c *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
cmd_ControlCommand_cPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    cmd_ControlCommand_c * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
cmd_ControlCommand_cPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    cmd_ControlCommand_c ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
cmd_ControlCommand_cPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    cmd_ControlCommand_c *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
cmd_ControlCommand_cPlugin_new(void);

NDDSUSERDllExport extern void
cmd_ControlCommand_cPlugin_delete(struct PRESTypePlugin *);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* CommandImplPlugin_205482868_h */

