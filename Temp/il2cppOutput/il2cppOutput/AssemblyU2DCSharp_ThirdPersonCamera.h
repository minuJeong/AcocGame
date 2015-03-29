#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t56;
// ThirdPersonController
struct ThirdPersonController_t225;
// UnityEngine.Camera
struct Camera_t204;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// ThirdPersonCamera
struct ThirdPersonCamera_t226  : public MonoBehaviour_t58
{
	// UnityEngine.Transform ThirdPersonCamera::cameraTransform
	Transform_t56 * ___cameraTransform;
	// UnityEngine.Transform ThirdPersonCamera::_target
	Transform_t56 * ____target;
	// System.Single ThirdPersonCamera::distance
	float ___distance;
	// System.Single ThirdPersonCamera::height
	float ___height;
	// System.Single ThirdPersonCamera::angularSmoothLag
	float ___angularSmoothLag;
	// System.Single ThirdPersonCamera::angularMaxSpeed
	float ___angularMaxSpeed;
	// System.Single ThirdPersonCamera::heightSmoothLag
	float ___heightSmoothLag;
	// System.Single ThirdPersonCamera::snapSmoothLag
	float ___snapSmoothLag;
	// System.Single ThirdPersonCamera::snapMaxSpeed
	float ___snapMaxSpeed;
	// System.Single ThirdPersonCamera::clampHeadPositionScreenSpace
	float ___clampHeadPositionScreenSpace;
	// System.Single ThirdPersonCamera::lockCameraTimeout
	float ___lockCameraTimeout;
	// UnityEngine.Vector3 ThirdPersonCamera::headOffset
	Vector3_t31  ___headOffset;
	// UnityEngine.Vector3 ThirdPersonCamera::centerOffset
	Vector3_t31  ___centerOffset;
	// System.Single ThirdPersonCamera::heightVelocity
	float ___heightVelocity;
	// System.Single ThirdPersonCamera::angleVelocity
	float ___angleVelocity;
	// System.Boolean ThirdPersonCamera::snap
	bool ___snap;
	// ThirdPersonController ThirdPersonCamera::controller
	ThirdPersonController_t225 * ___controller;
	// System.Single ThirdPersonCamera::targetHeight
	float ___targetHeight;
	// UnityEngine.Camera ThirdPersonCamera::m_CameraTransformCamera
	Camera_t204 * ___m_CameraTransformCamera;
};
