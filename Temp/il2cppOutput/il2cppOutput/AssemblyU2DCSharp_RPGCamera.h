#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t56;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// RPGCamera
struct RPGCamera_t214  : public MonoBehaviour_t58
{
	// UnityEngine.Transform RPGCamera::Target
	Transform_t56 * ___Target;
	// System.Single RPGCamera::MaximumDistance
	float ___MaximumDistance;
	// System.Single RPGCamera::MinimumDistance
	float ___MinimumDistance;
	// System.Single RPGCamera::ScrollModifier
	float ___ScrollModifier;
	// System.Single RPGCamera::TurnModifier
	float ___TurnModifier;
	// UnityEngine.Transform RPGCamera::m_CameraTransform
	Transform_t56 * ___m_CameraTransform;
	// UnityEngine.Vector3 RPGCamera::m_LookAtPoint
	Vector3_t31  ___m_LookAtPoint;
	// UnityEngine.Vector3 RPGCamera::m_LocalForwardVector
	Vector3_t31  ___m_LocalForwardVector;
	// System.Single RPGCamera::m_Distance
	float ___m_Distance;
};
