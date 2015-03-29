#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.DelegateSerializationHolder
struct DelegateSerializationHolder_t3696;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2615;
// System.Delegate
struct Delegate_t793;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.DelegateSerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void DelegateSerializationHolder__ctor_m14365 (DelegateSerializationHolder_t3696 * __this, SerializationInfo_t2615 * ___info, StreamingContext_t2616  ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DelegateSerializationHolder::GetDelegateData(System.Delegate,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void DelegateSerializationHolder_GetDelegateData_m14366 (Object_t * __this/* static, unused */, Delegate_t793 * ___instance, SerializationInfo_t2615 * ___info, StreamingContext_t2616  ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DelegateSerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void DelegateSerializationHolder_GetObjectData_m14367 (DelegateSerializationHolder_t3696 * __this, SerializationInfo_t2615 * ___info, StreamingContext_t2616  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.DelegateSerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
 Object_t * DelegateSerializationHolder_GetRealObject_m14368 (DelegateSerializationHolder_t3696 * __this, StreamingContext_t2616  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
