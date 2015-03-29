#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,PhotonView,System.Collections.Generic.KeyValuePair`2<System.Int32,PhotonView>>
struct Transform_1_t4776;
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
// System.Collections.Generic.KeyValuePair`2<System.Int32,PhotonView>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,PhotonView,System.Collections.Generic.KeyValuePair`2<System.Int32,PhotonView>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m20273 (Transform_1_t4776 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,PhotonView,System.Collections.Generic.KeyValuePair`2<System.Int32,PhotonView>>::Invoke(TKey,TValue)
 KeyValuePair_2_t486  Transform_1_Invoke_m20274 (Transform_1_t4776 * __this, int32_t ___key, PhotonView_t170 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,PhotonView,System.Collections.Generic.KeyValuePair`2<System.Int32,PhotonView>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m20275 (Transform_1_t4776 * __this, int32_t ___key, PhotonView_t170 * ___value, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,PhotonView,System.Collections.Generic.KeyValuePair`2<System.Int32,PhotonView>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t486  Transform_1_EndInvoke_m20276 (Transform_1_t4776 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
