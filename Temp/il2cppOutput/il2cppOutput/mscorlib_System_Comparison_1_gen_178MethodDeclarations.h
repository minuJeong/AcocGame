﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>>>
struct Comparison_1_t10910;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_110.h"

// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>>>::.ctor(System.Object,System.IntPtr)
 void Comparison_1__ctor_m80355 (Comparison_1_t10910 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>>>::Invoke(T,T)
 int32_t Comparison_1_Invoke_m80356 (Comparison_1_t10910 * __this, KeyValuePair_2_t10897  ___x, KeyValuePair_2_t10897  ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
 Object_t * Comparison_1_BeginInvoke_m80357 (Comparison_1_t10910 * __this, KeyValuePair_2_t10897  ___x, KeyValuePair_2_t10897  ___y, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>>>::EndInvoke(System.IAsyncResult)
 int32_t Comparison_1_EndInvoke_m80358 (Comparison_1_t10910 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
