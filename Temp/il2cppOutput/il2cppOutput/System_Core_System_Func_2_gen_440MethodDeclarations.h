#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct Func_2_t9173;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_59.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_64.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::.ctor(System.Object,System.IntPtr)
 void Func_2__ctor_m60970 (Func_2_t9173 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Invoke(T)
 KeyValuePair_2_t9011  Func_2_Invoke_m60971 (Func_2_t9173 * __this, KeyValuePair_2_t9055  ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Func_2_BeginInvoke_m60972 (Func_2_t9173 * __this, KeyValuePair_2_t9055  ___arg1, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t9011  Func_2_EndInvoke_m60973 (Func_2_t9173 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
