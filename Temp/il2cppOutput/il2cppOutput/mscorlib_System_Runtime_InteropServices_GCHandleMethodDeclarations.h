﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.InteropServices.GCHandle
struct GCHandle_t3435;
// System.Object
struct Object_t;
// System.Runtime.InteropServices.GCHandleType
#include "mscorlib_System_Runtime_InteropServices_GCHandleType.h"
// System.Runtime.InteropServices.GCHandle
#include "mscorlib_System_Runtime_InteropServices_GCHandle.h"

// System.Void System.Runtime.InteropServices.GCHandle::.ctor(System.Object,System.Runtime.InteropServices.GCHandleType)
 void GCHandle__ctor_m12789 (GCHandle_t3435 * __this, Object_t * ___value, int32_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.InteropServices.GCHandle::get_IsAllocated()
 bool GCHandle_get_IsAllocated_m12790 (GCHandle_t3435 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
 Object_t * GCHandle_get_Target_m12791 (GCHandle_t3435 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
 GCHandle_t3435  GCHandle_Alloc_m12792 (Object_t * __this/* static, unused */, Object_t * ___value, int32_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.GCHandle::Free()
 void GCHandle_Free_m12793 (GCHandle_t3435 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.InteropServices.GCHandle::GetTarget(System.Int32)
 Object_t * GCHandle_GetTarget_m12794 (Object_t * __this/* static, unused */, int32_t ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.InteropServices.GCHandle::GetTargetHandle(System.Object,System.Int32,System.Runtime.InteropServices.GCHandleType)
 int32_t GCHandle_GetTargetHandle_m12795 (Object_t * __this/* static, unused */, Object_t * ___obj, int32_t ___handle, int32_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.GCHandle::FreeHandle(System.Int32)
 void GCHandle_FreeHandle_m12796 (Object_t * __this/* static, unused */, int32_t ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.InteropServices.GCHandle::Equals(System.Object)
 bool GCHandle_Equals_m12797 (GCHandle_t3435 * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.InteropServices.GCHandle::GetHashCode()
 int32_t GCHandle_GetHashCode_m12798 (GCHandle_t3435 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
