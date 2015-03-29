#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.ExecutionContext
struct ExecutionContext_t3473;
// System.Security.SecurityContext
struct SecurityContext_t3628;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2615;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Threading.ExecutionContext::.ctor()
 void ExecutionContext__ctor_m13891 (ExecutionContext_t3473 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ExecutionContext::.ctor(System.Threading.ExecutionContext)
 void ExecutionContext__ctor_m13892 (ExecutionContext_t3473 * __this, ExecutionContext_t3473 * ___ec, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ExecutionContext::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void ExecutionContext__ctor_m13893 (ExecutionContext_t3473 * __this, SerializationInfo_t2615 * ___info, StreamingContext_t2616  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.ExecutionContext System.Threading.ExecutionContext::Capture()
 ExecutionContext_t3473 * ExecutionContext_Capture_m13894 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ExecutionContext::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void ExecutionContext_GetObjectData_m13895 (ExecutionContext_t3473 * __this, SerializationInfo_t2615 * ___info, StreamingContext_t2616  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityContext System.Threading.ExecutionContext::get_SecurityContext()
 SecurityContext_t3628 * ExecutionContext_get_SecurityContext_m13896 (ExecutionContext_t3473 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ExecutionContext::set_SecurityContext(System.Security.SecurityContext)
 void ExecutionContext_set_SecurityContext_m13897 (ExecutionContext_t3473 * __this, SecurityContext_t3628 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ExecutionContext::get_FlowSuppressed()
 bool ExecutionContext_get_FlowSuppressed_m13898 (ExecutionContext_t3473 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ExecutionContext::IsFlowSuppressed()
 bool ExecutionContext_IsFlowSuppressed_m13899 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
