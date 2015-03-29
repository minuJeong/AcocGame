#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PickupItemSyncer
struct PickupItemSyncer_t362;
// PhotonPlayer
struct PhotonPlayer_t230;
// PhotonMessageInfo
struct PhotonMessageInfo_t210;
// System.Single[]
struct SingleU5BU5D_t53;

// System.Void PickupItemSyncer::.ctor()
 void PickupItemSyncer__ctor_m1849 (PickupItemSyncer_t362 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItemSyncer::OnPhotonPlayerConnected(PhotonPlayer)
 void PickupItemSyncer_OnPhotonPlayerConnected_m1850 (PickupItemSyncer_t362 * __this, PhotonPlayer_t230 * ___newPlayer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItemSyncer::OnJoinedRoom()
 void PickupItemSyncer_OnJoinedRoom_m1851 (PickupItemSyncer_t362 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItemSyncer::AskForPickupItemSpawnTimes()
 void PickupItemSyncer_AskForPickupItemSpawnTimes_m1852 (PickupItemSyncer_t362 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItemSyncer::RequestForPickupTimes(PhotonMessageInfo)
 void PickupItemSyncer_RequestForPickupTimes_m1853 (PickupItemSyncer_t362 * __this, PhotonMessageInfo_t210 * ___msgInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItemSyncer::SendPickedUpItems(PhotonPlayer)
 void PickupItemSyncer_SendPickedUpItems_m1854 (PickupItemSyncer_t362 * __this, PhotonPlayer_t230 * ___targtePlayer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItemSyncer::PickupItemInit(System.Double,System.Single[])
 void PickupItemSyncer_PickupItemInit_m1855 (PickupItemSyncer_t362 * __this, double ___timeBase, SingleU5BU5D_t53* ___inactivePickupsAndTimes, MethodInfo* method) IL2CPP_METHOD_ATTR;
