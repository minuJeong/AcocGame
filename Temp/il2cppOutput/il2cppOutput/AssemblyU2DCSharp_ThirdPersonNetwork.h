#pragma once
#include <stdint.h>
// ThirdPersonCamera
struct ThirdPersonCamera_t226;
// ThirdPersonController
struct ThirdPersonController_t225;
// Photon.MonoBehaviour
#include "AssemblyU2DCSharp_Photon_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// ThirdPersonNetwork
struct ThirdPersonNetwork_t228  : public MonoBehaviour_t174
{
	// ThirdPersonCamera ThirdPersonNetwork::cameraScript
	ThirdPersonCamera_t226 * ___cameraScript;
	// ThirdPersonController ThirdPersonNetwork::controllerScript
	ThirdPersonController_t225 * ___controllerScript;
	// UnityEngine.Vector3 ThirdPersonNetwork::correctPlayerPos
	Vector3_t31  ___correctPlayerPos;
	// UnityEngine.Quaternion ThirdPersonNetwork::correctPlayerRot
	Quaternion_t110  ___correctPlayerRot;
};
