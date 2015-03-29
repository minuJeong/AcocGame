#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.Formatters.Binary.ObjectReader
struct ObjectReader_t3534;
// System.Object
struct Object_t;
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t3515;
// System.IO.BinaryReader
struct BinaryReader_t3329;
// System.Runtime.Remoting.Messaging.Header[]
struct HeaderU5BU5D_t3485;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2615;
// System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata
struct TypeMetadata_t3531;
// System.Reflection.MemberInfo
struct MemberInfo_t484;
// System.Int32[]
struct Int32U5BU5D_t257;
// System.Array
struct Array_t;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Runtime.Serialization.Formatters.Binary.BinaryElement
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Bina_0.h"
// System.Runtime.Serialization.Formatters.Binary.TypeTag
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Type.h"

// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::.ctor(System.Runtime.Serialization.Formatters.Binary.BinaryFormatter)
 void ObjectReader__ctor_m13117 (ObjectReader_t3534 * __this, BinaryFormatter_t3515 * ___formatter, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadObjectGraph(System.IO.BinaryReader,System.Boolean,System.Object&,System.Runtime.Remoting.Messaging.Header[]&)
 void ObjectReader_ReadObjectGraph_m13118 (ObjectReader_t3534 * __this, BinaryReader_t3329 * ___reader, bool ___readHeaders, Object_t ** ___result, HeaderU5BU5D_t3485** ___headers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadObjectGraph(System.Runtime.Serialization.Formatters.Binary.BinaryElement,System.IO.BinaryReader,System.Boolean,System.Object&,System.Runtime.Remoting.Messaging.Header[]&)
 void ObjectReader_ReadObjectGraph_m13119 (ObjectReader_t3534 * __this, uint8_t ___elem, BinaryReader_t3329 * ___reader, bool ___readHeaders, Object_t ** ___result, HeaderU5BU5D_t3485** ___headers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadNextObject(System.Runtime.Serialization.Formatters.Binary.BinaryElement,System.IO.BinaryReader)
 bool ObjectReader_ReadNextObject_m13120 (ObjectReader_t3534 * __this, uint8_t ___element, BinaryReader_t3329 * ___reader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadNextObject(System.IO.BinaryReader)
 bool ObjectReader_ReadNextObject_m13121 (ObjectReader_t3534 * __this, BinaryReader_t3329 * ___reader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.ObjectReader::get_CurrentObject()
 Object_t * ObjectReader_get_CurrentObject_m13122 (ObjectReader_t3534 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadObject(System.Runtime.Serialization.Formatters.Binary.BinaryElement,System.IO.BinaryReader,System.Int64&,System.Object&,System.Runtime.Serialization.SerializationInfo&)
 void ObjectReader_ReadObject_m13123 (ObjectReader_t3534 * __this, uint8_t ___element, BinaryReader_t3329 * ___reader, int64_t* ___objectId, Object_t ** ___value, SerializationInfo_t2615 ** ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadAssembly(System.IO.BinaryReader)
 void ObjectReader_ReadAssembly_m13124 (ObjectReader_t3534 * __this, BinaryReader_t3329 * ___reader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadObjectInstance(System.IO.BinaryReader,System.Boolean,System.Boolean,System.Int64&,System.Object&,System.Runtime.Serialization.SerializationInfo&)
 void ObjectReader_ReadObjectInstance_m13125 (ObjectReader_t3534 * __this, BinaryReader_t3329 * ___reader, bool ___isRuntimeObject, bool ___hasTypeInfo, int64_t* ___objectId, Object_t ** ___value, SerializationInfo_t2615 ** ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadRefTypeObjectInstance(System.IO.BinaryReader,System.Int64&,System.Object&,System.Runtime.Serialization.SerializationInfo&)
 void ObjectReader_ReadRefTypeObjectInstance_m13126 (ObjectReader_t3534 * __this, BinaryReader_t3329 * ___reader, int64_t* ___objectId, Object_t ** ___value, SerializationInfo_t2615 ** ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadObjectContent(System.IO.BinaryReader,System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata,System.Int64,System.Object&,System.Runtime.Serialization.SerializationInfo&)
 void ObjectReader_ReadObjectContent_m13127 (ObjectReader_t3534 * __this, BinaryReader_t3329 * ___reader, TypeMetadata_t3531 * ___metadata, int64_t ___objectId, Object_t ** ___objectInstance, SerializationInfo_t2615 ** ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::RegisterObject(System.Int64,System.Object,System.Runtime.Serialization.SerializationInfo,System.Int64,System.Reflection.MemberInfo,System.Int32[])
 void ObjectReader_RegisterObject_m13128 (ObjectReader_t3534 * __this, int64_t ___objectId, Object_t * ___objectInstance, SerializationInfo_t2615 * ___info, int64_t ___parentObjectId, MemberInfo_t484 * ___parentObjectMemeber, Int32U5BU5D_t257* ___indices, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadStringIntance(System.IO.BinaryReader,System.Int64&,System.Object&)
 void ObjectReader_ReadStringIntance_m13129 (ObjectReader_t3534 * __this, BinaryReader_t3329 * ___reader, int64_t* ___objectId, Object_t ** ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadGenericArray(System.IO.BinaryReader,System.Int64&,System.Object&)
 void ObjectReader_ReadGenericArray_m13130 (ObjectReader_t3534 * __this, BinaryReader_t3329 * ___reader, int64_t* ___objectId, Object_t ** ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadBoxedPrimitiveTypeValue(System.IO.BinaryReader)
 Object_t * ObjectReader_ReadBoxedPrimitiveTypeValue_m13131 (ObjectReader_t3534 * __this, BinaryReader_t3329 * ___reader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadArrayOfPrimitiveType(System.IO.BinaryReader,System.Int64&,System.Object&)
 void ObjectReader_ReadArrayOfPrimitiveType_m13132 (ObjectReader_t3534 * __this, BinaryReader_t3329 * ___reader, int64_t* ___objectId, Object_t ** ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::BlockRead(System.IO.BinaryReader,System.Array,System.Int32)
 void ObjectReader_BlockRead_m13133 (ObjectReader_t3534 * __this, BinaryReader_t3329 * ___reader, Array_t * ___array, int32_t ___dataSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadArrayOfObject(System.IO.BinaryReader,System.Int64&,System.Object&)
 void ObjectReader_ReadArrayOfObject_m13134 (ObjectReader_t3534 * __this, BinaryReader_t3329 * ___reader, int64_t* ___objectId, Object_t ** ___array, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadArrayOfString(System.IO.BinaryReader,System.Int64&,System.Object&)
 void ObjectReader_ReadArrayOfString_m13135 (ObjectReader_t3534 * __this, BinaryReader_t3329 * ___reader, int64_t* ___objectId, Object_t ** ___array, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadSimpleArray(System.IO.BinaryReader,System.Type,System.Int64&,System.Object&)
 void ObjectReader_ReadSimpleArray_m13136 (ObjectReader_t3534 * __this, BinaryReader_t3329 * ___reader, Type_t * ___elementType, int64_t* ___objectId, Object_t ** ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadTypeMetadata(System.IO.BinaryReader,System.Boolean,System.Boolean)
 TypeMetadata_t3531 * ObjectReader_ReadTypeMetadata_m13137 (ObjectReader_t3534 * __this, BinaryReader_t3329 * ___reader, bool ___isRuntimeObject, bool ___hasTypeInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadValue(System.IO.BinaryReader,System.Object,System.Int64,System.Runtime.Serialization.SerializationInfo,System.Type,System.String,System.Reflection.MemberInfo,System.Int32[])
 void ObjectReader_ReadValue_m13138 (ObjectReader_t3534 * __this, BinaryReader_t3329 * ___reader, Object_t * ___parentObject, int64_t ___parentObjectId, SerializationInfo_t2615 * ___info, Type_t * ___valueType, String_t* ___fieldName, MemberInfo_t484 * ___memberInfo, Int32U5BU5D_t257* ___indices, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::SetObjectValue(System.Object,System.String,System.Reflection.MemberInfo,System.Runtime.Serialization.SerializationInfo,System.Object,System.Type,System.Int32[])
 void ObjectReader_SetObjectValue_m13139 (ObjectReader_t3534 * __this, Object_t * ___parentObject, String_t* ___fieldName, MemberInfo_t484 * ___memberInfo, SerializationInfo_t2615 * ___info, Object_t * ___value, Type_t * ___valueType, Int32U5BU5D_t257* ___indices, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::RecordFixup(System.Int64,System.Int64,System.Object,System.Runtime.Serialization.SerializationInfo,System.String,System.Reflection.MemberInfo,System.Int32[])
 void ObjectReader_RecordFixup_m13140 (ObjectReader_t3534 * __this, int64_t ___parentObjectId, int64_t ___childObjectId, Object_t * ___parentObject, SerializationInfo_t2615 * ___info, String_t* ___fieldName, MemberInfo_t484 * ___memberInfo, Int32U5BU5D_t257* ___indices, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Serialization.Formatters.Binary.ObjectReader::GetDeserializationType(System.Int64,System.String)
 Type_t * ObjectReader_GetDeserializationType_m13141 (ObjectReader_t3534 * __this, int64_t ___assemblyId, String_t* ___className, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadType(System.IO.BinaryReader,System.Runtime.Serialization.Formatters.Binary.TypeTag)
 Type_t * ObjectReader_ReadType_m13142 (ObjectReader_t3534 * __this, BinaryReader_t3329 * ___reader, uint8_t ___code, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadPrimitiveTypeValue(System.IO.BinaryReader,System.Type)
 Object_t * ObjectReader_ReadPrimitiveTypeValue_m13143 (Object_t * __this/* static, unused */, BinaryReader_t3329 * ___reader, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
