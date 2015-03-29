#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GameLogic
struct GameLogic_t234;
// PhotonPlayer
struct PhotonPlayer_t230;

// System.Void GameLogic::.ctor()
 void GameLogic__ctor_m1127 (GameLogic_t234 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLogic::.cctor()
 void GameLogic__cctor_m1128 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLogic::Start()
 void GameLogic_Start_m1129 (GameLogic_t234 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLogic::OnJoinedRoom()
 void GameLogic_OnJoinedRoom_m1130 (GameLogic_t234 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLogic::OnPhotonPlayerConnected(PhotonPlayer)
 void GameLogic_OnPhotonPlayerConnected_m1131 (GameLogic_t234 * __this, PhotonPlayer_t230 * ___player, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLogic::TagPlayer(System.Int32)
 void GameLogic_TagPlayer_m1132 (Object_t * __this/* static, unused */, int32_t ___playerID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLogic::TaggedPlayer(System.Int32)
 void GameLogic_TaggedPlayer_m1133 (GameLogic_t234 * __this, int32_t ___playerID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLogic::OnPhotonPlayerDisconnected(PhotonPlayer)
 void GameLogic_OnPhotonPlayerDisconnected_m1134 (GameLogic_t234 * __this, PhotonPlayer_t230 * ___player, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLogic::OnMasterClientSwitched()
 void GameLogic_OnMasterClientSwitched_m1135 (GameLogic_t234 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
