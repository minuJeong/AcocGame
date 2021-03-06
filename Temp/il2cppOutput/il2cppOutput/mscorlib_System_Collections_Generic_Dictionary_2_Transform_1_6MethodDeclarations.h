﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,ExitGames.Client.Photon.Chat.ChatChannel,System.Collections.Generic.KeyValuePair`2<System.String,ExitGames.Client.Photon.Chat.ChatChannel>>
struct Transform_1_t4115;
// System.Object
struct Object_t;
// System.String
struct String_t;
// ExitGames.Client.Photon.Chat.ChatChannel
struct ChatChannel_t3;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,ExitGames.Client.Photon.Chat.ChatChannel>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,ExitGames.Client.Photon.Chat.ChatChannel,System.Collections.Generic.KeyValuePair`2<System.String,ExitGames.Client.Photon.Chat.ChatChannel>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m16103 (Transform_1_t4115 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,ExitGames.Client.Photon.Chat.ChatChannel,System.Collections.Generic.KeyValuePair`2<System.String,ExitGames.Client.Photon.Chat.ChatChannel>>::Invoke(TKey,TValue)
 KeyValuePair_2_t4099  Transform_1_Invoke_m16104 (Transform_1_t4115 * __this, String_t* ___key, ChatChannel_t3 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,ExitGames.Client.Photon.Chat.ChatChannel,System.Collections.Generic.KeyValuePair`2<System.String,ExitGames.Client.Photon.Chat.ChatChannel>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m16105 (Transform_1_t4115 * __this, String_t* ___key, ChatChannel_t3 * ___value, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,ExitGames.Client.Photon.Chat.ChatChannel,System.Collections.Generic.KeyValuePair`2<System.String,ExitGames.Client.Photon.Chat.ChatChannel>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t4099  Transform_1_EndInvoke_m16106 (Transform_1_t4115 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
