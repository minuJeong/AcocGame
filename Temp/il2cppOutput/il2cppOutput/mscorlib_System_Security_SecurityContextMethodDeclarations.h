#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.SecurityContext
struct SecurityContext_t3628;
// System.Threading.CompressedStack
struct CompressedStack_t3627;

// System.Void System.Security.SecurityContext::.ctor()
 void SecurityContext__ctor_m13602 (SecurityContext_t3628 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityContext::.ctor(System.Security.SecurityContext)
 void SecurityContext__ctor_m13603 (SecurityContext_t3628 * __this, SecurityContext_t3628 * ___sc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityContext System.Security.SecurityContext::Capture()
 SecurityContext_t3628 * SecurityContext_Capture_m13604 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityContext::get_FlowSuppressed()
 bool SecurityContext_get_FlowSuppressed_m13605 (SecurityContext_t3628 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CompressedStack System.Security.SecurityContext::get_CompressedStack()
 CompressedStack_t3627 * SecurityContext_get_CompressedStack_m13606 (SecurityContext_t3628 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
