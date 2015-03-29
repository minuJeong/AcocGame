#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ExitGames.Client.Photon.Chat.ChatChannel
struct ChatChannel_t3;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.String[]
struct StringU5BU5D_t4;
// System.Object[]
struct ObjectU5BU5D_t5;

// System.Void ExitGames.Client.Photon.Chat.ChatChannel::.ctor(System.String)
 void ChatChannel__ctor_m0 (ChatChannel_t3 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatChannel::get_IsPrivate()
 bool ChatChannel_get_IsPrivate_m1 (ChatChannel_t3 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatChannel::set_IsPrivate(System.Boolean)
 void ChatChannel_set_IsPrivate_m2 (ChatChannel_t3 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.Chat.ChatChannel::get_MessageCount()
 int32_t ChatChannel_get_MessageCount_m3 (ChatChannel_t3 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatChannel::Add(System.String,System.Object)
 void ChatChannel_Add_m4 (ChatChannel_t3 * __this, String_t* ___sender, Object_t * ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatChannel::Add(System.String[],System.Object[])
 void ChatChannel_Add_m5 (ChatChannel_t3 * __this, StringU5BU5D_t4* ___senders, ObjectU5BU5D_t5* ___messages, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatChannel::ClearMessages()
 void ChatChannel_ClearMessages_m6 (ChatChannel_t3 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
