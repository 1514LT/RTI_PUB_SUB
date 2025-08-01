

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DateTypes.idl
using RTI Code Generator (rtiddsgen) version 4.5.0.1.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef DateTypesPlugin_1256646860_h
#define DateTypesPlugin_1256646860_h

#include "DateTypes.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#define TargetPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define TargetPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TargetPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define TargetPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TargetPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Target*
TargetPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern Target*
TargetPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Target*
TargetPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TargetPluginSupport_copy_data(
    Target *out,
    const Target *in);

NDDSUSERDllExport extern void 
TargetPluginSupport_destroy_data_w_params(
    Target *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TargetPluginSupport_destroy_data_ex(
    Target *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TargetPluginSupport_destroy_data(
    Target *sample);

NDDSUSERDllExport extern void 
TargetPluginSupport_print_data(
    const Target *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TargetPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TargetPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
TargetPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TargetPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
TargetPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    Target *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
TargetPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Target *out,
    const Target *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
TargetPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const Target *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
TargetPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    Target **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *cdrStream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
TargetPlugin_deserialize_from_cdr_buffer(
    Target *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
TargetPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
TargetPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TargetPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TargetPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TargetPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    Target ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *cdrStream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TargetPlugin_new(void);

NDDSUSERDllExport extern void
TargetPlugin_delete(struct PRESTypePlugin *);

#define TargetReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define TargetReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TargetReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define TargetReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TargetReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TargetReply*
TargetReplyPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern TargetReply*
TargetReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TargetReply*
TargetReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TargetReplyPluginSupport_copy_data(
    TargetReply *out,
    const TargetReply *in);

NDDSUSERDllExport extern void 
TargetReplyPluginSupport_destroy_data_w_params(
    TargetReply *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TargetReplyPluginSupport_destroy_data_ex(
    TargetReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TargetReplyPluginSupport_destroy_data(
    TargetReply *sample);

NDDSUSERDllExport extern void 
TargetReplyPluginSupport_print_data(
    const TargetReply *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TargetReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TargetReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
TargetReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TargetReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
TargetReplyPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    TargetReply *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
TargetReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TargetReply *out,
    const TargetReply *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
TargetReplyPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const TargetReply *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
TargetReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TargetReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *cdrStream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
TargetReplyPlugin_deserialize_from_cdr_buffer(
    TargetReply *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
TargetReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
TargetReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TargetReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TargetReplyPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TargetReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TargetReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *cdrStream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TargetReplyPlugin_new(void);

NDDSUSERDllExport extern void
TargetReplyPlugin_delete(struct PRESTypePlugin *);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* DateTypesPlugin_1256646860_h */
