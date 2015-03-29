#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t47;
// UnityEngine.Transform
struct Transform_t56;
// Photon.MonoBehaviour
#include "AssemblyU2DCSharp_Photon_MonoBehaviour.h"
// HighlightOwnedGameObj
struct HighlightOwnedGameObj_t346  : public MonoBehaviour_t174
{
	// UnityEngine.GameObject HighlightOwnedGameObj::PointerPrefab
	GameObject_t47 * ___PointerPrefab;
	// System.Single HighlightOwnedGameObj::Offset
	float ___Offset;
	// UnityEngine.Transform HighlightOwnedGameObj::markerTransform
	Transform_t56 * ___markerTransform;
};
