#pragma once
#include <stdint.h>
// UnityEngine.CharacterController
struct CharacterController_t216;
// UnityEngine.Collider
struct Collider_t200;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.ControllerColliderHit
struct ControllerColliderHit_t211  : public Object_t
{
	// UnityEngine.CharacterController UnityEngine.ControllerColliderHit::m_Controller
	CharacterController_t216 * ___m_Controller;
	// UnityEngine.Collider UnityEngine.ControllerColliderHit::m_Collider
	Collider_t200 * ___m_Collider;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_Point
	Vector3_t31  ___m_Point;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_Normal
	Vector3_t31  ___m_Normal;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_MoveDirection
	Vector3_t31  ___m_MoveDirection;
	// System.Single UnityEngine.ControllerColliderHit::m_MoveLength
	float ___m_MoveLength;
	// System.Int32 UnityEngine.ControllerColliderHit::m_Push
	int32_t ___m_Push;
};
