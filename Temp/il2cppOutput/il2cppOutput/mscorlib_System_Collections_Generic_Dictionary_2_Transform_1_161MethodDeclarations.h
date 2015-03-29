#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Boolean>>
struct Transform_1_t6489;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_46.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Boolean>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m33364 (Transform_1_t6489 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Boolean>>::Invoke(TKey,TValue)
 KeyValuePair_2_t6471  Transform_1_Invoke_m33365 (Transform_1_t6489 * __this, int64_t ___key, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Boolean>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m33366 (Transform_1_t6489 * __this, int64_t ___key, bool ___value, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Boolean>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t6471  Transform_1_EndInvoke_m33367 (Transform_1_t6489 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
