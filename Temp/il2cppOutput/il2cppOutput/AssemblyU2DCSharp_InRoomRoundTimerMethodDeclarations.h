#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// InRoomRoundTimer
struct InRoomRoundTimer_t348;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t256;
// PhotonPlayer
struct PhotonPlayer_t230;

// System.Void InRoomRoundTimer::.ctor()
 void InRoomRoundTimer__ctor_m1787 (InRoomRoundTimer_t348 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InRoomRoundTimer::StartRoundNow()
 void InRoomRoundTimer_StartRoundNow_m1788 (InRoomRoundTimer_t348 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InRoomRoundTimer::OnJoinedRoom()
 void InRoomRoundTimer_OnJoinedRoom_m1789 (InRoomRoundTimer_t348 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InRoomRoundTimer::OnPhotonCustomRoomPropertiesChanged(ExitGames.Client.Photon.Hashtable)
 void InRoomRoundTimer_OnPhotonCustomRoomPropertiesChanged_m1790 (InRoomRoundTimer_t348 * __this, Hashtable_t256 * ___propertiesThatChanged, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InRoomRoundTimer::OnMasterClientSwitched(PhotonPlayer)
 void InRoomRoundTimer_OnMasterClientSwitched_m1791 (InRoomRoundTimer_t348 * __this, PhotonPlayer_t230 * ___newMasterClient, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InRoomRoundTimer::Update()
 void InRoomRoundTimer_Update_m1792 (InRoomRoundTimer_t348 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InRoomRoundTimer::OnGUI()
 void InRoomRoundTimer_OnGUI_m1793 (InRoomRoundTimer_t348 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
