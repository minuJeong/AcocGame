#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t56;
// UnityEngine.GameObject
struct GameObject_t47;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// OnJoinInstantiate
struct OnJoinInstantiate_t182  : public MonoBehaviour_t58
{
	// UnityEngine.Transform OnJoinInstantiate::ObjectToInstantiate
	Transform_t56 * ___ObjectToInstantiate;
	// System.Boolean OnJoinInstantiate::InstantiateSceneObjects
	bool ___InstantiateSceneObjects;
	// UnityEngine.GameObject OnJoinInstantiate::newObj
	GameObject_t47 * ___newObj;
};
