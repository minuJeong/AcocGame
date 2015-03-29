#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.AppDomain
struct AppDomain_t2231;
// System.String
struct String_t;
// System.Reflection.Assembly
struct Assembly_t147;
// System.Security.Policy.Evidence
struct Evidence_t3383;
// System.Runtime.Remoting.Contexts.Context
struct Context_t3453;

// System.String System.AppDomain::getFriendlyName()
 String_t* AppDomain_getFriendlyName_m13984 (AppDomain_t2231 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::get_FriendlyName()
 String_t* AppDomain_get_FriendlyName_m6974 (AppDomain_t2231 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.AppDomain::getCurDomain()
 AppDomain_t2231 * AppDomain_getCurDomain_m13985 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.AppDomain::get_CurrentDomain()
 AppDomain_t2231 * AppDomain_get_CurrentDomain_m6973 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::LoadAssembly(System.String,System.Security.Policy.Evidence,System.Boolean)
 Assembly_t147 * AppDomain_LoadAssembly_m13986 (AppDomain_t2231 * __this, String_t* ___assemblyRef, Evidence_t3383 * ___securityEvidence, bool ___refOnly, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::Load(System.String)
 Assembly_t147 * AppDomain_Load_m13987 (AppDomain_t2231 * __this, String_t* ___assemblyString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::Load(System.String,System.Security.Policy.Evidence,System.Boolean)
 Assembly_t147 * AppDomain_Load_m13988 (AppDomain_t2231 * __this, String_t* ___assemblyString, Evidence_t3383 * ___assemblySecurity, bool ___refonly, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalGetContext()
 Context_t3453 * AppDomain_InternalGetContext_m13989 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalGetDefaultContext()
 Context_t3453 * AppDomain_InternalGetDefaultContext_m13990 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::InternalGetProcessGuid(System.String)
 String_t* AppDomain_InternalGetProcessGuid_m13991 (Object_t * __this/* static, unused */, String_t* ___newguid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::GetProcessGuid()
 String_t* AppDomain_GetProcessGuid_m13992 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::ToString()
 String_t* AppDomain_ToString_m13993 (AppDomain_t2231 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
