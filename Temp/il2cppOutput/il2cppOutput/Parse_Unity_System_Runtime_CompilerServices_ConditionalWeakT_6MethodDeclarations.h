#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.Object>
struct CreateValueCallback_t6173;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
 void CreateValueCallback__ctor_m31198_gshared (CreateValueCallback_t6173 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method);
#define CreateValueCallback__ctor_m31198(__this, ___object, ___method, method) (void)CreateValueCallback__ctor_m31198_gshared((CreateValueCallback_t6173 *)__this, (Object_t *)___object, (IntPtr_t39)___method, method)
// TValue System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.Object>::Invoke(TKey)
 Object_t * CreateValueCallback_Invoke_m31199_gshared (CreateValueCallback_t6173 * __this, Object_t * ___key, MethodInfo* method);
#define CreateValueCallback_Invoke_m31199(__this, ___key, method) (Object_t *)CreateValueCallback_Invoke_m31199_gshared((CreateValueCallback_t6173 *)__this, (Object_t *)___key, method)
// System.IAsyncResult System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.Object>::BeginInvoke(TKey,System.AsyncCallback,System.Object)
 Object_t * CreateValueCallback_BeginInvoke_m31200_gshared (CreateValueCallback_t6173 * __this, Object_t * ___key, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method);
#define CreateValueCallback_BeginInvoke_m31200(__this, ___key, ___callback, ___object, method) (Object_t *)CreateValueCallback_BeginInvoke_m31200_gshared((CreateValueCallback_t6173 *)__this, (Object_t *)___key, (AsyncCallback_t35 *)___callback, (Object_t *)___object, method)
// TValue System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
 Object_t * CreateValueCallback_EndInvoke_m31201_gshared (CreateValueCallback_t6173 * __this, Object_t * ___result, MethodInfo* method);
#define CreateValueCallback_EndInvoke_m31201(__this, ___result, method) (Object_t *)CreateValueCallback_EndInvoke_m31201_gshared((CreateValueCallback_t6173 *)__this, (Object_t *)___result, method)
