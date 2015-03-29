#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.SByte>
struct Comparison_1_t7197;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<System.SByte>::.ctor(System.Object,System.IntPtr)
 void Comparison_1__ctor_m39461 (Comparison_1_t7197 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<System.SByte>::Invoke(T,T)
 int32_t Comparison_1_Invoke_m39462 (Comparison_1_t7197 * __this, int8_t ___x, int8_t ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Comparison`1<System.SByte>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
 Object_t * Comparison_1_BeginInvoke_m39463 (Comparison_1_t7197 * __this, int8_t ___x, int8_t ___y, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<System.SByte>::EndInvoke(System.IAsyncResult)
 int32_t Comparison_1_EndInvoke_m39464 (Comparison_1_t7197 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
