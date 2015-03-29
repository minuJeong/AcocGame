#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action
struct Action_t1220;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action::.ctor(System.Object,System.IntPtr)
 void Action__ctor_m6202 (Action_t1220 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action::Invoke()
 void Action_Invoke_m6203 (Action_t1220 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Action::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * Action_BeginInvoke_m10143 (Action_t1220 * __this, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action::EndInvoke(System.IAsyncResult)
 void Action_EndInvoke_m10144 (Action_t1220 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
