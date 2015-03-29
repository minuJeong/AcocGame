#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Int32>
struct Comparison_1_t4822;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<System.Int32>::.ctor(System.Object,System.IntPtr)
 void Comparison_1__ctor_m20727 (Comparison_1_t4822 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<System.Int32>::Invoke(T,T)
 int32_t Comparison_1_Invoke_m20728 (Comparison_1_t4822 * __this, int32_t ___x, int32_t ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Comparison`1<System.Int32>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
 Object_t * Comparison_1_BeginInvoke_m20729 (Comparison_1_t4822 * __this, int32_t ___x, int32_t ___y, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<System.Int32>::EndInvoke(System.IAsyncResult)
 int32_t Comparison_1_EndInvoke_m20730 (Comparison_1_t4822 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
