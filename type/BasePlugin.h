

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Base.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef BasePlugin_1657988690_h
#define BasePlugin_1657988690_h

#include "Base.h"

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

extern "C" {

    #define BasicStructPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define BasicStructPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define BasicStructPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define BasicStructPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define BasicStructPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern BasicStruct*
    BasicStructPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern BasicStruct*
    BasicStructPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern BasicStruct*
    BasicStructPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    BasicStructPluginSupport_copy_data(
        BasicStruct *out,
        const BasicStruct *in);

    NDDSUSERDllExport extern void 
    BasicStructPluginSupport_destroy_data_w_params(
        BasicStruct *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    BasicStructPluginSupport_destroy_data_ex(
        BasicStruct *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    BasicStructPluginSupport_destroy_data(
        BasicStruct *sample);

    NDDSUSERDllExport extern void 
    BasicStructPluginSupport_print_data(
        const BasicStruct *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    BasicStructPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    BasicStructPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    BasicStructPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    BasicStructPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    BasicStructPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        BasicStruct *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    BasicStructPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        BasicStruct *out,
        const BasicStruct *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    BasicStructPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const BasicStruct *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    BasicStructPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        BasicStruct *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    BasicStructPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const BasicStruct *sample); 

    NDDSUSERDllExport extern RTIBool 
    BasicStructPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        BasicStruct **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    BasicStructPlugin_deserialize_from_cdr_buffer(
        BasicStruct *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern RTIBool
    BasicStructPlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    BasicStructPlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    BasicStructPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    BasicStructPlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    BasicStructPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const BasicStruct * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    BasicStructPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    BasicStructPlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    BasicStructPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    BasicStructPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const BasicStruct *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    BasicStructPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        BasicStruct * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    BasicStructPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        BasicStruct ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    BasicStructPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        BasicStruct *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    BasicStructPlugin_new(void);

    NDDSUSERDllExport extern void
    BasicStructPlugin_delete(struct PRESTypePlugin *);

}

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* BasePlugin_1657988690_h */

