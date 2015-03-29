#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,ExitGames.Client.Photon.Chat.ChatChannel>
struct Dictionary_2_t6;
// ExitGames.Client.Photon.Chat.IChatClientListener
struct IChatClientListener_t7;
// ExitGames.Client.Photon.Chat.ChatPeer
struct ChatPeer_t8;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct Dictionary_2_t9;
// ExitGames.Client.Photon.Chat.AuthenticationValues
struct AuthenticationValues_t10;
// System.Object
#include "mscorlib_System_Object.h"
// ExitGames.Client.Photon.Chat.ChatState
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Photon_Chat_C_1.h"
// ExitGames.Client.Photon.Chat.ChatDisconnectCause
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Photon_Chat_C_2.h"
// ExitGames.Client.Photon.Chat.ChatClient
struct ChatClient_t11  : public Object_t
{
	// System.String ExitGames.Client.Photon.Chat.ChatClient::NameServerAddress
	String_t* ___NameServerAddress;
	// System.String ExitGames.Client.Photon.Chat.ChatClient::chatRegion
	String_t* ___chatRegion;
	// System.Collections.Generic.Dictionary`2<System.String,ExitGames.Client.Photon.Chat.ChatChannel> ExitGames.Client.Photon.Chat.ChatClient::PublicChannels
	Dictionary_2_t6 * ___PublicChannels;
	// System.Collections.Generic.Dictionary`2<System.String,ExitGames.Client.Photon.Chat.ChatChannel> ExitGames.Client.Photon.Chat.ChatClient::PrivateChannels
	Dictionary_2_t6 * ___PrivateChannels;
	// ExitGames.Client.Photon.Chat.IChatClientListener ExitGames.Client.Photon.Chat.ChatClient::listener
	Object_t * ___listener;
	// ExitGames.Client.Photon.Chat.ChatPeer ExitGames.Client.Photon.Chat.ChatClient::chatPeer
	ChatPeer_t8 * ___chatPeer;
	// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::didAuthenticate
	bool ___didAuthenticate;
	// System.Int32 ExitGames.Client.Photon.Chat.ChatClient::msDeltaForServiceCalls
	int32_t ___msDeltaForServiceCalls;
	// System.Int32 ExitGames.Client.Photon.Chat.ChatClient::msTimestampOfLastServiceCall
	int32_t ___msTimestampOfLastServiceCall;
	// System.String ExitGames.Client.Photon.Chat.ChatClient::<FrontendAddress>k__BackingField
	String_t* ___U3CFrontendAddressU3Ek__BackingField;
	// ExitGames.Client.Photon.Chat.AuthenticationValues ExitGames.Client.Photon.Chat.ChatClient::<CustomAuthenticationValues>k__BackingField
	AuthenticationValues_t10 * ___U3CCustomAuthenticationValuesU3Ek__BackingField;
	// ExitGames.Client.Photon.Chat.ChatState ExitGames.Client.Photon.Chat.ChatClient::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField;
	// ExitGames.Client.Photon.Chat.ChatDisconnectCause ExitGames.Client.Photon.Chat.ChatClient::<DisconnectedCause>k__BackingField
	int32_t ___U3CDisconnectedCauseU3Ek__BackingField;
	// System.String ExitGames.Client.Photon.Chat.ChatClient::<AppVersion>k__BackingField
	String_t* ___U3CAppVersionU3Ek__BackingField;
	// System.String ExitGames.Client.Photon.Chat.ChatClient::<AppId>k__BackingField
	String_t* ___U3CAppIdU3Ek__BackingField;
	// System.String ExitGames.Client.Photon.Chat.ChatClient::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField;
};
struct ChatClient_t11_StaticFields{
	// System.String ExitGames.Client.Photon.Chat.ChatClient::ChatApppName
	String_t* ___ChatApppName;
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32> ExitGames.Client.Photon.Chat.ChatClient::ProtocolToNameServerPort
	Dictionary_2_t9 * ___ProtocolToNameServerPort;
};
