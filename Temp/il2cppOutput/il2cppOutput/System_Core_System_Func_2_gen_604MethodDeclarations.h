#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.DateTime>>>
struct Func_2_t9996;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.DateTime>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_73.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.DateTime>>>::.ctor(System.Object,System.IntPtr)
 void Func_2__ctor_m70969 (Func_2_t9996 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.DateTime>>>::Invoke(T)
 KeyValuePair_2_t9990  Func_2_Invoke_m70970 (Func_2_t9996 * __this, KeyValuePair_2_t410  ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.DateTime>>>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Func_2_BeginInvoke_m70971 (Func_2_t9996 * __this, KeyValuePair_2_t410  ___arg1, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.DateTime>>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t9990  Func_2_EndInvoke_m70972 (Func_2_t9996 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
