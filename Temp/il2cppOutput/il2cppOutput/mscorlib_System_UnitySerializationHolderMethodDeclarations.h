#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.UnitySerializationHolder
struct UnitySerializationHolder_t3744;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Type
struct Type_t;
// System.DBNull
struct DBNull_t3687;
// System.Reflection.Module
struct Module_t3179;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.UnitySerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void UnitySerializationHolder__ctor_m14751 (UnitySerializationHolder_t3744 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetTypeData(System.Type,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void UnitySerializationHolder_GetTypeData_m14752 (Object_t * __this/* static, unused */, Type_t * ___instance, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetDBNullData(System.DBNull,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void UnitySerializationHolder_GetDBNullData_m14753 (Object_t * __this/* static, unused */, DBNull_t3687 * ___instance, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetModuleData(System.Reflection.Module,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void UnitySerializationHolder_GetModuleData_m14754 (Object_t * __this/* static, unused */, Module_t3179 * ___instance, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void UnitySerializationHolder_GetObjectData_m14755 (UnitySerializationHolder_t3744 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.UnitySerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
 Object_t * UnitySerializationHolder_GetRealObject_m14756 (UnitySerializationHolder_t3744 * __this, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
