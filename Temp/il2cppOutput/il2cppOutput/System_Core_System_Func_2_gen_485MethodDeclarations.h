#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct Func_2_t9359;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_12.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_44.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::.ctor(System.Object,System.IntPtr)
 void Func_2__ctor_m63337 (Func_2_t9359 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Invoke(T)
 KeyValuePair_2_t4213  Func_2_Invoke_m63338 (Func_2_t9359 * __this, KeyValuePair_2_t6464  ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Func_2_BeginInvoke_m63339 (Func_2_t9359 * __this, KeyValuePair_2_t6464  ___arg1, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t4213  Func_2_EndInvoke_m63340 (Func_2_t9359 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
