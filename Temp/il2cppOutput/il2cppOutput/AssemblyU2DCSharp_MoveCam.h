#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t56;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// MoveCam
struct MoveCam_t192  : public MonoBehaviour_t58
{
	// UnityEngine.Vector3 MoveCam::originalPos
	Vector3_t31  ___originalPos;
	// UnityEngine.Vector3 MoveCam::randomPos
	Vector3_t31  ___randomPos;
	// UnityEngine.Transform MoveCam::camTransform
	Transform_t56 * ___camTransform;
	// UnityEngine.Transform MoveCam::lookAt
	Transform_t56 * ___lookAt;
};
