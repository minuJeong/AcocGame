#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Tuple`2<System.Type,System.String>,System.String,System.Collections.Generic.KeyValuePair`2<System.Tuple`2<System.Type,System.String>,System.String>>
struct Transform_1_t6664;
// System.Object
struct Object_t;
// System.Tuple`2<System.Type,System.String>
struct Tuple_2_t1506;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Tuple`2<System.Type,System.String>,System.String>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_43.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Tuple`2<System.Type,System.String>,System.String,System.Collections.Generic.KeyValuePair`2<System.Tuple`2<System.Type,System.String>,System.String>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m34789 (Transform_1_t6664 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Tuple`2<System.Type,System.String>,System.String,System.Collections.Generic.KeyValuePair`2<System.Tuple`2<System.Type,System.String>,System.String>>::Invoke(TKey,TValue)
 KeyValuePair_2_t6462  Transform_1_Invoke_m34790 (Transform_1_t6664 * __this, Tuple_2_t1506 * ___key, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Tuple`2<System.Type,System.String>,System.String,System.Collections.Generic.KeyValuePair`2<System.Tuple`2<System.Type,System.String>,System.String>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m34791 (Transform_1_t6664 * __this, Tuple_2_t1506 * ___key, String_t* ___value, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Tuple`2<System.Type,System.String>,System.String,System.Collections.Generic.KeyValuePair`2<System.Tuple`2<System.Type,System.String>,System.String>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t6462  Transform_1_EndInvoke_m34792 (Transform_1_t6664 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
