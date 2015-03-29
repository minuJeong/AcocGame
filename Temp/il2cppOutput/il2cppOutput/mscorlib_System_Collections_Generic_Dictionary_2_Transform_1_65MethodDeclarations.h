#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Component,System.Reflection.MethodInfo,System.Collections.Generic.KeyValuePair`2<UnityEngine.Component,System.Reflection.MethodInfo>>
struct Transform_1_t4901;
// System.Object
struct Object_t;
// UnityEngine.Component
struct Component_t105;
// System.Reflection.MethodInfo
struct MethodInfo_t292;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Component,System.Reflection.MethodInfo>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_19.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Component,System.Reflection.MethodInfo,System.Collections.Generic.KeyValuePair`2<UnityEngine.Component,System.Reflection.MethodInfo>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m21335 (Transform_1_t4901 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Component,System.Reflection.MethodInfo,System.Collections.Generic.KeyValuePair`2<UnityEngine.Component,System.Reflection.MethodInfo>>::Invoke(TKey,TValue)
 KeyValuePair_2_t4893  Transform_1_Invoke_m21336 (Transform_1_t4901 * __this, Component_t105 * ___key, MethodInfo_t292 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Component,System.Reflection.MethodInfo,System.Collections.Generic.KeyValuePair`2<UnityEngine.Component,System.Reflection.MethodInfo>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m21337 (Transform_1_t4901 * __this, Component_t105 * ___key, MethodInfo_t292 * ___value, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Component,System.Reflection.MethodInfo,System.Collections.Generic.KeyValuePair`2<UnityEngine.Component,System.Reflection.MethodInfo>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t4893  Transform_1_EndInvoke_m21338 (Transform_1_t4901 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
