#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.DateTime>
struct Comparison_1_t7689;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Comparison`1<System.DateTime>::.ctor(System.Object,System.IntPtr)
 void Comparison_1__ctor_m45358 (Comparison_1_t7689 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<System.DateTime>::Invoke(T,T)
 int32_t Comparison_1_Invoke_m45359 (Comparison_1_t7689 * __this, DateTime_t126  ___x, DateTime_t126  ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Comparison`1<System.DateTime>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
 Object_t * Comparison_1_BeginInvoke_m45360 (Comparison_1_t7689 * __this, DateTime_t126  ___x, DateTime_t126  ___y, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<System.DateTime>::EndInvoke(System.IAsyncResult)
 int32_t Comparison_1_EndInvoke_m45361 (Comparison_1_t7689 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
