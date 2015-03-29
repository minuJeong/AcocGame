#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,ExitGames.Client.Photon.CustomType,System.Byte>
struct Transform_1_t11432;
// System.Object
struct Object_t;
// ExitGames.Client.Photon.CustomType
struct CustomType_t2394;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,ExitGames.Client.Photon.CustomType,System.Byte>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m84354 (Transform_1_t11432 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,ExitGames.Client.Photon.CustomType,System.Byte>::Invoke(TKey,TValue)
 uint8_t Transform_1_Invoke_m84355 (Transform_1_t11432 * __this, uint8_t ___key, CustomType_t2394 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,ExitGames.Client.Photon.CustomType,System.Byte>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m84356 (Transform_1_t11432 * __this, uint8_t ___key, CustomType_t2394 * ___value, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,ExitGames.Client.Photon.CustomType,System.Byte>::EndInvoke(System.IAsyncResult)
 uint8_t Transform_1_EndInvoke_m84357 (Transform_1_t11432 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
