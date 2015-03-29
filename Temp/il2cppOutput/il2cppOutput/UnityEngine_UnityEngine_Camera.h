#pragma once
#include <stdint.h>
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t2539;
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_Behaviour.h"
// UnityEngine.Camera
struct Camera_t204  : public Behaviour_t830
{
};
struct Camera_t204_StaticFields{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t2539 * ___onPreCull;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t2539 * ___onPreRender;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t2539 * ___onPostRender;
};
