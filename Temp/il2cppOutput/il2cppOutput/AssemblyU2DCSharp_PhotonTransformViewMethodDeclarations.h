#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PhotonTransformView
struct PhotonTransformView_t217;
// PhotonStream
struct PhotonStream_t209;
// PhotonMessageInfo
struct PhotonMessageInfo_t210;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void PhotonTransformView::.ctor()
 void PhotonTransformView__ctor_m1744 (PhotonTransformView_t217 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformView::Awake()
 void PhotonTransformView_Awake_m1745 (PhotonTransformView_t217 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformView::Update()
 void PhotonTransformView_Update_m1746 (PhotonTransformView_t217 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformView::UpdatePosition()
 void PhotonTransformView_UpdatePosition_m1747 (PhotonTransformView_t217 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformView::UpdateRotation()
 void PhotonTransformView_UpdateRotation_m1748 (PhotonTransformView_t217 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformView::UpdateScale()
 void PhotonTransformView_UpdateScale_m1749 (PhotonTransformView_t217 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformView::SetSynchronizedValues(UnityEngine.Vector3,System.Single)
 void PhotonTransformView_SetSynchronizedValues_m1750 (PhotonTransformView_t217 * __this, Vector3_t31  ___speed, float ___turnSpeed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformView::OnPhotonSerializeView(PhotonStream,PhotonMessageInfo)
 void PhotonTransformView_OnPhotonSerializeView_m1751 (PhotonTransformView_t217 * __this, PhotonStream_t209 * ___stream, PhotonMessageInfo_t210 * ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformView::DoDrawEstimatedPositionError()
 void PhotonTransformView_DoDrawEstimatedPositionError_m1752 (PhotonTransformView_t217 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
