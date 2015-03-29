#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.SynchronizationContext
struct SynchronizationContext_t1275;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t2322;
// System.Object
struct Object_t;

// System.Void System.Threading.SynchronizationContext::.ctor()
 void SynchronizationContext__ctor_m7111 (SynchronizationContext_t1275 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.SynchronizationContext System.Threading.SynchronizationContext::get_Current()
 SynchronizationContext_t1275 * SynchronizationContext_get_Current_m7110 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.SynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object)
 void SynchronizationContext_Post_m7109 (SynchronizationContext_t1275 * __this, SendOrPostCallback_t2322 * ___d, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
