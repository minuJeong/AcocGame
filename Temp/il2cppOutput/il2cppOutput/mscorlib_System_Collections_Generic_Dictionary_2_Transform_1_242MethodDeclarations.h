#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,ExitGames.Client.Photon.EnetChannel,System.Byte>
struct Transform_1_t11374;
// System.Object
struct Object_t;
// ExitGames.Client.Photon.EnetChannel
struct EnetChannel_t2352;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,ExitGames.Client.Photon.EnetChannel,System.Byte>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m83836 (Transform_1_t11374 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,ExitGames.Client.Photon.EnetChannel,System.Byte>::Invoke(TKey,TValue)
 uint8_t Transform_1_Invoke_m83837 (Transform_1_t11374 * __this, uint8_t ___key, EnetChannel_t2352 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,ExitGames.Client.Photon.EnetChannel,System.Byte>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m83838 (Transform_1_t11374 * __this, uint8_t ___key, EnetChannel_t2352 * ___value, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,ExitGames.Client.Photon.EnetChannel,System.Byte>::EndInvoke(System.IAsyncResult)
 uint8_t Transform_1_EndInvoke_m83839 (Transform_1_t11374 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
