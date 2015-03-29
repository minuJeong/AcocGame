#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// WorkerInGame
struct WorkerInGame_t229;
// PhotonPlayer
struct PhotonPlayer_t230;
// PhotonMessageInfo
struct PhotonMessageInfo_t210;

// System.Void WorkerInGame::.ctor()
 void WorkerInGame__ctor_m1096 (WorkerInGame_t229 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerInGame::Awake()
 void WorkerInGame_Awake_m1097 (WorkerInGame_t229 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerInGame::OnGUI()
 void WorkerInGame_OnGUI_m1098 (WorkerInGame_t229 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerInGame::OnMasterClientSwitched(PhotonPlayer)
 void WorkerInGame_OnMasterClientSwitched_m1099 (WorkerInGame_t229 * __this, PhotonPlayer_t230 * ___player, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerInGame::OnLeftRoom()
 void WorkerInGame_OnLeftRoom_m1100 (WorkerInGame_t229 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerInGame::OnDisconnectedFromPhoton()
 void WorkerInGame_OnDisconnectedFromPhoton_m1101 (WorkerInGame_t229 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerInGame::OnPhotonInstantiate(PhotonMessageInfo)
 void WorkerInGame_OnPhotonInstantiate_m1102 (WorkerInGame_t229 * __this, PhotonMessageInfo_t210 * ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerInGame::OnPhotonPlayerConnected(PhotonPlayer)
 void WorkerInGame_OnPhotonPlayerConnected_m1103 (WorkerInGame_t229 * __this, PhotonPlayer_t230 * ___player, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerInGame::OnPhotonPlayerDisconnected(PhotonPlayer)
 void WorkerInGame_OnPhotonPlayerDisconnected_m1104 (WorkerInGame_t229 * __this, PhotonPlayer_t230 * ___player, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerInGame::OnFailedToConnectToPhoton()
 void WorkerInGame_OnFailedToConnectToPhoton_m1105 (WorkerInGame_t229 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
