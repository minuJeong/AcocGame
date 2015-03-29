#pragma once
#include <stdint.h>
// UnityEngine.Rigidbody
struct Rigidbody_t104;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t169;
// Photon.MonoBehaviour
#include "AssemblyU2DCSharp_Photon_MonoBehaviour.h"
// MoveByKeys
struct MoveByKeys_t351  : public MonoBehaviour_t174
{
	// System.Single MoveByKeys::Speed
	float ___Speed;
	// System.Single MoveByKeys::JumpForce
	float ___JumpForce;
	// System.Single MoveByKeys::JumpTimeout
	float ___JumpTimeout;
	// System.Boolean MoveByKeys::isSprite
	bool ___isSprite;
	// System.Single MoveByKeys::jumpingTime
	float ___jumpingTime;
	// UnityEngine.Rigidbody MoveByKeys::body
	Rigidbody_t104 * ___body;
	// UnityEngine.Rigidbody2D MoveByKeys::body2d
	Rigidbody2D_t169 * ___body2d;
};
