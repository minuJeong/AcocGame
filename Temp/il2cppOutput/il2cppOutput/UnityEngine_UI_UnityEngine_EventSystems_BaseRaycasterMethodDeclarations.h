#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t603;
// UnityEngine.Camera
struct Camera_t204;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t549;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t550;

// System.Void UnityEngine.EventSystems.BaseRaycaster::.ctor()
 void BaseRaycaster__ctor_m3052 (BaseRaycaster_t603 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseRaycaster::Raycast(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
// UnityEngine.Camera UnityEngine.EventSystems.BaseRaycaster::get_eventCamera()
// System.Int32 UnityEngine.EventSystems.BaseRaycaster::get_priority()
 int32_t BaseRaycaster_get_priority_m3053 (BaseRaycaster_t603 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.BaseRaycaster::get_sortOrderPriority()
 int32_t BaseRaycaster_get_sortOrderPriority_m3054 (BaseRaycaster_t603 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.BaseRaycaster::get_renderOrderPriority()
 int32_t BaseRaycaster_get_renderOrderPriority_m3055 (BaseRaycaster_t603 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseRaycaster::OnEnable()
 void BaseRaycaster_OnEnable_m3056 (BaseRaycaster_t603 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseRaycaster::OnDisable()
 void BaseRaycaster_OnDisable_m3057 (BaseRaycaster_t603 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
