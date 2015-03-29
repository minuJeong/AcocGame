#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PhotonTransformViewRotationControl
struct PhotonTransformViewRotationControl_t337;
// PhotonTransformViewRotationModel
struct PhotonTransformViewRotationModel_t334;
// PhotonStream
struct PhotonStream_t209;
// PhotonMessageInfo
struct PhotonMessageInfo_t210;
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"

// System.Void PhotonTransformViewRotationControl::.ctor(PhotonTransformViewRotationModel)
 void PhotonTransformViewRotationControl__ctor_m1763 (PhotonTransformViewRotationControl_t337 * __this, PhotonTransformViewRotationModel_t334 * ___model, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion PhotonTransformViewRotationControl::GetRotation(UnityEngine.Quaternion)
 Quaternion_t110  PhotonTransformViewRotationControl_GetRotation_m1764 (PhotonTransformViewRotationControl_t337 * __this, Quaternion_t110  ___currentRotation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformViewRotationControl::OnPhotonSerializeView(UnityEngine.Quaternion,PhotonStream,PhotonMessageInfo)
 void PhotonTransformViewRotationControl_OnPhotonSerializeView_m1765 (PhotonTransformViewRotationControl_t337 * __this, Quaternion_t110  ___currentRotation, PhotonStream_t209 * ___stream, PhotonMessageInfo_t210 * ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
