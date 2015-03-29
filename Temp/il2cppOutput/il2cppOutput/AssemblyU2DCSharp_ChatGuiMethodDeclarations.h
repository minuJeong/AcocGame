#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ChatGui
struct ChatGui_t183;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t4;
// System.Boolean[]
struct BooleanU5BU5D_t73;
// System.Object[]
struct ObjectU5BU5D_t5;
// System.Object
struct Object_t;
// ExitGames.Client.Photon.Chat.ChatState
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Photon_Chat_C_1.h"

// System.Void ChatGui::.ctor()
 void ChatGui__ctor_m922 (ChatGui_t183 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::.cctor()
 void ChatGui__cctor_m923 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ChatGui::get_UserName()
 String_t* ChatGui_get_UserName_m924 (ChatGui_t183 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::set_UserName(System.String)
 void ChatGui_set_UserName_m925 (ChatGui_t183 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::Start()
 void ChatGui_Start_m926 (ChatGui_t183 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OnApplicationQuit()
 void ChatGui_OnApplicationQuit_m927 (ChatGui_t183 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::Update()
 void ChatGui_Update_m928 (ChatGui_t183 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OnGUI()
 void ChatGui_OnGUI_m929 (ChatGui_t183 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::GuiSendsMsg()
 void ChatGui_GuiSendsMsg_m930 (ChatGui_t183 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::PostHelpToCurrentChannel()
 void ChatGui_PostHelpToCurrentChannel_m931 (ChatGui_t183 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OnConnected()
 void ChatGui_OnConnected_m932 (ChatGui_t183 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OnDisconnected()
 void ChatGui_OnDisconnected_m933 (ChatGui_t183 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OnChatStateChange(ExitGames.Client.Photon.Chat.ChatState)
 void ChatGui_OnChatStateChange_m934 (ChatGui_t183 * __this, int32_t ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OnSubscribed(System.String[],System.Boolean[])
 void ChatGui_OnSubscribed_m935 (ChatGui_t183 * __this, StringU5BU5D_t4* ___channels, BooleanU5BU5D_t73* ___results, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OnUnsubscribed(System.String[])
 void ChatGui_OnUnsubscribed_m936 (ChatGui_t183 * __this, StringU5BU5D_t4* ___channels, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OnGetMessages(System.String,System.String[],System.Object[])
 void ChatGui_OnGetMessages_m937 (ChatGui_t183 * __this, String_t* ___channelName, StringU5BU5D_t4* ___senders, ObjectU5BU5D_t5* ___messages, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OnPrivateMessage(System.String,System.Object,System.String)
 void ChatGui_OnPrivateMessage_m938 (ChatGui_t183 * __this, String_t* ___sender, Object_t * ___message, String_t* ___channelName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OnStatusUpdate(System.String,System.Int32,System.Boolean,System.Object)
 void ChatGui_OnStatusUpdate_m939 (ChatGui_t183 * __this, String_t* ___user, int32_t ___status, bool ___gotMessage, Object_t * ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
