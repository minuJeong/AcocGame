#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t47;
// UnityEngine.Camera
struct Camera_t204;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// InputToEvent
struct InputToEvent_t349  : public MonoBehaviour_t58
{
	// UnityEngine.GameObject InputToEvent::lastGo
	GameObject_t47 * ___lastGo;
	// System.Boolean InputToEvent::DetectPointedAtGameObject
	bool ___DetectPointedAtGameObject;
	// UnityEngine.Vector2 InputToEvent::pressedPosition
	Vector2_t51  ___pressedPosition;
	// UnityEngine.Vector2 InputToEvent::currentPos
	Vector2_t51  ___currentPos;
	// System.Boolean InputToEvent::Dragging
	bool ___Dragging;
	// UnityEngine.Camera InputToEvent::m_Camera
	Camera_t204 * ___m_Camera;
};
struct InputToEvent_t349_StaticFields{
	// UnityEngine.Vector3 InputToEvent::inputHitPos
	Vector3_t31  ___inputHitPos;
	// UnityEngine.GameObject InputToEvent::<goPointedAt>k__BackingField
	GameObject_t47 * ___U3CgoPointedAtU3Ek__BackingField;
};
