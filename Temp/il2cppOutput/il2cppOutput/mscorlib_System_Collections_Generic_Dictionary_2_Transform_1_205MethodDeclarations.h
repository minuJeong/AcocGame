#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Single,System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct Transform_1_t8673;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_51.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Single,System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m55663 (Transform_1_t8673 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Single,System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>::Invoke(TKey,TValue)
 KeyValuePair_2_t8383  Transform_1_Invoke_m55664 (Transform_1_t8673 * __this, String_t* ___key, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Single,System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m55665 (Transform_1_t8673 * __this, String_t* ___key, float ___value, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Single,System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t8383  Transform_1_EndInvoke_m55666 (Transform_1_t8673 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
