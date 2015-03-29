#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.RuntimeMethodHandle
struct RuntimeMethodHandle_t3368;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Object
struct Object_t;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.RuntimeMethodHandle::.ctor(System.IntPtr)
 void RuntimeMethodHandle__ctor_m14666 (RuntimeMethodHandle_t3368 * __this, IntPtr_t39 ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.RuntimeMethodHandle::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void RuntimeMethodHandle__ctor_m14667 (RuntimeMethodHandle_t3368 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.RuntimeMethodHandle::get_Value()
 IntPtr_t39 RuntimeMethodHandle_get_Value_m14668 (RuntimeMethodHandle_t3368 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.RuntimeMethodHandle::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void RuntimeMethodHandle_GetObjectData_m14669 (RuntimeMethodHandle_t3368 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.RuntimeMethodHandle::Equals(System.Object)
 bool RuntimeMethodHandle_Equals_m14670 (RuntimeMethodHandle_t3368 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.RuntimeMethodHandle::GetHashCode()
 int32_t RuntimeMethodHandle_GetHashCode_m14671 (RuntimeMethodHandle_t3368 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
