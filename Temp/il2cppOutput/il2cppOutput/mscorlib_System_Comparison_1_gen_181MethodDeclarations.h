﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>>>
struct Comparison_1_t10981;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_113.h"

// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>>>::.ctor(System.Object,System.IntPtr)
 void Comparison_1__ctor_m81081 (Comparison_1_t10981 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>>>::Invoke(T,T)
 int32_t Comparison_1_Invoke_m81082 (Comparison_1_t10981 * __this, KeyValuePair_2_t10968  ___x, KeyValuePair_2_t10968  ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
 Object_t * Comparison_1_BeginInvoke_m81083 (Comparison_1_t10981 * __this, KeyValuePair_2_t10968  ___x, KeyValuePair_2_t10968  ___y, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>>>::EndInvoke(System.IAsyncResult)
 int32_t Comparison_1_EndInvoke_m81084 (Comparison_1_t10981 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;