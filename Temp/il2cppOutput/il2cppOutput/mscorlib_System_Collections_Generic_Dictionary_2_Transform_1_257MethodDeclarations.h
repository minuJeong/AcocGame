#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>>
struct Transform_1_t11527;
// System.Object
struct Object_t;
// UnityEngine.GUILayoutUtility/LayoutCache
struct LayoutCache_t2501;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_123.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m84967 (Transform_1_t11527 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>>::Invoke(TKey,TValue)
 KeyValuePair_2_t11517  Transform_1_Invoke_m84968 (Transform_1_t11527 * __this, int32_t ___key, LayoutCache_t2501 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m84969 (Transform_1_t11527 * __this, int32_t ___key, LayoutCache_t2501 * ___value, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t11517  Transform_1_EndInvoke_m84970 (Transform_1_t11527 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
