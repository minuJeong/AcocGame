#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseRole>>
struct Func_2_t9829;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseRole>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseRole>>::.ctor(System.Object,System.IntPtr)
 void Func_2__ctor_m69268 (Func_2_t9829 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseRole>>::Invoke(T)
 KeyValuePair_2_t8594  Func_2_Invoke_m69269 (Func_2_t9829 * __this, KeyValuePair_2_t410  ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseRole>>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Func_2_BeginInvoke_m69270 (Func_2_t9829 * __this, KeyValuePair_2_t410  ___arg1, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseRole>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t8594  Func_2_EndInvoke_m69271 (Func_2_t9829 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
