#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t547;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t544;
// UnityEngine.GameObject
struct GameObject_t47;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t545;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t549;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t550;
// System.String
struct String_t;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void UnityEngine.EventSystems.EventSystem::.ctor()
 void EventSystem__ctor_m2798 (EventSystem_t547 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::.cctor()
 void EventSystem__cctor_m2799 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
 EventSystem_t547 * EventSystem_get_current_m2800 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::set_current(UnityEngine.EventSystems.EventSystem)
 void EventSystem_set_current_m2801 (Object_t * __this/* static, unused */, EventSystem_t547 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.EventSystem::get_sendNavigationEvents()
 bool EventSystem_get_sendNavigationEvents_m2802 (EventSystem_t547 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::set_sendNavigationEvents(System.Boolean)
 void EventSystem_set_sendNavigationEvents_m2803 (EventSystem_t547 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.EventSystem::get_pixelDragThreshold()
 int32_t EventSystem_get_pixelDragThreshold_m2804 (EventSystem_t547 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::set_pixelDragThreshold(System.Int32)
 void EventSystem_set_pixelDragThreshold_m2805 (EventSystem_t547 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::get_currentInputModule()
 BaseInputModule_t544 * EventSystem_get_currentInputModule_m2806 (EventSystem_t547 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_firstSelectedGameObject()
 GameObject_t47 * EventSystem_get_firstSelectedGameObject_m2807 (EventSystem_t547 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::set_firstSelectedGameObject(UnityEngine.GameObject)
 void EventSystem_set_firstSelectedGameObject_m2808 (EventSystem_t547 * __this, GameObject_t47 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_currentSelectedGameObject()
 GameObject_t47 * EventSystem_get_currentSelectedGameObject_m2809 (EventSystem_t547 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_lastSelectedGameObject()
 GameObject_t47 * EventSystem_get_lastSelectedGameObject_m2810 (EventSystem_t547 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::UpdateModules()
 void EventSystem_UpdateModules_m2811 (EventSystem_t547 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.EventSystem::get_alreadySelecting()
 bool EventSystem_get_alreadySelecting_m2812 (EventSystem_t547 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::SetSelectedGameObject(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData)
 void EventSystem_SetSelectedGameObject_m2813 (EventSystem_t547 * __this, GameObject_t47 * ___selected, BaseEventData_t545 * ___pointer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::get_baseEventDataCache()
 BaseEventData_t545 * EventSystem_get_baseEventDataCache_m2814 (EventSystem_t547 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::SetSelectedGameObject(UnityEngine.GameObject)
 void EventSystem_SetSelectedGameObject_m2815 (EventSystem_t547 * __this, GameObject_t47 * ___selected, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.EventSystem::RaycastComparer(UnityEngine.EventSystems.RaycastResult,UnityEngine.EventSystems.RaycastResult)
 int32_t EventSystem_RaycastComparer_m2816 (Object_t * __this/* static, unused */, RaycastResult_t551  ___lhs, RaycastResult_t551  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::RaycastAll(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
 void EventSystem_RaycastAll_m2817 (EventSystem_t547 * __this, PointerEventData_t549 * ___eventData, List_1_t550 * ___raycastResults, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.EventSystem::IsPointerOverGameObject()
 bool EventSystem_IsPointerOverGameObject_m2818 (EventSystem_t547 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.EventSystem::IsPointerOverGameObject(System.Int32)
 bool EventSystem_IsPointerOverGameObject_m2819 (EventSystem_t547 * __this, int32_t ___pointerId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::OnEnable()
 void EventSystem_OnEnable_m2820 (EventSystem_t547 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::OnDisable()
 void EventSystem_OnDisable_m2821 (EventSystem_t547 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::TickModules()
 void EventSystem_TickModules_m2822 (EventSystem_t547 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::Update()
 void EventSystem_Update_m2823 (EventSystem_t547 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::ChangeEventModule(UnityEngine.EventSystems.BaseInputModule)
 void EventSystem_ChangeEventModule_m2824 (EventSystem_t547 * __this, BaseInputModule_t544 * ___module, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.EventSystem::ToString()
 String_t* EventSystem_ToString_m2825 (EventSystem_t547 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
