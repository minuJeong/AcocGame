#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.SecurityFrame
struct SecurityFrame_t3632;
// System.Reflection.Assembly
struct Assembly_t147;
// System.AppDomain
struct AppDomain_t2231;
// System.Security.RuntimeSecurityFrame
struct RuntimeSecurityFrame_t3631;
// System.Array
struct Array_t;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t94;

// System.Void System.Security.SecurityFrame::.ctor(System.Security.RuntimeSecurityFrame)
 void SecurityFrame__ctor_m13639 (SecurityFrame_t3632 * __this, RuntimeSecurityFrame_t3631 * ___frame, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Security.SecurityFrame::_GetSecurityStack(System.Int32)
 Array_t * SecurityFrame__GetSecurityStack_m13640 (Object_t * __this/* static, unused */, int32_t ___skip, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityFrame::InitFromRuntimeFrame(System.Security.RuntimeSecurityFrame)
 void SecurityFrame_InitFromRuntimeFrame_m13641 (SecurityFrame_t3632 * __this, RuntimeSecurityFrame_t3631 * ___frame, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Security.SecurityFrame::get_Assembly()
 Assembly_t147 * SecurityFrame_get_Assembly_m13642 (SecurityFrame_t3632 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.Security.SecurityFrame::get_Domain()
 AppDomain_t2231 * SecurityFrame_get_Domain_m13643 (SecurityFrame_t3632 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityFrame::ToString()
 String_t* SecurityFrame_ToString_m13644 (SecurityFrame_t3632 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Security.SecurityFrame::GetStack(System.Int32)
 ArrayList_t94 * SecurityFrame_GetStack_m13645 (Object_t * __this/* static, unused */, int32_t ___skipFrames, MethodInfo* method) IL2CPP_METHOD_ATTR;
