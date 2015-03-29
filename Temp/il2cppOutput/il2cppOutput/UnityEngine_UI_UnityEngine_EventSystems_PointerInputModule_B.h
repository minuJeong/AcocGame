#pragma once
#include <stdint.h>
// UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData
struct MouseButtonEventData_t606;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.EventSystems.PointerEventData/InputButton
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEventData_Inp.h"
// UnityEngine.EventSystems.PointerInputModule/ButtonState
struct ButtonState_t607  : public Object_t
{
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerInputModule/ButtonState::m_Button
	int32_t ___m_Button;
	// UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData UnityEngine.EventSystems.PointerInputModule/ButtonState::m_EventData
	MouseButtonEventData_t606 * ___m_EventData;
};
