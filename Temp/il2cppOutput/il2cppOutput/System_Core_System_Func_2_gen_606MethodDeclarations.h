#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseObject>>>
struct Func_2_t10020;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseObject>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseObject>>>::.ctor(System.Object,System.IntPtr)
 void Func_2__ctor_m71212 (Func_2_t10020 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseObject>>>::Invoke(T)
 KeyValuePair_2_t10014  Func_2_Invoke_m71213 (Func_2_t10020 * __this, KeyValuePair_2_t410  ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseObject>>>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Func_2_BeginInvoke_m71214 (Func_2_t10020 * __this, KeyValuePair_2_t410  ___arg1, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseObject>>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t10014  Func_2_EndInvoke_m71215 (Func_2_t10020 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
