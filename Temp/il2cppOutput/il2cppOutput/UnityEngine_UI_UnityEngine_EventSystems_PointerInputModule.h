#pragma once
#include <stdint.h>
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct Dictionary_2_t610;
// UnityEngine.EventSystems.PointerInputModule/MouseState
struct MouseState_t609;
// UnityEngine.EventSystems.BaseInputModule
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseInputModule.h"
// UnityEngine.EventSystems.PointerInputModule
struct PointerInputModule_t611  : public BaseInputModule_t544
{
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData> UnityEngine.EventSystems.PointerInputModule::m_PointerData
	Dictionary_2_t610 * ___m_PointerData;
	// UnityEngine.EventSystems.PointerInputModule/MouseState UnityEngine.EventSystems.PointerInputModule::m_MouseState
	MouseState_t609 * ___m_MouseState;
};
