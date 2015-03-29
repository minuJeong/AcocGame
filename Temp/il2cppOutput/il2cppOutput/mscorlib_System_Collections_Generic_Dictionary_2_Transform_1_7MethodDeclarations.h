#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<ExitGames.Client.Photon.ConnectionProtocol,System.Int32,ExitGames.Client.Photon.ConnectionProtocol>
struct Transform_1_t4135;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// ExitGames.Client.Photon.ConnectionProtocol
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionProtocol.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<ExitGames.Client.Photon.ConnectionProtocol,System.Int32,ExitGames.Client.Photon.ConnectionProtocol>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m16228 (Transform_1_t4135 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<ExitGames.Client.Photon.ConnectionProtocol,System.Int32,ExitGames.Client.Photon.ConnectionProtocol>::Invoke(TKey,TValue)
 uint8_t Transform_1_Invoke_m16229 (Transform_1_t4135 * __this, uint8_t ___key, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<ExitGames.Client.Photon.ConnectionProtocol,System.Int32,ExitGames.Client.Photon.ConnectionProtocol>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m16230 (Transform_1_t4135 * __this, uint8_t ___key, int32_t ___value, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<ExitGames.Client.Photon.ConnectionProtocol,System.Int32,ExitGames.Client.Photon.ConnectionProtocol>::EndInvoke(System.IAsyncResult)
 uint8_t Transform_1_EndInvoke_m16231 (Transform_1_t4135 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
