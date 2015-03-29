#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.Internal.IParseFieldOperation,System.Collections.Generic.KeyValuePair`2<System.String,Parse.Internal.IParseFieldOperation>>
struct Transform_1_t6545;
// System.Object
struct Object_t;
// System.String
struct String_t;
// Parse.Internal.IParseFieldOperation
struct IParseFieldOperation_t1040;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,Parse.Internal.IParseFieldOperation>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.Internal.IParseFieldOperation,System.Collections.Generic.KeyValuePair`2<System.String,Parse.Internal.IParseFieldOperation>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m33820 (Transform_1_t6545 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.Internal.IParseFieldOperation,System.Collections.Generic.KeyValuePair`2<System.String,Parse.Internal.IParseFieldOperation>>::Invoke(TKey,TValue)
 KeyValuePair_2_t1176  Transform_1_Invoke_m33821 (Transform_1_t6545 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.Internal.IParseFieldOperation,System.Collections.Generic.KeyValuePair`2<System.String,Parse.Internal.IParseFieldOperation>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m33822 (Transform_1_t6545 * __this, String_t* ___key, Object_t * ___value, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.Internal.IParseFieldOperation,System.Collections.Generic.KeyValuePair`2<System.String,Parse.Internal.IParseFieldOperation>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t1176  Transform_1_EndInvoke_m33823 (Transform_1_t6545 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
