#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PhotonTransformViewScaleControl
struct PhotonTransformViewScaleControl_t338;
// PhotonTransformViewScaleModel
struct PhotonTransformViewScaleModel_t335;
// PhotonStream
struct PhotonStream_t209;
// PhotonMessageInfo
struct PhotonMessageInfo_t210;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void PhotonTransformViewScaleControl::.ctor(PhotonTransformViewScaleModel)
 void PhotonTransformViewScaleControl__ctor_m1767 (PhotonTransformViewScaleControl_t338 * __this, PhotonTransformViewScaleModel_t335 * ___model, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PhotonTransformViewScaleControl::GetScale(UnityEngine.Vector3)
 Vector3_t31  PhotonTransformViewScaleControl_GetScale_m1768 (PhotonTransformViewScaleControl_t338 * __this, Vector3_t31  ___currentScale, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformViewScaleControl::OnPhotonSerializeView(UnityEngine.Vector3,PhotonStream,PhotonMessageInfo)
 void PhotonTransformViewScaleControl_OnPhotonSerializeView_m1769 (PhotonTransformViewScaleControl_t338 * __this, Vector3_t31  ___currentScale, PhotonStream_t209 * ___stream, PhotonMessageInfo_t210 * ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
