﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache,UnityEngine.GUILayoutUtility/LayoutCache>
struct Transform_1_t11527;
// System.Object
struct Object_t;
// UnityEngine.GUILayoutUtility/LayoutCache
struct LayoutCache_t2502;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache,UnityEngine.GUILayoutUtility/LayoutCache>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m84962 (Transform_1_t11527 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache,UnityEngine.GUILayoutUtility/LayoutCache>::Invoke(TKey,TValue)
 LayoutCache_t2502 * Transform_1_Invoke_m84963 (Transform_1_t11527 * __this, int32_t ___key, LayoutCache_t2502 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache,UnityEngine.GUILayoutUtility/LayoutCache>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m84964 (Transform_1_t11527 * __this, int32_t ___key, LayoutCache_t2502 * ___value, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache,UnityEngine.GUILayoutUtility/LayoutCache>::EndInvoke(System.IAsyncResult)
 LayoutCache_t2502 * Transform_1_EndInvoke_m84965 (Transform_1_t11527 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
