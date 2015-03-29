#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ExitGames.Client.Photon.Protocol
struct Protocol_t470;
// System.Type
struct Type_t;
// ExitGames.Client.Photon.SerializeMethod
struct SerializeMethod_t2383;
// ExitGames.Client.Photon.DeserializeMethod
struct DeserializeMethod_t2384;
// ExitGames.Client.Photon.SerializeStreamMethod
struct SerializeStreamMethod_t468;
// ExitGames.Client.Photon.DeserializeStreamMethod
struct DeserializeStreamMethod_t469;
// System.IO.MemoryStream
struct MemoryStream_t242;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t21;
// System.Array
struct Array_t;
// ExitGames.Client.Photon.OperationRequest
struct OperationRequest_t2382;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t72;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t13;
// ExitGames.Client.Photon.EventData
struct EventData_t12;
// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t257;
// System.String[]
struct StringU5BU5D_t4;
// System.Object[]
struct ObjectU5BU5D_t5;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t256;
// System.Collections.IDictionary
struct IDictionary_t255;
// ExitGames.Client.Photon.GpType
#include "Photon3Unity3D_ExitGames_Client_Photon_GpType.h"

// System.Boolean ExitGames.Client.Photon.Protocol::TryRegisterType(System.Type,System.Byte,ExitGames.Client.Photon.SerializeMethod,ExitGames.Client.Photon.DeserializeMethod)
 bool Protocol_TryRegisterType_m7480 (Object_t * __this/* static, unused */, Type_t * ___type, uint8_t ___typeCode, SerializeMethod_t2383 * ___serializeFunction, DeserializeMethod_t2384 * ___deserializeFunction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Protocol::TryRegisterType(System.Type,System.Byte,ExitGames.Client.Photon.SerializeStreamMethod,ExitGames.Client.Photon.DeserializeStreamMethod)
 bool Protocol_TryRegisterType_m7481 (Object_t * __this/* static, unused */, Type_t * ___type, uint8_t ___typeCode, SerializeStreamMethod_t468 * ___serializeFunction, DeserializeStreamMethod_t469 * ___deserializeFunction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Protocol::SerializeCustom(System.IO.MemoryStream,System.Object)
 bool Protocol_SerializeCustom_m7482 (Object_t * __this/* static, unused */, MemoryStream_t242 * ___dout, Object_t * ___serObject, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ExitGames.Client.Photon.Protocol::DeserializeCustom(System.IO.MemoryStream,System.Byte)
 Object_t * Protocol_DeserializeCustom_m7483 (Object_t * __this/* static, unused */, MemoryStream_t242 * ___din, uint8_t ___customTypeCode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ExitGames.Client.Photon.Protocol::Serialize(System.Object)
 ByteU5BU5D_t21* Protocol_Serialize_m7484 (Object_t * __this/* static, unused */, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ExitGames.Client.Photon.Protocol::Deserialize(System.Byte[])
 Object_t * Protocol_Deserialize_m7485 (Object_t * __this/* static, unused */, ByteU5BU5D_t21* ___serializedData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ExitGames.Client.Photon.Protocol::DeserializeMessage(System.IO.MemoryStream)
 Object_t * Protocol_DeserializeMessage_m7486 (Object_t * __this/* static, unused */, MemoryStream_t242 * ___stream, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ExitGames.Client.Photon.Protocol::DeserializeRawMessage(System.IO.MemoryStream)
 ByteU5BU5D_t21* Protocol_DeserializeRawMessage_m7487 (Object_t * __this/* static, unused */, MemoryStream_t242 * ___stream, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeMessage(System.IO.MemoryStream,System.Object)
 void Protocol_SerializeMessage_m7488 (Object_t * __this/* static, unused */, MemoryStream_t242 * ___ms, Object_t * ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ExitGames.Client.Photon.Protocol::GetTypeOfCode(System.Byte)
 Type_t * Protocol_GetTypeOfCode_m7489 (Object_t * __this/* static, unused */, uint8_t ___typeCode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.GpType ExitGames.Client.Photon.Protocol::GetCodeOfType(System.Type)
 uint8_t Protocol_GetCodeOfType_m7490 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array ExitGames.Client.Photon.Protocol::CreateArrayByType(System.Byte,System.Int16)
 Array_t * Protocol_CreateArrayByType_m7491 (Object_t * __this/* static, unused */, uint8_t ___arrayType, int16_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeOperationRequest(System.IO.MemoryStream,ExitGames.Client.Photon.OperationRequest,System.Boolean)
 void Protocol_SerializeOperationRequest_m7492 (Object_t * __this/* static, unused */, MemoryStream_t242 * ___memStream, OperationRequest_t2382 * ___serObject, bool ___setType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeOperationRequest(System.IO.MemoryStream,System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Boolean)
 void Protocol_SerializeOperationRequest_m7493 (Object_t * __this/* static, unused */, MemoryStream_t242 * ___memStream, uint8_t ___operationCode, Dictionary_2_t72 * ___parameters, bool ___setType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.OperationRequest ExitGames.Client.Photon.Protocol::DeserializeOperationRequest(System.IO.MemoryStream)
 OperationRequest_t2382 * Protocol_DeserializeOperationRequest_m7494 (Object_t * __this/* static, unused */, MemoryStream_t242 * ___din, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeOperationResponse(System.IO.MemoryStream,ExitGames.Client.Photon.OperationResponse,System.Boolean)
 void Protocol_SerializeOperationResponse_m7495 (Object_t * __this/* static, unused */, MemoryStream_t242 * ___memStream, OperationResponse_t13 * ___serObject, bool ___setType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.OperationResponse ExitGames.Client.Photon.Protocol::DeserializeOperationResponse(System.IO.MemoryStream)
 OperationResponse_t13 * Protocol_DeserializeOperationResponse_m7496 (Object_t * __this/* static, unused */, MemoryStream_t242 * ___memoryStream, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeEventData(System.IO.MemoryStream,ExitGames.Client.Photon.EventData,System.Boolean)
 void Protocol_SerializeEventData_m7497 (Object_t * __this/* static, unused */, MemoryStream_t242 * ___memStream, EventData_t12 * ___serObject, bool ___setType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.EventData ExitGames.Client.Photon.Protocol::DeserializeEventData(System.IO.MemoryStream)
 EventData_t12 * Protocol_DeserializeEventData_m7498 (Object_t * __this/* static, unused */, MemoryStream_t242 * ___din, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeParameterTable(System.IO.MemoryStream,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>)
 void Protocol_SerializeParameterTable_m7499 (Object_t * __this/* static, unused */, MemoryStream_t242 * ___memStream, Dictionary_2_t72 * ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object> ExitGames.Client.Photon.Protocol::DeserializeParameterTable(System.IO.MemoryStream)
 Dictionary_2_t72 * Protocol_DeserializeParameterTable_m7500 (Object_t * __this/* static, unused */, MemoryStream_t242 * ___memoryStream, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::Serialize(System.IO.MemoryStream,System.Object,System.Boolean)
 void Protocol_Serialize_m7501 (Object_t * __this/* static, unused */, MemoryStream_t242 * ___dout, Object_t * ___serObject, bool ___setType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeByte(System.IO.MemoryStream,System.Byte,System.Boolean)
 void Protocol_SerializeByte_m7502 (Object_t * __this/* static, unused */, MemoryStream_t242 * ___dout, uint8_t ___serObject, bool ___setType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeBoolean(System.IO.MemoryStream,System.Boolean,System.Boolean)
 void Protocol_SerializeBoolean_m7503 (Object_t * __this/* static, unused */, MemoryStream_t242 * ___dout, bool ___serObject, bool ___setType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeShort(System.IO.MemoryStream,System.Int16,System.Boolean)
 void Protocol_SerializeShort_m7504 (Object_t * __this/* static, unused */, MemoryStream_t242 * ___dout, int16_t ___serObject, bool ___setType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::Serialize(System.Int16,System.Byte[],System.Int32&)
 void Protocol_Serialize_m7505 (Object_t * __this/* static, unused */, int16_t ___value, ByteU5BU5D_t21* ___target, int32_t* ___targetOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeInteger(System.IO.MemoryStream,System.Int32,System.Boolean)
 void Protocol_SerializeInteger_m7506 (Object_t * __this/* static, unused */, MemoryStream_t242 * ___dout, int32_t ___serObject, bool ___setType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::Serialize(System.Int32,System.Byte[],System.Int32&)
 void Protocol_Serialize_m2408 (Object_t * __this/* static, unused */, int32_t ___value, ByteU5BU5D_t21* ___target, int32_t* ___targetOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeLong(System.IO.MemoryStream,System.Int64,System.Boolean)
 void Protocol_SerializeLong_m7507 (Object_t * __this/* static, unused */, MemoryStream_t242 * ___dout, int64_t ___serObject, bool ___setType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeFloat(System.IO.MemoryStream,System.Single,System.Boolean)
 void Protocol_SerializeFloat_m7508 (Object_t * __this/* static, unused */, MemoryStream_t242 * ___dout, float ___serObject, bool ___setType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::Serialize(System.Single,System.Byte[],System.Int32&)
 void Protocol_Serialize_m2403 (Object_t * __this/* static, unused */, float ___value, ByteU5BU5D_t21* ___target, int32_t* ___targetOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeDouble(System.IO.MemoryStream,System.Double,System.Boolean)
 void Protocol_SerializeDouble_m7509 (Object_t * __this/* static, unused */, MemoryStream_t242 * ___dout, double ___serObject, bool ___setType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeString(System.IO.MemoryStream,System.String,System.Boolean)
 void Protocol_SerializeString_m7510 (Object_t * __this/* static, unused */, MemoryStream_t242 * ___dout, String_t* ___serObject, bool ___setType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeArray(System.IO.MemoryStream,System.Array,System.Boolean)
 void Protocol_SerializeArray_m7511 (Object_t * __this/* static, unused */, MemoryStream_t242 * ___dout, Array_t * ___serObject, bool ___setType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeByteArray(System.IO.MemoryStream,System.Byte[],System.Boolean)
 void Protocol_SerializeByteArray_m7512 (Object_t * __this/* static, unused */, MemoryStream_t242 * ___dout, ByteU5BU5D_t21* ___serObject, bool ___setType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeIntArrayOptimized(System.IO.MemoryStream,System.Int32[],System.Boolean)
 void Protocol_SerializeIntArrayOptimized_m7513 (Object_t * __this/* static, unused */, MemoryStream_t242 * ___inWriter, Int32U5BU5D_t257* ___serObject, bool ___setType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeStringArray(System.IO.MemoryStream,System.String[],System.Boolean)
 void Protocol_SerializeStringArray_m7514 (Object_t * __this/* static, unused */, MemoryStream_t242 * ___dout, StringU5BU5D_t4* ___serObject, bool ___setType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeObjectArray(System.IO.MemoryStream,System.Object[],System.Boolean)
 void Protocol_SerializeObjectArray_m7515 (Object_t * __this/* static, unused */, MemoryStream_t242 * ___dout, ObjectU5BU5D_t5* ___objects, bool ___setType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeHashTable(System.IO.MemoryStream,ExitGames.Client.Photon.Hashtable,System.Boolean)
 void Protocol_SerializeHashTable_m7516 (Object_t * __this/* static, unused */, MemoryStream_t242 * ___dout, Hashtable_t256 * ___serObject, bool ___setType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeDictionary(System.IO.MemoryStream,System.Collections.IDictionary,System.Boolean)
 void Protocol_SerializeDictionary_m7517 (Object_t * __this/* static, unused */, MemoryStream_t242 * ___dout, Object_t * ___serObject, bool ___setType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeDictionaryHeader(System.IO.MemoryStream,System.Type)
 void Protocol_SerializeDictionaryHeader_m7518 (Object_t * __this/* static, unused */, MemoryStream_t242 * ___writer, Type_t * ___dictType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeDictionaryHeader(System.IO.MemoryStream,System.Object,System.Boolean&,System.Boolean&)
 void Protocol_SerializeDictionaryHeader_m7519 (Object_t * __this/* static, unused */, MemoryStream_t242 * ___writer, Object_t * ___dict, bool* ___setKeyType, bool* ___setValueType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeDictionaryElements(System.IO.MemoryStream,System.Object,System.Boolean,System.Boolean)
 void Protocol_SerializeDictionaryElements_m7520 (Object_t * __this/* static, unused */, MemoryStream_t242 * ___writer, Object_t * ___dict, bool ___setKeyType, bool ___setValueType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ExitGames.Client.Photon.Protocol::Deserialize(System.IO.MemoryStream,System.Byte)
 Object_t * Protocol_Deserialize_m7521 (Object_t * __this/* static, unused */, MemoryStream_t242 * ___din, uint8_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte ExitGames.Client.Photon.Protocol::DeserializeByte(System.IO.MemoryStream)
 uint8_t Protocol_DeserializeByte_m7522 (Object_t * __this/* static, unused */, MemoryStream_t242 * ___din, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Protocol::DeserializeBoolean(System.IO.MemoryStream)
 bool Protocol_DeserializeBoolean_m7523 (Object_t * __this/* static, unused */, MemoryStream_t242 * ___din, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 ExitGames.Client.Photon.Protocol::DeserializeShort(System.IO.MemoryStream)
 int16_t Protocol_DeserializeShort_m7524 (Object_t * __this/* static, unused */, MemoryStream_t242 * ___din, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::Deserialize(System.Int16&,System.Byte[],System.Int32&)
 void Protocol_Deserialize_m7525 (Object_t * __this/* static, unused */, int16_t* ___value, ByteU5BU5D_t21* ___source, int32_t* ___offset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.Protocol::DeserializeInteger(System.IO.MemoryStream)
 int32_t Protocol_DeserializeInteger_m7526 (Object_t * __this/* static, unused */, MemoryStream_t242 * ___din, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::Deserialize(System.Int32&,System.Byte[],System.Int32&)
 void Protocol_Deserialize_m2409 (Object_t * __this/* static, unused */, int32_t* ___value, ByteU5BU5D_t21* ___source, int32_t* ___offset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ExitGames.Client.Photon.Protocol::DeserializeLong(System.IO.MemoryStream)
 int64_t Protocol_DeserializeLong_m7527 (Object_t * __this/* static, unused */, MemoryStream_t242 * ___din, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ExitGames.Client.Photon.Protocol::DeserializeFloat(System.IO.MemoryStream)
 float Protocol_DeserializeFloat_m7528 (Object_t * __this/* static, unused */, MemoryStream_t242 * ___din, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::Deserialize(System.Single&,System.Byte[],System.Int32&)
 void Protocol_Deserialize_m2407 (Object_t * __this/* static, unused */, float* ___value, ByteU5BU5D_t21* ___source, int32_t* ___offset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double ExitGames.Client.Photon.Protocol::DeserializeDouble(System.IO.MemoryStream)
 double Protocol_DeserializeDouble_m7529 (Object_t * __this/* static, unused */, MemoryStream_t242 * ___din, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Protocol::DeserializeString(System.IO.MemoryStream)
 String_t* Protocol_DeserializeString_m7530 (Object_t * __this/* static, unused */, MemoryStream_t242 * ___din, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array ExitGames.Client.Photon.Protocol::DeserializeArray(System.IO.MemoryStream)
 Array_t * Protocol_DeserializeArray_m7531 (Object_t * __this/* static, unused */, MemoryStream_t242 * ___din, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ExitGames.Client.Photon.Protocol::DeserializeByteArray(System.IO.MemoryStream)
 ByteU5BU5D_t21* Protocol_DeserializeByteArray_m7532 (Object_t * __this/* static, unused */, MemoryStream_t242 * ___din, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ExitGames.Client.Photon.Protocol::DeserializeIntArray(System.IO.MemoryStream)
 Int32U5BU5D_t257* Protocol_DeserializeIntArray_m7533 (Object_t * __this/* static, unused */, MemoryStream_t242 * ___din, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] ExitGames.Client.Photon.Protocol::DeserializeStringArray(System.IO.MemoryStream)
 StringU5BU5D_t4* Protocol_DeserializeStringArray_m7534 (Object_t * __this/* static, unused */, MemoryStream_t242 * ___din, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] ExitGames.Client.Photon.Protocol::DeserializeObjectArray(System.IO.MemoryStream)
 ObjectU5BU5D_t5* Protocol_DeserializeObjectArray_m7535 (Object_t * __this/* static, unused */, MemoryStream_t242 * ___din, MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable ExitGames.Client.Photon.Protocol::DeserializeHashTable(System.IO.MemoryStream)
 Hashtable_t256 * Protocol_DeserializeHashTable_m7536 (Object_t * __this/* static, unused */, MemoryStream_t242 * ___din, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary ExitGames.Client.Photon.Protocol::DeserializeDictionary(System.IO.MemoryStream)
 Object_t * Protocol_DeserializeDictionary_m7537 (Object_t * __this/* static, unused */, MemoryStream_t242 * ___din, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Protocol::DeserializeDictionaryArray(System.IO.MemoryStream,System.Int16,System.Array&)
 bool Protocol_DeserializeDictionaryArray_m7538 (Object_t * __this/* static, unused */, MemoryStream_t242 * ___din, int16_t ___size, Array_t ** ___arrayResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ExitGames.Client.Photon.Protocol::DeserializeDictionaryType(System.IO.MemoryStream,System.Byte&,System.Byte&)
 Type_t * Protocol_DeserializeDictionaryType_m7539 (Object_t * __this/* static, unused */, MemoryStream_t242 * ___reader, uint8_t* ___keyTypeCode, uint8_t* ___valTypeCode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::.ctor()
 void Protocol__ctor_m7540 (Protocol_t470 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::.cctor()
 void Protocol__cctor_m7541 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
