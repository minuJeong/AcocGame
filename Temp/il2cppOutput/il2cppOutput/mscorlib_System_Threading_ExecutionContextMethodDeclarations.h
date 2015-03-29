#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.ExecutionContext
struct ExecutionContext_t3472;
// System.Security.SecurityContext
struct SecurityContext_t3627;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Threading.ExecutionContext::.ctor()
 void ExecutionContext__ctor_m13888 (ExecutionContext_t3472 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ExecutionContext::.ctor(System.Threading.ExecutionContext)
 void ExecutionContext__ctor_m13889 (ExecutionContext_t3472 * __this, ExecutionContext_t3472 * ___ec, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ExecutionContext::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void ExecutionContext__ctor_m13890 (ExecutionContext_t3472 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.ExecutionContext System.Threading.ExecutionContext::Capture()
 ExecutionContext_t3472 * ExecutionContext_Capture_m13891 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ExecutionContext::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void ExecutionContext_GetObjectData_m13892 (ExecutionContext_t3472 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityContext System.Threading.ExecutionContext::get_SecurityContext()
 SecurityContext_t3627 * ExecutionContext_get_SecurityContext_m13893 (ExecutionContext_t3472 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ExecutionContext::set_SecurityContext(System.Security.SecurityContext)
 void ExecutionContext_set_SecurityContext_m13894 (ExecutionContext_t3472 * __this, SecurityContext_t3627 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ExecutionContext::get_FlowSuppressed()
 bool ExecutionContext_get_FlowSuppressed_m13895 (ExecutionContext_t3472 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ExecutionContext::IsFlowSuppressed()
 bool ExecutionContext_IsFlowSuppressed_m13896 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
