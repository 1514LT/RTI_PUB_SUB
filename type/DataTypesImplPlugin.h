

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DataTypesImpl.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef DataTypesImplPlugin_470592838_h
#define DataTypesImplPlugin_470592838_h

#include "DataTypesImpl.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#define Target_cPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define Target_cPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define Target_cPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define Target_cPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define Target_cPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Target_c*
Target_cPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern Target_c*
Target_cPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Target_c*
Target_cPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
Target_cPluginSupport_copy_data(
    Target_c *out,
    const Target_c *in);

NDDSUSERDllExport extern void 
Target_cPluginSupport_destroy_data_w_params(
    Target_c *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
Target_cPluginSupport_destroy_data_ex(
    Target_c *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
Target_cPluginSupport_destroy_data(
    Target_c *sample);

NDDSUSERDllExport extern void 
Target_cPluginSupport_print_data(
    const Target_c *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
Target_cPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
Target_cPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
Target_cPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
Target_cPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
Target_cPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    Target_c *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
Target_cPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Target_c *out,
    const Target_c *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
Target_cPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Target_c *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Target_cPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Target_c *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
Target_cPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const Target_c *sample); 

NDDSUSERDllExport extern RTIBool 
Target_cPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    Target_c **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
Target_cPlugin_deserialize_from_cdr_buffer(
    Target_c *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern RTIBool
Target_cPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
Target_cPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);    

NDDSUSERDllExport extern unsigned int 
Target_cPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
Target_cPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
Target_cPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Target_c * sample);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
Target_cPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
Target_cPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
Target_cPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
Target_cPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Target_c *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Target_cPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Target_c * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Target_cPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    Target_c ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
Target_cPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Target_c *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
Target_cPlugin_new(void);

NDDSUSERDllExport extern void
Target_cPlugin_delete(struct PRESTypePlugin *);

#define TargetReply_cPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define TargetReply_cPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TargetReply_cPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define TargetReply_cPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TargetReply_cPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TargetReply_c*
TargetReply_cPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern TargetReply_c*
TargetReply_cPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TargetReply_c*
TargetReply_cPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TargetReply_cPluginSupport_copy_data(
    TargetReply_c *out,
    const TargetReply_c *in);

NDDSUSERDllExport extern void 
TargetReply_cPluginSupport_destroy_data_w_params(
    TargetReply_c *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TargetReply_cPluginSupport_destroy_data_ex(
    TargetReply_c *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TargetReply_cPluginSupport_destroy_data(
    TargetReply_c *sample);

NDDSUSERDllExport extern void 
TargetReply_cPluginSupport_print_data(
    const TargetReply_c *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TargetReply_cPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TargetReply_cPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
TargetReply_cPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TargetReply_cPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
TargetReply_cPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    TargetReply_c *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
TargetReply_cPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TargetReply_c *out,
    const TargetReply_c *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TargetReply_cPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TargetReply_c *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TargetReply_cPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TargetReply_c *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
TargetReply_cPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const TargetReply_c *sample); 

NDDSUSERDllExport extern RTIBool 
TargetReply_cPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TargetReply_c **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
TargetReply_cPlugin_deserialize_from_cdr_buffer(
    TargetReply_c *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern RTIBool
TargetReply_cPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TargetReply_cPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);    

NDDSUSERDllExport extern unsigned int 
TargetReply_cPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TargetReply_cPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TargetReply_cPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TargetReply_c * sample);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
TargetReply_cPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TargetReply_cPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TargetReply_cPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TargetReply_cPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TargetReply_c *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TargetReply_cPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TargetReply_c * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TargetReply_cPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TargetReply_c ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
TargetReply_cPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TargetReply_c *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TargetReply_cPlugin_new(void);

NDDSUSERDllExport extern void
TargetReply_cPlugin_delete(struct PRESTypePlugin *);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* DataTypesImplPlugin_470592838_h */

