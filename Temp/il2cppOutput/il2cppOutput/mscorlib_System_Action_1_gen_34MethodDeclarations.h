#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>>>>
struct Action_1_t6423;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>>>
struct Task_1_t6422;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>>>>::.ctor(System.Object,System.IntPtr)
 void Action_1__ctor_m32967 (Action_1_t6423 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>>>>::Invoke(T)
 void Action_1_Invoke_m32968 (Action_1_t6423 * __this, Task_1_t6422 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>>>>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Action_1_BeginInvoke_m32969 (Action_1_t6423 * __this, Task_1_t6422 * ___obj, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>>>>::EndInvoke(System.IAsyncResult)
 void Action_1_EndInvoke_m32970 (Action_1_t6423 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
