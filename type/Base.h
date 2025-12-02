

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Base.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Base_1657988690_h
#define Base_1657988690_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

extern "C" {

    extern const char *BasicStructTYPENAME;

}

struct BasicStructSeq;
#ifndef NDDS_STANDALONE_TYPE
class BasicStructTypeSupport;
class BasicStructDataWriter;
class BasicStructDataReader;
#endif

class BasicStruct 
{
  public:
    typedef struct BasicStructSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef BasicStructTypeSupport TypeSupport;
    typedef BasicStructDataWriter DataWriter;
    typedef BasicStructDataReader DataReader;
    #endif

    DDS_Long   id ;
    DDS_Char *   name ;
    DDS_Double   value ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* BasicStruct_get_typecode(void); /* Type code */

DDS_SEQUENCE(BasicStructSeq, BasicStruct);                                        

NDDSUSERDllExport
RTIBool BasicStruct_initialize(
    BasicStruct* self);

NDDSUSERDllExport
RTIBool BasicStruct_initialize_ex(
    BasicStruct* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool BasicStruct_initialize_w_params(
    BasicStruct* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void BasicStruct_finalize(
    BasicStruct* self);

NDDSUSERDllExport
void BasicStruct_finalize_ex(
    BasicStruct* self,RTIBool deletePointers);

NDDSUSERDllExport
void BasicStruct_finalize_w_params(
    BasicStruct* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void BasicStruct_finalize_optional_members(
    BasicStruct* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool BasicStruct_copy(
    BasicStruct* dst,
    const BasicStruct* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* Base */

