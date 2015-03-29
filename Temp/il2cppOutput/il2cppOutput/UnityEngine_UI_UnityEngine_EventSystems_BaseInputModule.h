#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t550;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t557;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t547;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t545;
// UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviour.h"
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t544  : public UIBehaviour_t548
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.BaseInputModule::m_RaycastResultCache
	List_1_t550 * ___m_RaycastResultCache;
	// UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::m_AxisEventData
	AxisEventData_t557 * ___m_AxisEventData;
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::m_EventSystem
	EventSystem_t547 * ___m_EventSystem;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::m_BaseEventData
	BaseEventData_t545 * ___m_BaseEventData;
};
