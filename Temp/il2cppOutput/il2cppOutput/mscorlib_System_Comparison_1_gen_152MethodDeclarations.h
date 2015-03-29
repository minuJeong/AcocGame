#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Object>>>
struct Comparison_1_t10292;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_85.h"

// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Object>>>::.ctor(System.Object,System.IntPtr)
 void Comparison_1__ctor_m74049 (Comparison_1_t10292 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Object>>>::Invoke(T,T)
 int32_t Comparison_1_Invoke_m74050 (Comparison_1_t10292 * __this, KeyValuePair_2_t10279  ___x, KeyValuePair_2_t10279  ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Object>>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
 Object_t * Comparison_1_BeginInvoke_m74051 (Comparison_1_t10292 * __this, KeyValuePair_2_t10279  ___x, KeyValuePair_2_t10279  ___y, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Object>>>::EndInvoke(System.IAsyncResult)
 int32_t Comparison_1_EndInvoke_m74052 (Comparison_1_t10292 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
