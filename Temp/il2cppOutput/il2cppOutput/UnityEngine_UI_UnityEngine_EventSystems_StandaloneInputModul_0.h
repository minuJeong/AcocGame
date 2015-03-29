#pragma once
#include <stdint.h>
// System.String
struct String_t;
// UnityEngine.EventSystems.PointerInputModule
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerInputModule.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.EventSystems.StandaloneInputModule
struct StandaloneInputModule_t613  : public PointerInputModule_t611
{
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_NextAction
	float ___m_NextAction;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_LastMousePosition
	Vector2_t51  ___m_LastMousePosition;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_MousePosition
	Vector2_t51  ___m_MousePosition;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_HorizontalAxis
	String_t* ___m_HorizontalAxis;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_VerticalAxis
	String_t* ___m_VerticalAxis;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_SubmitButton
	String_t* ___m_SubmitButton;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_CancelButton
	String_t* ___m_CancelButton;
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_InputActionsPerSecond
	float ___m_InputActionsPerSecond;
	// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::m_AllowActivationOnMobileDevice
	bool ___m_AllowActivationOnMobileDevice;
};
