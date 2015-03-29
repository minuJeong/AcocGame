#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ExitGames.Client.Photon.IPhotonSocket
struct IPhotonSocket_t2360;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t19;
// System.String
struct String_t;
// ExitGames.Client.Photon.PeerBase
struct PeerBase_t2357;
// System.Byte[]
struct ByteU5BU5D_t21;
// System.Net.IPAddress
struct IPAddress_t519;
// ExitGames.Client.Photon.ConnectionProtocol
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionProtocol.h"
// ExitGames.Client.Photon.PhotonSocketState
#include "Photon3Unity3D_ExitGames_Client_Photon_PhotonSocketState.h"
// ExitGames.Client.Photon.PhotonSocketError
#include "Photon3Unity3D_ExitGames_Client_Photon_PhotonSocketError.h"
// ExitGames.Client.Photon.DebugLevel
#include "Photon3Unity3D_ExitGames_Client_Photon_DebugLevel.h"
// ExitGames.Client.Photon.StatusCode
#include "Photon3Unity3D_ExitGames_Client_Photon_StatusCode.h"

// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.IPhotonSocket::get_Listener()
 Object_t * IPhotonSocket_get_Listener_m7349 (IPhotonSocket_t2360 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.IPhotonSocket::get_Protocol()
 uint8_t IPhotonSocket_get_Protocol_m7350 (IPhotonSocket_t2360 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.IPhotonSocket::set_Protocol(ExitGames.Client.Photon.ConnectionProtocol)
 void IPhotonSocket_set_Protocol_m7351 (IPhotonSocket_t2360 * __this, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.PhotonSocketState ExitGames.Client.Photon.IPhotonSocket::get_State()
 int32_t IPhotonSocket_get_State_m7352 (IPhotonSocket_t2360 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.IPhotonSocket::set_State(ExitGames.Client.Photon.PhotonSocketState)
 void IPhotonSocket_set_State_m7353 (IPhotonSocket_t2360 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.IPhotonSocket::get_ServerAddress()
 String_t* IPhotonSocket_get_ServerAddress_m7354 (IPhotonSocket_t2360 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.IPhotonSocket::set_ServerAddress(System.String)
 void IPhotonSocket_set_ServerAddress_m7355 (IPhotonSocket_t2360 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.IPhotonSocket::get_ServerPort()
 int32_t IPhotonSocket_get_ServerPort_m7356 (IPhotonSocket_t2360 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.IPhotonSocket::set_ServerPort(System.Int32)
 void IPhotonSocket_set_ServerPort_m7357 (IPhotonSocket_t2360 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.IPhotonSocket::get_Connected()
 bool IPhotonSocket_get_Connected_m7358 (IPhotonSocket_t2360 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.IPhotonSocket::get_MTU()
 int32_t IPhotonSocket_get_MTU_m7359 (IPhotonSocket_t2360 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.IPhotonSocket::.ctor(ExitGames.Client.Photon.PeerBase)
 void IPhotonSocket__ctor_m7360 (IPhotonSocket_t2360 * __this, PeerBase_t2357 * ___peerBase, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.IPhotonSocket::Connect()
 bool IPhotonSocket_Connect_m7361 (IPhotonSocket_t2360 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.IPhotonSocket::Disconnect()
// ExitGames.Client.Photon.PhotonSocketError ExitGames.Client.Photon.IPhotonSocket::Send(System.Byte[],System.Int32)
// ExitGames.Client.Photon.PhotonSocketError ExitGames.Client.Photon.IPhotonSocket::Receive(System.Byte[]&)
// System.Void ExitGames.Client.Photon.IPhotonSocket::HandleReceivedDatagram(System.Byte[],System.Int32,System.Boolean)
 void IPhotonSocket_HandleReceivedDatagram_m7362 (IPhotonSocket_t2360 * __this, ByteU5BU5D_t21* ___inBuffer, int32_t ___length, bool ___willBeReused, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.IPhotonSocket::ReportDebugOfLevel(ExitGames.Client.Photon.DebugLevel)
 bool IPhotonSocket_ReportDebugOfLevel_m7363 (IPhotonSocket_t2360 * __this, uint8_t ___levelOfMessage, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.IPhotonSocket::EnqueueDebugReturn(ExitGames.Client.Photon.DebugLevel,System.String)
 void IPhotonSocket_EnqueueDebugReturn_m7364 (IPhotonSocket_t2360 * __this, uint8_t ___debugLevel, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.IPhotonSocket::HandleException(ExitGames.Client.Photon.StatusCode)
 void IPhotonSocket_HandleException_m7365 (IPhotonSocket_t2360 * __this, int32_t ___statusCode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.IPhotonSocket::TryParseAddress(System.String,System.String&,System.UInt16&)
 bool IPhotonSocket_TryParseAddress_m7366 (IPhotonSocket_t2360 * __this, String_t* ___addressAndPort, String_t** ___address, uint16_t* ___port, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress ExitGames.Client.Photon.IPhotonSocket::GetIpAddress(System.String)
 IPAddress_t519 * IPhotonSocket_GetIpAddress_m7367 (Object_t * __this/* static, unused */, String_t* ___serverIp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.IPhotonSocket::<HandleException>b__7()
 void IPhotonSocket_U3CHandleExceptionU3Eb__7_m7368 (IPhotonSocket_t2360 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
