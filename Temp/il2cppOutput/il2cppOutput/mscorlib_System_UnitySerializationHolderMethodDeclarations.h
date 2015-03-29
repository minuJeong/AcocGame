#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.UnitySerializationHolder
struct UnitySerializationHolder_t3745;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2615;
// System.Type
struct Type_t;
// System.DBNull
struct DBNull_t3688;
// System.Reflection.Module
struct Module_t3180;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.UnitySerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void UnitySerializationHolder__ctor_m14754 (UnitySerializationHolder_t3745 * __this, SerializationInfo_t2615 * ___info, StreamingContext_t2616  ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetTypeData(System.Type,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void UnitySerializationHolder_GetTypeData_m14755 (Object_t * __this/* static, unused */, Type_t * ___instance, SerializationInfo_t2615 * ___info, StreamingContext_t2616  ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetDBNullData(System.DBNull,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void UnitySerializationHolder_GetDBNullData_m14756 (Object_t * __this/* static, unused */, DBNull_t3688 * ___instance, SerializationInfo_t2615 * ___info, StreamingContext_t2616  ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetModuleData(System.Reflection.Module,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void UnitySerializationHolder_GetModuleData_m14757 (Object_t * __this/* static, unused */, Module_t3180 * ___instance, SerializationInfo_t2615 * ___info, StreamingContext_t2616  ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void UnitySerializationHolder_GetObjectData_m14758 (UnitySerializationHolder_t3745 * __this, SerializationInfo_t2615 * ___info, StreamingContext_t2616  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.UnitySerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
 Object_t * UnitySerializationHolder_GetRealObject_m14759 (UnitySerializationHolder_t3745 * __this, StreamingContext_t2616  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
