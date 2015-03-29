#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,ExitGames.Client.Photon.EnetChannel,ExitGames.Client.Photon.EnetChannel>
struct Transform_1_t11375;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,ExitGames.Client.Photon.EnetChannel,ExitGames.Client.Photon.EnetChannel>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m83854 (Transform_1_t11375 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,ExitGames.Client.Photon.EnetChannel,ExitGames.Client.Photon.EnetChannel>::Invoke(TKey,TValue)
 EnetChannel_t2352 * Transform_1_Invoke_m83855 (Transform_1_t11375 * __this, uint8_t ___key, EnetChannel_t2352 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,ExitGames.Client.Photon.EnetChannel,ExitGames.Client.Photon.EnetChannel>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m83856 (Transform_1_t11375 * __this, uint8_t ___key, EnetChannel_t2352 * ___value, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,ExitGames.Client.Photon.EnetChannel,ExitGames.Client.Photon.EnetChannel>::EndInvoke(System.IAsyncResult)
 EnetChannel_t2352 * Transform_1_EndInvoke_m83857 (Transform_1_t11375 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
