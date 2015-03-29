#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t4;
// ExitGames.Client.Photon.Chat.ChatChannel
struct ChatChannel_t3;
// ExitGames.Client.Photon.Chat.ChatClient
struct ChatClient_t11;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// ChatGui
struct ChatGui_t183  : public MonoBehaviour_t58
{
	// System.String ChatGui::ChatAppId
	String_t* ___ChatAppId;
	// System.String[] ChatGui::ChannelsToJoinOnConnect
	StringU5BU5D_t4* ___ChannelsToJoinOnConnect;
	// System.Int32 ChatGui::HistoryLengthToFetch
	int32_t ___HistoryLengthToFetch;
	// System.Boolean ChatGui::DemoPublishOnSubscribe
	bool ___DemoPublishOnSubscribe;
	// ExitGames.Client.Photon.Chat.ChatChannel ChatGui::selectedChannel
	ChatChannel_t3 * ___selectedChannel;
	// System.String ChatGui::selectedChannelName
	String_t* ___selectedChannelName;
	// System.Int32 ChatGui::selectedChannelIndex
	int32_t ___selectedChannelIndex;
	// System.Boolean ChatGui::doingPrivateChat
	bool ___doingPrivateChat;
	// ExitGames.Client.Photon.Chat.ChatClient ChatGui::chatClient
	ChatClient_t11 * ___chatClient;
	// UnityEngine.Rect ChatGui::GuiRect
	Rect_t55  ___GuiRect;
	// System.Boolean ChatGui::IsVisible
	bool ___IsVisible;
	// System.Boolean ChatGui::AlignBottom
	bool ___AlignBottom;
	// System.Boolean ChatGui::FullScreen
	bool ___FullScreen;
	// System.String ChatGui::inputLine
	String_t* ___inputLine;
	// System.String ChatGui::userIdInput
	String_t* ___userIdInput;
	// UnityEngine.Vector2 ChatGui::scrollPos
	Vector2_t51  ___scrollPos;
	// System.String ChatGui::<UserName>k__BackingField
	String_t* ___U3CUserNameU3Ek__BackingField;
};
struct ChatGui_t183_StaticFields{
	// System.String ChatGui::WelcomeText
	String_t* ___WelcomeText;
	// System.String ChatGui::HelpText
	String_t* ___HelpText;
};
