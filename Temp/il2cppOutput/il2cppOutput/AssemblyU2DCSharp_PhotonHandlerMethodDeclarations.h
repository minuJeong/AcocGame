#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PhotonHandler
struct PhotonHandler_t299;
// System.String
struct String_t;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t13;
// ExitGames.Client.Photon.EventData
struct EventData_t12;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// CloudRegionCode
#include "AssemblyU2DCSharp_CloudRegionCode.h"
// ExitGames.Client.Photon.DebugLevel
#include "Photon3Unity3D_ExitGames_Client_Photon_DebugLevel.h"
// ExitGames.Client.Photon.StatusCode
#include "Photon3Unity3D_ExitGames_Client_Photon_StatusCode.h"

// System.Void PhotonHandler::.ctor()
 void PhotonHandler__ctor_m1431 (PhotonHandler_t299 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::.cctor()
 void PhotonHandler__cctor_m1432 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::Awake()
 void PhotonHandler_Awake_m1433 (PhotonHandler_t299 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::OnApplicationQuit()
 void PhotonHandler_OnApplicationQuit_m1434 (PhotonHandler_t299 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::Update()
 void PhotonHandler_Update_m1435 (PhotonHandler_t299 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::OnLevelWasLoaded(System.Int32)
 void PhotonHandler_OnLevelWasLoaded_m1436 (PhotonHandler_t299 * __this, int32_t ___level, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::OnJoinedRoom()
 void PhotonHandler_OnJoinedRoom_m1437 (PhotonHandler_t299 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::OnCreatedRoom()
 void PhotonHandler_OnCreatedRoom_m1438 (PhotonHandler_t299 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::StartFallbackSendAckThread()
 void PhotonHandler_StartFallbackSendAckThread_m1439 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::StopFallbackSendAckThread()
 void PhotonHandler_StopFallbackSendAckThread_m1440 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonHandler::FallbackSendAckThread()
 bool PhotonHandler_FallbackSendAckThread_m1441 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String)
 void PhotonHandler_DebugReturn_m1442 (PhotonHandler_t299 * __this, uint8_t ___level, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::OnOperationResponse(ExitGames.Client.Photon.OperationResponse)
 void PhotonHandler_OnOperationResponse_m1443 (PhotonHandler_t299 * __this, OperationResponse_t13 * ___operationResponse, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::OnStatusChanged(ExitGames.Client.Photon.StatusCode)
 void PhotonHandler_OnStatusChanged_m1444 (PhotonHandler_t299 * __this, int32_t ___statusCode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::OnEvent(ExitGames.Client.Photon.EventData)
 void PhotonHandler_OnEvent_m1445 (PhotonHandler_t299 * __this, EventData_t12 * ___photonEvent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// CloudRegionCode PhotonHandler::get_BestRegionCodeInPreferences()
 int32_t PhotonHandler_get_BestRegionCodeInPreferences_m1446 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::set_BestRegionCodeInPreferences(CloudRegionCode)
 void PhotonHandler_set_BestRegionCodeInPreferences_m1447 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::PingAvailableRegionsAndConnectToBest()
 void PhotonHandler_PingAvailableRegionsAndConnectToBest_m1448 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PhotonHandler::PingAvailableRegionsCoroutine(System.Boolean)
 Object_t * PhotonHandler_PingAvailableRegionsCoroutine_m1449 (PhotonHandler_t299 * __this, bool ___connectToBest, MethodInfo* method) IL2CPP_METHOD_ATTR;
