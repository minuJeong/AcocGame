﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,PhotonView,PhotonView>
struct Transform_1_t4774;
// System.Object
struct Object_t;
// PhotonView
struct PhotonView_t170;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,PhotonView,PhotonView>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m20262 (Transform_1_t4774 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,PhotonView,PhotonView>::Invoke(TKey,TValue)
 PhotonView_t170 * Transform_1_Invoke_m20263 (Transform_1_t4774 * __this, int32_t ___key, PhotonView_t170 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,PhotonView,PhotonView>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m20264 (Transform_1_t4774 * __this, int32_t ___key, PhotonView_t170 * ___value, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,PhotonView,PhotonView>::EndInvoke(System.IAsyncResult)
 PhotonView_t170 * Transform_1_EndInvoke_m20265 (Transform_1_t4774 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;