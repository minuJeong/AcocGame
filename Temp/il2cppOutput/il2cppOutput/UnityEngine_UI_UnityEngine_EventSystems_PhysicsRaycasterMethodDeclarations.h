#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.PhysicsRaycaster
struct PhysicsRaycaster_t616;
// UnityEngine.Camera
struct Camera_t204;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t549;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t550;
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"

// System.Void UnityEngine.EventSystems.PhysicsRaycaster::.ctor()
 void PhysicsRaycaster__ctor_m3060 (PhysicsRaycaster_t616 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.EventSystems.PhysicsRaycaster::get_eventCamera()
 Camera_t204 * PhysicsRaycaster_get_eventCamera_m3061 (PhysicsRaycaster_t616 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.PhysicsRaycaster::get_depth()
 int32_t PhysicsRaycaster_get_depth_m3062 (PhysicsRaycaster_t616 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.PhysicsRaycaster::get_finalEventMask()
 int32_t PhysicsRaycaster_get_finalEventMask_m3063 (PhysicsRaycaster_t616 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.LayerMask UnityEngine.EventSystems.PhysicsRaycaster::get_eventMask()
 LayerMask_t618  PhysicsRaycaster_get_eventMask_m3064 (PhysicsRaycaster_t616 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PhysicsRaycaster::set_eventMask(UnityEngine.LayerMask)
 void PhysicsRaycaster_set_eventMask_m3065 (PhysicsRaycaster_t616 * __this, LayerMask_t618  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PhysicsRaycaster::Raycast(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
 void PhysicsRaycaster_Raycast_m3066 (PhysicsRaycaster_t616 * __this, PointerEventData_t549 * ___eventData, List_1_t550 * ___resultAppendList, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.PhysicsRaycaster::<Raycast>m__1(UnityEngine.RaycastHit,UnityEngine.RaycastHit)
 int32_t PhysicsRaycaster_U3CRaycastU3Em__1_m3067 (Object_t * __this/* static, unused */, RaycastHit_t397  ___r1, RaycastHit_t397  ___r2, MethodInfo* method) IL2CPP_METHOD_ATTR;
