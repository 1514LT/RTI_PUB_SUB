

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DataTypesImpl.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef DataTypesImplPlugin_470593198_h
#define DataTypesImplPlugin_470593198_h

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

#define largePacket_cPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define largePacket_cPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define largePacket_cPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define largePacket_cPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define largePacket_cPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern largePacket_c*
largePacket_cPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern largePacket_c*
largePacket_cPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern largePacket_c*
largePacket_cPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
largePacket_cPluginSupport_copy_data(
    largePacket_c *out,
    const largePacket_c *in);

NDDSUSERDllExport extern void 
largePacket_cPluginSupport_destroy_data_w_params(
    largePacket_c *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
largePacket_cPluginSupport_destroy_data_ex(
    largePacket_c *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
largePacket_cPluginSupport_destroy_data(
    largePacket_c *sample);

NDDSUSERDllExport extern void 
largePacket_cPluginSupport_print_data(
    const largePacket_c *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
largePacket_cPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
largePacket_cPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
largePacket_cPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
largePacket_cPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
largePacket_cPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    largePacket_c *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
largePacket_cPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    largePacket_c *out,
    const largePacket_c *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
largePacket_cPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const largePacket_c *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
largePacket_cPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    largePacket_c *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
largePacket_cPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const largePacket_c *sample); 

NDDSUSERDllExport extern RTIBool 
largePacket_cPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    largePacket_c **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
largePacket_cPlugin_deserialize_from_cdr_buffer(
    largePacket_c *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern RTIBool
largePacket_cPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
largePacket_cPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);    

NDDSUSERDllExport extern unsigned int 
largePacket_cPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
largePacket_cPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
largePacket_cPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const largePacket_c * sample);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
largePacket_cPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
largePacket_cPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
largePacket_cPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
largePacket_cPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const largePacket_c *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
largePacket_cPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    largePacket_c * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
largePacket_cPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    largePacket_c ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
largePacket_cPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    largePacket_c *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
largePacket_cPlugin_new(void);

NDDSUSERDllExport extern void
largePacket_cPlugin_delete(struct PRESTypePlugin *);

#define smallPacket_cPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define smallPacket_cPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define smallPacket_cPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define smallPacket_cPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define smallPacket_cPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern smallPacket_c*
smallPacket_cPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern smallPacket_c*
smallPacket_cPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern smallPacket_c*
smallPacket_cPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
smallPacket_cPluginSupport_copy_data(
    smallPacket_c *out,
    const smallPacket_c *in);

NDDSUSERDllExport extern void 
smallPacket_cPluginSupport_destroy_data_w_params(
    smallPacket_c *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
smallPacket_cPluginSupport_destroy_data_ex(
    smallPacket_c *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
smallPacket_cPluginSupport_destroy_data(
    smallPacket_c *sample);

NDDSUSERDllExport extern void 
smallPacket_cPluginSupport_print_data(
    const smallPacket_c *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
smallPacket_cPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
smallPacket_cPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
smallPacket_cPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
smallPacket_cPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
smallPacket_cPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    smallPacket_c *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
smallPacket_cPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    smallPacket_c *out,
    const smallPacket_c *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
smallPacket_cPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const smallPacket_c *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
smallPacket_cPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    smallPacket_c *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
smallPacket_cPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const smallPacket_c *sample); 

NDDSUSERDllExport extern RTIBool 
smallPacket_cPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    smallPacket_c **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
smallPacket_cPlugin_deserialize_from_cdr_buffer(
    smallPacket_c *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern RTIBool
smallPacket_cPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
smallPacket_cPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);    

NDDSUSERDllExport extern unsigned int 
smallPacket_cPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
smallPacket_cPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
smallPacket_cPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const smallPacket_c * sample);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
smallPacket_cPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
smallPacket_cPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
smallPacket_cPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
smallPacket_cPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const smallPacket_c *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
smallPacket_cPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    smallPacket_c * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
smallPacket_cPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    smallPacket_c ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
smallPacket_cPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    smallPacket_c *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
smallPacket_cPlugin_new(void);

NDDSUSERDllExport extern void
smallPacket_cPlugin_delete(struct PRESTypePlugin *);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* DataTypesImplPlugin_470593198_h */

