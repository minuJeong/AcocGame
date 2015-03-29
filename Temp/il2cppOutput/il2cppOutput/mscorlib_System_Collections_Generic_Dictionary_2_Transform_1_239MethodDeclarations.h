#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,ExitGames.Client.Photon.NCommand,ExitGames.Client.Photon.NCommand>
struct Transform_1_t11346;
// System.Object
struct Object_t;
// ExitGames.Client.Photon.NCommand
struct NCommand_t2353;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,ExitGames.Client.Photon.NCommand,ExitGames.Client.Photon.NCommand>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m83625 (Transform_1_t11346 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,ExitGames.Client.Photon.NCommand,ExitGames.Client.Photon.NCommand>::Invoke(TKey,TValue)
 NCommand_t2353 * Transform_1_Invoke_m83626 (Transform_1_t11346 * __this, int32_t ___key, NCommand_t2353 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,ExitGames.Client.Photon.NCommand,ExitGames.Client.Photon.NCommand>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m83627 (Transform_1_t11346 * __this, int32_t ___key, NCommand_t2353 * ___value, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,ExitGames.Client.Photon.NCommand,ExitGames.Client.Photon.NCommand>::EndInvoke(System.IAsyncResult)
 NCommand_t2353 * Transform_1_EndInvoke_m83628 (Transform_1_t11346 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
