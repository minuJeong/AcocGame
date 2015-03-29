#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Contexts.Context
struct Context_t3453;
// System.Runtime.Remoting.Contexts.IContextProperty
struct IContextProperty_t3463;
// System.String
struct String_t;

// System.Void System.Runtime.Remoting.Contexts.Context::.cctor()
 void Context__cctor_m12847 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.Context::Finalize()
 void Context_Finalize_m12848 (Context_t3453 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.Runtime.Remoting.Contexts.Context::get_DefaultContext()
 Context_t3453 * Context_get_DefaultContext_m12849 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Contexts.Context::get_IsDefaultContext()
 bool Context_get_IsDefaultContext_m12850 (Context_t3453 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.IContextProperty System.Runtime.Remoting.Contexts.Context::GetProperty(System.String)
 Object_t * Context_GetProperty_m12851 (Context_t3453 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Contexts.Context::ToString()
 String_t* Context_ToString_m12852 (Context_t3453 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
