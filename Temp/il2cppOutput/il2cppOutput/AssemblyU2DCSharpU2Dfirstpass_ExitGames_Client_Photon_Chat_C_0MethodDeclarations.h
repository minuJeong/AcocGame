#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ExitGames.Client.Photon.Chat.ChatClient
struct ChatClient_t11;
// System.String
struct String_t;
// ExitGames.Client.Photon.Chat.AuthenticationValues
struct AuthenticationValues_t10;
// ExitGames.Client.Photon.Chat.IChatClientListener
struct IChatClientListener_t7;
// ExitGames.Client.Photon.EventData
struct EventData_t12;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t13;
// System.String[]
struct StringU5BU5D_t4;
// System.Object
struct Object_t;
// ExitGames.Client.Photon.Chat.ChatChannel
struct ChatChannel_t3;
// ExitGames.Client.Photon.Chat.ChatState
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Photon_Chat_C_1.h"
// ExitGames.Client.Photon.Chat.ChatDisconnectCause
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Photon_Chat_C_2.h"
// ExitGames.Client.Photon.DebugLevel
#include "Photon3Unity3D_ExitGames_Client_Photon_DebugLevel.h"
// ExitGames.Client.Photon.StatusCode
#include "Photon3Unity3D_ExitGames_Client_Photon_StatusCode.h"
// ExitGames.Client.Photon.ConnectionProtocol
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionProtocol.h"

// System.Void ExitGames.Client.Photon.Chat.ChatClient::.ctor(ExitGames.Client.Photon.Chat.IChatClientListener)
 void ChatClient__ctor_m7 (ChatClient_t11 * __this, Object_t * ___listener, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::.cctor()
 void ChatClient__cctor_m8 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::ExitGames.Client.Photon.IPhotonPeerListener.DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String)
 void ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_DebugReturn_m9 (ChatClient_t11 * __this, uint8_t ___level, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::ExitGames.Client.Photon.IPhotonPeerListener.OnEvent(ExitGames.Client.Photon.EventData)
 void ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_OnEvent_m10 (ChatClient_t11 * __this, EventData_t12 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::ExitGames.Client.Photon.IPhotonPeerListener.OnOperationResponse(ExitGames.Client.Photon.OperationResponse)
 void ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_OnOperationResponse_m11 (ChatClient_t11 * __this, OperationResponse_t13 * ___operationResponse, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::ExitGames.Client.Photon.IPhotonPeerListener.OnStatusChanged(ExitGames.Client.Photon.StatusCode)
 void ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_OnStatusChanged_m12 (ChatClient_t11 * __this, int32_t ___statusCode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.ChatClient::get_FrontendAddress()
 String_t* ChatClient_get_FrontendAddress_m13 (ChatClient_t11 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_FrontendAddress(System.String)
 void ChatClient_set_FrontendAddress_m14 (ChatClient_t11 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.ChatClient::get_ChatRegion()
 String_t* ChatClient_get_ChatRegion_m15 (ChatClient_t11 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_ChatRegion(System.String)
 void ChatClient_set_ChatRegion_m16 (ChatClient_t11 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Chat.AuthenticationValues ExitGames.Client.Photon.Chat.ChatClient::get_CustomAuthenticationValues()
 AuthenticationValues_t10 * ChatClient_get_CustomAuthenticationValues_m17 (ChatClient_t11 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_CustomAuthenticationValues(ExitGames.Client.Photon.Chat.AuthenticationValues)
 void ChatClient_set_CustomAuthenticationValues_m18 (ChatClient_t11 * __this, AuthenticationValues_t10 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Chat.ChatState ExitGames.Client.Photon.Chat.ChatClient::get_State()
 int32_t ChatClient_get_State_m19 (ChatClient_t11 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_State(ExitGames.Client.Photon.Chat.ChatState)
 void ChatClient_set_State_m20 (ChatClient_t11 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Chat.ChatDisconnectCause ExitGames.Client.Photon.Chat.ChatClient::get_DisconnectedCause()
 int32_t ChatClient_get_DisconnectedCause_m21 (ChatClient_t11 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_DisconnectedCause(ExitGames.Client.Photon.Chat.ChatDisconnectCause)
 void ChatClient_set_DisconnectedCause_m22 (ChatClient_t11 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::get_CanChat()
 bool ChatClient_get_CanChat_m23 (ChatClient_t11 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::get_HasPeer()
 bool ChatClient_get_HasPeer_m24 (ChatClient_t11 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.ChatClient::get_AppVersion()
 String_t* ChatClient_get_AppVersion_m25 (ChatClient_t11 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_AppVersion(System.String)
 void ChatClient_set_AppVersion_m26 (ChatClient_t11 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.ChatClient::get_AppId()
 String_t* ChatClient_get_AppId_m27 (ChatClient_t11 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_AppId(System.String)
 void ChatClient_set_AppId_m28 (ChatClient_t11 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.ChatClient::get_UserId()
 String_t* ChatClient_get_UserId_m29 (ChatClient_t11 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_UserId(System.String)
 void ChatClient_set_UserId_m30 (ChatClient_t11 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::Connect(System.String,System.String,System.String,ExitGames.Client.Photon.Chat.AuthenticationValues)
 bool ChatClient_Connect_m31 (ChatClient_t11 * __this, String_t* ___appId, String_t* ___appVersion, String_t* ___userId, AuthenticationValues_t10 * ___authValues, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::Connect(System.String,ExitGames.Client.Photon.ConnectionProtocol,System.String,System.String,System.String,ExitGames.Client.Photon.Chat.AuthenticationValues)
 bool ChatClient_Connect_m32 (ChatClient_t11 * __this, String_t* ___address, uint8_t ___protocol, String_t* ___appId, String_t* ___appVersion, String_t* ___userId, AuthenticationValues_t10 * ___authValues, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::Service()
 void ChatClient_Service_m33 (ChatClient_t11 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::Disconnect()
 void ChatClient_Disconnect_m34 (ChatClient_t11 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::StopThread()
 void ChatClient_StopThread_m35 (ChatClient_t11 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::Subscribe(System.String[])
 bool ChatClient_Subscribe_m36 (ChatClient_t11 * __this, StringU5BU5D_t4* ___channels, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::Subscribe(System.String[],System.Int32)
 bool ChatClient_Subscribe_m37 (ChatClient_t11 * __this, StringU5BU5D_t4* ___channels, int32_t ___messagesFromHistory, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::Unsubscribe(System.String[])
 bool ChatClient_Unsubscribe_m38 (ChatClient_t11 * __this, StringU5BU5D_t4* ___channels, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::PublishMessage(System.String,System.Object)
 bool ChatClient_PublishMessage_m39 (ChatClient_t11 * __this, String_t* ___channelName, Object_t * ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::SendPrivateMessage(System.String,System.Object)
 bool ChatClient_SendPrivateMessage_m40 (ChatClient_t11 * __this, String_t* ___target, Object_t * ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::SendPrivateMessage(System.String,System.Object,System.Boolean)
 bool ChatClient_SendPrivateMessage_m41 (ChatClient_t11 * __this, String_t* ___target, Object_t * ___message, bool ___encrypt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::SetOnlineStatus(System.Int32,System.Object,System.Boolean)
 bool ChatClient_SetOnlineStatus_m42 (ChatClient_t11 * __this, int32_t ___status, Object_t * ___message, bool ___skipMessage, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::SetOnlineStatus(System.Int32)
 bool ChatClient_SetOnlineStatus_m43 (ChatClient_t11 * __this, int32_t ___status, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::SetOnlineStatus(System.Int32,System.Object)
 bool ChatClient_SetOnlineStatus_m44 (ChatClient_t11 * __this, int32_t ___status, Object_t * ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::AddFriends(System.String[])
 bool ChatClient_AddFriends_m45 (ChatClient_t11 * __this, StringU5BU5D_t4* ___friends, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::RemoveFriends(System.String[])
 bool ChatClient_RemoveFriends_m46 (ChatClient_t11 * __this, StringU5BU5D_t4* ___friends, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.ChatClient::GetPrivateChannelNameByUser(System.String)
 String_t* ChatClient_GetPrivateChannelNameByUser_m47 (ChatClient_t11 * __this, String_t* ___userName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::TryGetChannel(System.String,System.Boolean,ExitGames.Client.Photon.Chat.ChatChannel&)
 bool ChatClient_TryGetChannel_m48 (ChatClient_t11 * __this, String_t* ___channelName, bool ___isPrivate, ChatChannel_t3 ** ___channel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::SendAcksOnly()
 void ChatClient_SendAcksOnly_m49 (ChatClient_t11 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::SendChannelOperation(System.String[],System.Byte,System.Int32)
 bool ChatClient_SendChannelOperation_m50 (ChatClient_t11 * __this, StringU5BU5D_t4* ___channels, uint8_t ___operation, int32_t ___historyLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::HandlePrivateMessageEvent(ExitGames.Client.Photon.EventData)
 void ChatClient_HandlePrivateMessageEvent_m51 (ChatClient_t11 * __this, EventData_t12 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::HandleChatMessagesEvent(ExitGames.Client.Photon.EventData)
 void ChatClient_HandleChatMessagesEvent_m52 (ChatClient_t11 * __this, EventData_t12 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::HandleSubscribeEvent(ExitGames.Client.Photon.EventData)
 void ChatClient_HandleSubscribeEvent_m53 (ChatClient_t11 * __this, EventData_t12 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::HandleUnsubscribeEvent(ExitGames.Client.Photon.EventData)
 void ChatClient_HandleUnsubscribeEvent_m54 (ChatClient_t11 * __this, EventData_t12 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::HandleAuthResponse(ExitGames.Client.Photon.OperationResponse)
 void ChatClient_HandleAuthResponse_m55 (ChatClient_t11 * __this, OperationResponse_t13 * ___operationResponse, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::HandleStatusUpdate(ExitGames.Client.Photon.EventData)
 void ChatClient_HandleStatusUpdate_m56 (ChatClient_t11 * __this, EventData_t12 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::ConnectToFrontEnd()
 void ChatClient_ConnectToFrontEnd_m57 (ChatClient_t11 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::AuthenticateOnFrontEnd()
 bool ChatClient_AuthenticateOnFrontEnd_m58 (ChatClient_t11 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::LogWarning(System.String)
 void ChatClient_LogWarning_m59 (ChatClient_t11 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::Log(System.String)
 void ChatClient_Log_m60 (ChatClient_t11 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
