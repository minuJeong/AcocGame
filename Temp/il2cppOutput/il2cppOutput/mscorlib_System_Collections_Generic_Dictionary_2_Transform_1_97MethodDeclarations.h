#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,LitJson.JsonData,System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>
struct Transform_1_t5831;
// System.Object
struct Object_t;
// System.String
struct String_t;
// LitJson.JsonData
struct JsonData_t537;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,LitJson.JsonData,System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m28143 (Transform_1_t5831 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,LitJson.JsonData,System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::Invoke(TKey,TValue)
 KeyValuePair_2_t930  Transform_1_Invoke_m28144 (Transform_1_t5831 * __this, String_t* ___key, JsonData_t537 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,LitJson.JsonData,System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m28145 (Transform_1_t5831 * __this, String_t* ___key, JsonData_t537 * ___value, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,LitJson.JsonData,System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t930  Transform_1_EndInvoke_m28146 (Transform_1_t5831 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
