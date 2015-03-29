#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseObject,System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseObject>>
struct Transform_1_t6564;
// System.Object
struct Object_t;
// System.String
struct String_t;
// Parse.ParseObject
struct ParseObject_t534;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseObject>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_48.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseObject,System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseObject>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m33995 (Transform_1_t6564 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseObject,System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseObject>>::Invoke(TKey,TValue)
 KeyValuePair_2_t6549  Transform_1_Invoke_m33996 (Transform_1_t6564 * __this, String_t* ___key, ParseObject_t534 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseObject,System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseObject>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m33997 (Transform_1_t6564 * __this, String_t* ___key, ParseObject_t534 * ___value, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseObject,System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseObject>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t6549  Transform_1_EndInvoke_m33998 (Transform_1_t6564 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
