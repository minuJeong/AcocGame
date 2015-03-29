#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PhotonTransformViewPositionControl
struct PhotonTransformViewPositionControl_t336;
// PhotonTransformViewPositionModel
struct PhotonTransformViewPositionModel_t333;
// PhotonStream
struct PhotonStream_t209;
// PhotonMessageInfo
struct PhotonMessageInfo_t210;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void PhotonTransformViewPositionControl::.ctor(PhotonTransformViewPositionModel)
 void PhotonTransformViewPositionControl__ctor_m1753 (PhotonTransformViewPositionControl_t336 * __this, PhotonTransformViewPositionModel_t333 * ___model, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PhotonTransformViewPositionControl::GetOldestStoredNetworkPosition()
 Vector3_t31  PhotonTransformViewPositionControl_GetOldestStoredNetworkPosition_m1754 (PhotonTransformViewPositionControl_t336 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformViewPositionControl::SetSynchronizedValues(UnityEngine.Vector3,System.Single)
 void PhotonTransformViewPositionControl_SetSynchronizedValues_m1755 (PhotonTransformViewPositionControl_t336 * __this, Vector3_t31  ___speed, float ___turnSpeed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PhotonTransformViewPositionControl::UpdatePosition(UnityEngine.Vector3)
 Vector3_t31  PhotonTransformViewPositionControl_UpdatePosition_m1756 (PhotonTransformViewPositionControl_t336 * __this, Vector3_t31  ___currentPosition, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PhotonTransformViewPositionControl::GetNetworkPosition()
 Vector3_t31  PhotonTransformViewPositionControl_GetNetworkPosition_m1757 (PhotonTransformViewPositionControl_t336 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PhotonTransformViewPositionControl::GetExtrapolatedPositionOffset()
 Vector3_t31  PhotonTransformViewPositionControl_GetExtrapolatedPositionOffset_m1758 (PhotonTransformViewPositionControl_t336 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformViewPositionControl::OnPhotonSerializeView(UnityEngine.Vector3,PhotonStream,PhotonMessageInfo)
 void PhotonTransformViewPositionControl_OnPhotonSerializeView_m1759 (PhotonTransformViewPositionControl_t336 * __this, Vector3_t31  ___currentPosition, PhotonStream_t209 * ___stream, PhotonMessageInfo_t210 * ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformViewPositionControl::SerializeData(UnityEngine.Vector3,PhotonStream,PhotonMessageInfo)
 void PhotonTransformViewPositionControl_SerializeData_m1760 (PhotonTransformViewPositionControl_t336 * __this, Vector3_t31  ___currentPosition, PhotonStream_t209 * ___stream, PhotonMessageInfo_t210 * ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformViewPositionControl::DeserializeData(PhotonStream,PhotonMessageInfo)
 void PhotonTransformViewPositionControl_DeserializeData_m1761 (PhotonTransformViewPositionControl_t336 * __this, PhotonStream_t209 * ___stream, PhotonMessageInfo_t210 * ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
