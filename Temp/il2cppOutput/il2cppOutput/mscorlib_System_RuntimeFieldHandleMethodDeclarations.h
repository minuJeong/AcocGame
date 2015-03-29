#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t3182;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2615;
// System.Object
struct Object_t;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.RuntimeFieldHandle::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void RuntimeFieldHandle__ctor_m11150 (RuntimeFieldHandle_t3182 * __this, SerializationInfo_t2615 * ___info, StreamingContext_t2616  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.RuntimeFieldHandle::get_Value()
 IntPtr_t39 RuntimeFieldHandle_get_Value_m11151 (RuntimeFieldHandle_t3182 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.RuntimeFieldHandle::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void RuntimeFieldHandle_GetObjectData_m11152 (RuntimeFieldHandle_t3182 * __this, SerializationInfo_t2615 * ___info, StreamingContext_t2616  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.RuntimeFieldHandle::Equals(System.Object)
 bool RuntimeFieldHandle_Equals_m11153 (RuntimeFieldHandle_t3182 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.RuntimeFieldHandle::GetHashCode()
 int32_t RuntimeFieldHandle_GetHashCode_m11154 (RuntimeFieldHandle_t3182 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
