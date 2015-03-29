#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t56;
// PickupController
struct PickupController_t203;
// UnityEngine.Camera
struct Camera_t204;
// Photon.MonoBehaviour
#include "AssemblyU2DCSharp_Photon_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// PickupCamera
struct PickupCamera_t205  : public MonoBehaviour_t174
{
	// UnityEngine.Transform PickupCamera::cameraTransform
	Transform_t56 * ___cameraTransform;
	// UnityEngine.Transform PickupCamera::_target
	Transform_t56 * ____target;
	// System.Single PickupCamera::distance
	float ___distance;
	// System.Single PickupCamera::height
	float ___height;
	// System.Single PickupCamera::angularSmoothLag
	float ___angularSmoothLag;
	// System.Single PickupCamera::angularMaxSpeed
	float ___angularMaxSpeed;
	// System.Single PickupCamera::heightSmoothLag
	float ___heightSmoothLag;
	// System.Single PickupCamera::snapSmoothLag
	float ___snapSmoothLag;
	// System.Single PickupCamera::snapMaxSpeed
	float ___snapMaxSpeed;
	// System.Single PickupCamera::clampHeadPositionScreenSpace
	float ___clampHeadPositionScreenSpace;
	// System.Single PickupCamera::lockCameraTimeout
	float ___lockCameraTimeout;
	// UnityEngine.Vector3 PickupCamera::headOffset
	Vector3_t31  ___headOffset;
	// UnityEngine.Vector3 PickupCamera::centerOffset
	Vector3_t31  ___centerOffset;
	// System.Single PickupCamera::heightVelocity
	float ___heightVelocity;
	// System.Single PickupCamera::angleVelocity
	float ___angleVelocity;
	// System.Boolean PickupCamera::snap
	bool ___snap;
	// PickupController PickupCamera::controller
	PickupController_t203 * ___controller;
	// System.Single PickupCamera::targetHeight
	float ___targetHeight;
	// UnityEngine.Camera PickupCamera::m_CameraTransformCamera
	Camera_t204 * ___m_CameraTransformCamera;
};
