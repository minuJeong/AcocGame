#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Object>
struct Comparison_1_t4052;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<System.Object>::.ctor(System.Object,System.IntPtr)
 void Comparison_1__ctor_m15700_gshared (Comparison_1_t4052 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method);
#define Comparison_1__ctor_m15700(__this, ___object, ___method, method) (void)Comparison_1__ctor_m15700_gshared((Comparison_1_t4052 *)__this, (Object_t *)___object, (IntPtr_t39)___method, method)
// System.Int32 System.Comparison`1<System.Object>::Invoke(T,T)
 int32_t Comparison_1_Invoke_m15701_gshared (Comparison_1_t4052 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method);
#define Comparison_1_Invoke_m15701(__this, ___x, ___y, method) (int32_t)Comparison_1_Invoke_m15701_gshared((Comparison_1_t4052 *)__this, (Object_t *)___x, (Object_t *)___y, method)
// System.IAsyncResult System.Comparison`1<System.Object>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
 Object_t * Comparison_1_BeginInvoke_m15702_gshared (Comparison_1_t4052 * __this, Object_t * ___x, Object_t * ___y, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method);
#define Comparison_1_BeginInvoke_m15702(__this, ___x, ___y, ___callback, ___object, method) (Object_t *)Comparison_1_BeginInvoke_m15702_gshared((Comparison_1_t4052 *)__this, (Object_t *)___x, (Object_t *)___y, (AsyncCallback_t35 *)___callback, (Object_t *)___object, method)
// System.Int32 System.Comparison`1<System.Object>::EndInvoke(System.IAsyncResult)
 int32_t Comparison_1_EndInvoke_m15703_gshared (Comparison_1_t4052 * __this, Object_t * ___result, MethodInfo* method);
#define Comparison_1_EndInvoke_m15703(__this, ___result, method) (int32_t)Comparison_1_EndInvoke_m15703_gshared((Comparison_1_t4052 *)__this, (Object_t *)___result, method)
