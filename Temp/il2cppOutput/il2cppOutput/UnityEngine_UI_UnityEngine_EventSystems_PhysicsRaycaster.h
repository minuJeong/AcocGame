#pragma once
#include <stdint.h>
// UnityEngine.Camera
struct Camera_t204;
// System.Comparison`1<UnityEngine.RaycastHit>
struct Comparison_1_t617;
// UnityEngine.EventSystems.BaseRaycaster
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseRaycaster.h"
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"
// UnityEngine.EventSystems.PhysicsRaycaster
struct PhysicsRaycaster_t616  : public BaseRaycaster_t603
{
	// UnityEngine.Camera UnityEngine.EventSystems.PhysicsRaycaster::m_EventCamera
	Camera_t204 * ___m_EventCamera;
	// UnityEngine.LayerMask UnityEngine.EventSystems.PhysicsRaycaster::m_EventMask
	LayerMask_t618  ___m_EventMask;
};
struct PhysicsRaycaster_t616_StaticFields{
	// System.Int32 UnityEngine.EventSystems.PhysicsRaycaster::kNoEventMaskSet
	int32_t ___kNoEventMaskSet;
	// System.Comparison`1<UnityEngine.RaycastHit> UnityEngine.EventSystems.PhysicsRaycaster::<>f__am$cache2
	Comparison_1_t617 * ___U3CU3Ef__am$cache2;
};
