#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t56;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t197;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// OnJoinedInstantiate
struct OnJoinedInstantiate_t358  : public MonoBehaviour_t58
{
	// UnityEngine.Transform OnJoinedInstantiate::SpawnPosition
	Transform_t56 * ___SpawnPosition;
	// System.Single OnJoinedInstantiate::PositionOffset
	float ___PositionOffset;
	// UnityEngine.GameObject[] OnJoinedInstantiate::PrefabsToInstantiate
	GameObjectU5BU5D_t197* ___PrefabsToInstantiate;
};
