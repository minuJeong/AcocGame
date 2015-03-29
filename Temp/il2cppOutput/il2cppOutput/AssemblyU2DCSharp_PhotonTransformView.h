#pragma once
#include <stdint.h>
// PhotonTransformViewPositionModel
struct PhotonTransformViewPositionModel_t333;
// PhotonTransformViewRotationModel
struct PhotonTransformViewRotationModel_t334;
// PhotonTransformViewScaleModel
struct PhotonTransformViewScaleModel_t335;
// PhotonTransformViewPositionControl
struct PhotonTransformViewPositionControl_t336;
// PhotonTransformViewRotationControl
struct PhotonTransformViewRotationControl_t337;
// PhotonTransformViewScaleControl
struct PhotonTransformViewScaleControl_t338;
// PhotonView
struct PhotonView_t170;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PhotonTransformView
struct PhotonTransformView_t217  : public MonoBehaviour_t58
{
	// PhotonTransformViewPositionModel PhotonTransformView::m_PositionModel
	PhotonTransformViewPositionModel_t333 * ___m_PositionModel;
	// PhotonTransformViewRotationModel PhotonTransformView::m_RotationModel
	PhotonTransformViewRotationModel_t334 * ___m_RotationModel;
	// PhotonTransformViewScaleModel PhotonTransformView::m_ScaleModel
	PhotonTransformViewScaleModel_t335 * ___m_ScaleModel;
	// PhotonTransformViewPositionControl PhotonTransformView::m_PositionControl
	PhotonTransformViewPositionControl_t336 * ___m_PositionControl;
	// PhotonTransformViewRotationControl PhotonTransformView::m_RotationControl
	PhotonTransformViewRotationControl_t337 * ___m_RotationControl;
	// PhotonTransformViewScaleControl PhotonTransformView::m_ScaleControl
	PhotonTransformViewScaleControl_t338 * ___m_ScaleControl;
	// PhotonView PhotonTransformView::m_PhotonView
	PhotonView_t170 * ___m_PhotonView;
	// System.Boolean PhotonTransformView::m_ReceivedNetworkUpdate
	bool ___m_ReceivedNetworkUpdate;
};
