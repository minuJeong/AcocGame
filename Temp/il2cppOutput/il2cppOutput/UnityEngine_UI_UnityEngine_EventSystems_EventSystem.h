#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t543;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t544;
// UnityEngine.GameObject
struct GameObject_t47;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t545;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t546;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t547;
// UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviour.h"
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t547  : public UIBehaviour_t548
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_t543 * ___m_SystemInputModules;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_t544 * ___m_CurrentInputModule;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t47 * ___m_FirstSelected;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t47 * ___m_CurrentSelected;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_LastSelected
	GameObject_t47 * ___m_LastSelected;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_t545 * ___m_DummyData;
};
struct EventSystem_t547_StaticFields{
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t546 * ___s_RaycastComparer;
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::<current>k__BackingField
	EventSystem_t547 * ___U3CcurrentU3Ek__BackingField;
};
