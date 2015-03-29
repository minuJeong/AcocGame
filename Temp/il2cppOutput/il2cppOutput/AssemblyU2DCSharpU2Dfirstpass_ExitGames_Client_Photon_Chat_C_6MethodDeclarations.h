#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ExitGames.Client.Photon.Chat.ChatPeer
struct ChatPeer_t8;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t19;
// System.String
struct String_t;
// ExitGames.Client.Photon.Chat.AuthenticationValues
struct AuthenticationValues_t10;
// ExitGames.Client.Photon.ConnectionProtocol
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionProtocol.h"

// System.Void ExitGames.Client.Photon.Chat.ChatPeer::.ctor(ExitGames.Client.Photon.IPhotonPeerListener,ExitGames.Client.Photon.ConnectionProtocol)
 void ChatPeer__ctor_m64 (ChatPeer_t8 * __this, Object_t * ___listener, uint8_t ___protocol, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatPeer::Connect(System.String,ExitGames.Client.Photon.ConnectionProtocol)
 bool ChatPeer_Connect_m65 (ChatPeer_t8 * __this, String_t* ___address, uint8_t ___protocol, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatPeer::AuthenticateOnNameServer(System.String,System.String,System.String,System.String,ExitGames.Client.Photon.Chat.AuthenticationValues)
 bool ChatPeer_AuthenticateOnNameServer_m66 (ChatPeer_t8 * __this, String_t* ___appId, String_t* ___appVersion, String_t* ___region, String_t* ___userId, AuthenticationValues_t10 * ___authValues, MethodInfo* method) IL2CPP_METHOD_ATTR;
