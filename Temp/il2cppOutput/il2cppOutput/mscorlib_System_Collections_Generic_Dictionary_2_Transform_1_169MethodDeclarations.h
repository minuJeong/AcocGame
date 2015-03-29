#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Parse.Internal.ParseJSONCacheItem,System.Collections.Generic.KeyValuePair`2<System.Object,Parse.Internal.ParseJSONCacheItem>>
struct Transform_1_t6529;
// System.Object
struct Object_t;
// Parse.Internal.ParseJSONCacheItem
struct ParseJSONCacheItem_t1052;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,Parse.Internal.ParseJSONCacheItem>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_45.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Parse.Internal.ParseJSONCacheItem,System.Collections.Generic.KeyValuePair`2<System.Object,Parse.Internal.ParseJSONCacheItem>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m33682 (Transform_1_t6529 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Parse.Internal.ParseJSONCacheItem,System.Collections.Generic.KeyValuePair`2<System.Object,Parse.Internal.ParseJSONCacheItem>>::Invoke(TKey,TValue)
 KeyValuePair_2_t6467  Transform_1_Invoke_m33683 (Transform_1_t6529 * __this, Object_t * ___key, ParseJSONCacheItem_t1052 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Parse.Internal.ParseJSONCacheItem,System.Collections.Generic.KeyValuePair`2<System.Object,Parse.Internal.ParseJSONCacheItem>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m33684 (Transform_1_t6529 * __this, Object_t * ___key, ParseJSONCacheItem_t1052 * ___value, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Parse.Internal.ParseJSONCacheItem,System.Collections.Generic.KeyValuePair`2<System.Object,Parse.Internal.ParseJSONCacheItem>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t6467  Transform_1_EndInvoke_m33685 (Transform_1_t6529 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
