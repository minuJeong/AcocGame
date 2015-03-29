#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Photon.PunBehaviour
struct PunBehaviour_t196;
// PhotonPlayer
struct PhotonPlayer_t230;
// System.Object[]
struct ObjectU5BU5D_t5;
// PhotonMessageInfo
struct PhotonMessageInfo_t210;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t256;
// System.String
struct String_t;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t13;
// DisconnectCause
#include "AssemblyU2DCSharp_DisconnectCause.h"

// System.Void Photon.PunBehaviour::.ctor()
 void PunBehaviour__ctor_m1352 (PunBehaviour_t196 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnConnectedToPhoton()
 void PunBehaviour_OnConnectedToPhoton_m1353 (PunBehaviour_t196 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnLeftRoom()
 void PunBehaviour_OnLeftRoom_m1354 (PunBehaviour_t196 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnMasterClientSwitched(PhotonPlayer)
 void PunBehaviour_OnMasterClientSwitched_m1355 (PunBehaviour_t196 * __this, PhotonPlayer_t230 * ___newMasterClient, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnPhotonCreateRoomFailed(System.Object[])
 void PunBehaviour_OnPhotonCreateRoomFailed_m1356 (PunBehaviour_t196 * __this, ObjectU5BU5D_t5* ___codeAndMsg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnPhotonJoinRoomFailed(System.Object[])
 void PunBehaviour_OnPhotonJoinRoomFailed_m1357 (PunBehaviour_t196 * __this, ObjectU5BU5D_t5* ___codeAndMsg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnCreatedRoom()
 void PunBehaviour_OnCreatedRoom_m1358 (PunBehaviour_t196 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnJoinedLobby()
 void PunBehaviour_OnJoinedLobby_m1359 (PunBehaviour_t196 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnLeftLobby()
 void PunBehaviour_OnLeftLobby_m1360 (PunBehaviour_t196 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnFailedToConnectToPhoton(DisconnectCause)
 void PunBehaviour_OnFailedToConnectToPhoton_m1361 (PunBehaviour_t196 * __this, int32_t ___cause, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnDisconnectedFromPhoton()
 void PunBehaviour_OnDisconnectedFromPhoton_m1362 (PunBehaviour_t196 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnConnectionFail(DisconnectCause)
 void PunBehaviour_OnConnectionFail_m1363 (PunBehaviour_t196 * __this, int32_t ___cause, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnPhotonInstantiate(PhotonMessageInfo)
 void PunBehaviour_OnPhotonInstantiate_m1364 (PunBehaviour_t196 * __this, PhotonMessageInfo_t210 * ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnReceivedRoomListUpdate()
 void PunBehaviour_OnReceivedRoomListUpdate_m1365 (PunBehaviour_t196 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnJoinedRoom()
 void PunBehaviour_OnJoinedRoom_m1366 (PunBehaviour_t196 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnPhotonPlayerConnected(PhotonPlayer)
 void PunBehaviour_OnPhotonPlayerConnected_m1367 (PunBehaviour_t196 * __this, PhotonPlayer_t230 * ___newPlayer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnPhotonPlayerDisconnected(PhotonPlayer)
 void PunBehaviour_OnPhotonPlayerDisconnected_m1368 (PunBehaviour_t196 * __this, PhotonPlayer_t230 * ___otherPlayer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnPhotonRandomJoinFailed(System.Object[])
 void PunBehaviour_OnPhotonRandomJoinFailed_m1369 (PunBehaviour_t196 * __this, ObjectU5BU5D_t5* ___codeAndMsg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnConnectedToMaster()
 void PunBehaviour_OnConnectedToMaster_m1370 (PunBehaviour_t196 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnPhotonMaxCccuReached()
 void PunBehaviour_OnPhotonMaxCccuReached_m1371 (PunBehaviour_t196 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnPhotonCustomRoomPropertiesChanged(ExitGames.Client.Photon.Hashtable)
 void PunBehaviour_OnPhotonCustomRoomPropertiesChanged_m1372 (PunBehaviour_t196 * __this, Hashtable_t256 * ___propertiesThatChanged, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnPhotonPlayerPropertiesChanged(System.Object[])
 void PunBehaviour_OnPhotonPlayerPropertiesChanged_m1373 (PunBehaviour_t196 * __this, ObjectU5BU5D_t5* ___playerAndUpdatedProps, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnUpdatedFriendList()
 void PunBehaviour_OnUpdatedFriendList_m1374 (PunBehaviour_t196 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnCustomAuthenticationFailed(System.String)
 void PunBehaviour_OnCustomAuthenticationFailed_m1375 (PunBehaviour_t196 * __this, String_t* ___debugMessage, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnWebRpcResponse(ExitGames.Client.Photon.OperationResponse)
 void PunBehaviour_OnWebRpcResponse_m1376 (PunBehaviour_t196 * __this, OperationResponse_t13 * ___response, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnOwnershipRequest(System.Object[])
 void PunBehaviour_OnOwnershipRequest_m1377 (PunBehaviour_t196 * __this, ObjectU5BU5D_t5* ___viewAndPlayer, MethodInfo* method) IL2CPP_METHOD_ATTR;
