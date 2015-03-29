#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseGeoPoint>>,System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct Func_2_t10655;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseGeoPoint>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_100.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseGeoPoint>>,System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::.ctor(System.Object,System.IntPtr)
 void Func_2__ctor_m77722 (Func_2_t10655 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseGeoPoint>>,System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Invoke(T)
 KeyValuePair_2_t410  Func_2_Invoke_m77723 (Func_2_t10655 * __this, KeyValuePair_2_t10656  ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseGeoPoint>>,System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Func_2_BeginInvoke_m77724 (Func_2_t10655 * __this, KeyValuePair_2_t10656  ___arg1, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseGeoPoint>>,System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t410  Func_2_EndInvoke_m77725 (Func_2_t10655 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
