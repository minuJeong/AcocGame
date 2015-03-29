#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Double>
struct Comparison_1_t7588;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<System.Double>::.ctor(System.Object,System.IntPtr)
 void Comparison_1__ctor_m44182 (Comparison_1_t7588 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<System.Double>::Invoke(T,T)
 int32_t Comparison_1_Invoke_m44183 (Comparison_1_t7588 * __this, double ___x, double ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Comparison`1<System.Double>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
 Object_t * Comparison_1_BeginInvoke_m44184 (Comparison_1_t7588 * __this, double ___x, double ___y, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<System.Double>::EndInvoke(System.IAsyncResult)
 int32_t Comparison_1_EndInvoke_m44185 (Comparison_1_t7588 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
