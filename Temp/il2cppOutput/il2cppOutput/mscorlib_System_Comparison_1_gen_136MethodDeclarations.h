﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Single>>>
struct Comparison_1_t9907;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Single>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_69.h"

// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Single>>>::.ctor(System.Object,System.IntPtr)
 void Comparison_1__ctor_m70158 (Comparison_1_t9907 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Single>>>::Invoke(T,T)
 int32_t Comparison_1_Invoke_m70159 (Comparison_1_t9907 * __this, KeyValuePair_2_t9894  ___x, KeyValuePair_2_t9894  ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Single>>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
 Object_t * Comparison_1_BeginInvoke_m70160 (Comparison_1_t9907 * __this, KeyValuePair_2_t9894  ___x, KeyValuePair_2_t9894  ___y, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.Single>>>::EndInvoke(System.IAsyncResult)
 int32_t Comparison_1_EndInvoke_m70161 (Comparison_1_t9907 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;