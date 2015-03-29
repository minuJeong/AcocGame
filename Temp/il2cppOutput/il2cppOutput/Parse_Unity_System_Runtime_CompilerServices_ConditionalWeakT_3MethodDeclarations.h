#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.IComparable>
struct CreateValueCallback_t1036;
// System.Object
struct Object_t;
// System.IComparable
struct IComparable_t78;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.IComparable>::.ctor(System.Object,System.IntPtr)
// System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.Object>
#include "Parse_Unity_System_Runtime_CompilerServices_ConditionalWeakT_6MethodDeclarations.h"
#define CreateValueCallback__ctor_m6332(__this, ___object, ___method, method) (void)CreateValueCallback__ctor_m31198_gshared((CreateValueCallback_t6173 *)__this, (Object_t *)___object, (IntPtr_t39)___method, method)
// TValue System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.IComparable>::Invoke(TKey)
#define CreateValueCallback_Invoke_m31417(__this, ___key, method) (Object_t *)CreateValueCallback_Invoke_m31199_gshared((CreateValueCallback_t6173 *)__this, (Object_t *)___key, method)
// System.IAsyncResult System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.IComparable>::BeginInvoke(TKey,System.AsyncCallback,System.Object)
#define CreateValueCallback_BeginInvoke_m31418(__this, ___key, ___callback, ___object, method) (Object_t *)CreateValueCallback_BeginInvoke_m31200_gshared((CreateValueCallback_t6173 *)__this, (Object_t *)___key, (AsyncCallback_t35 *)___callback, (Object_t *)___object, method)
// TValue System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.IComparable>::EndInvoke(System.IAsyncResult)
#define CreateValueCallback_EndInvoke_m31419(__this, ___result, method) (Object_t *)CreateValueCallback_EndInvoke_m31201_gshared((CreateValueCallback_t6173 *)__this, (Object_t *)___result, method)
