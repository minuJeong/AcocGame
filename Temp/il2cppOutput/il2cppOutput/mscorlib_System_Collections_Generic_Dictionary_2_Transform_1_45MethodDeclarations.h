#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GameObject,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GameObject>>
struct Transform_1_t4737;
// System.Object
struct Object_t;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t47;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GameObject>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_16.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GameObject,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GameObject>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m19949 (Transform_1_t4737 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GameObject,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GameObject>>::Invoke(TKey,TValue)
 KeyValuePair_2_t4728  Transform_1_Invoke_m19950 (Transform_1_t4737 * __this, String_t* ___key, GameObject_t47 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GameObject,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GameObject>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m19951 (Transform_1_t4737 * __this, String_t* ___key, GameObject_t47 * ___value, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GameObject,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GameObject>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t4728  Transform_1_EndInvoke_m19952 (Transform_1_t4737 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
