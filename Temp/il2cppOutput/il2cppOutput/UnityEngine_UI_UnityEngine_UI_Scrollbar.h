#pragma once
#include <stdint.h>
// UnityEngine.RectTransform
struct RectTransform_t642;
// UnityEngine.UI.Scrollbar/ScrollEvent
struct ScrollEvent_t689;
// UnityEngine.Coroutine
struct Coroutine_t91;
struct Coroutine_t91_marshaled;
// UnityEngine.UI.Selectable
#include "UnityEngine_UI_UnityEngine_UI_Selectable.h"
// UnityEngine.UI.Scrollbar/Direction
#include "UnityEngine_UI_UnityEngine_UI_Scrollbar_Direction.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.DrivenRectTransformTracker
#include "UnityEngine_UnityEngine_DrivenRectTransformTracker.h"
// UnityEngine.UI.Scrollbar
struct Scrollbar_t692  : public Selectable_t630
{
	// UnityEngine.RectTransform UnityEngine.UI.Scrollbar::m_HandleRect
	RectTransform_t642 * ___m_HandleRect;
	// UnityEngine.UI.Scrollbar/Direction UnityEngine.UI.Scrollbar::m_Direction
	int32_t ___m_Direction;
	// System.Single UnityEngine.UI.Scrollbar::m_Value
	float ___m_Value;
	// System.Single UnityEngine.UI.Scrollbar::m_Size
	float ___m_Size;
	// System.Int32 UnityEngine.UI.Scrollbar::m_NumberOfSteps
	int32_t ___m_NumberOfSteps;
	// UnityEngine.UI.Scrollbar/ScrollEvent UnityEngine.UI.Scrollbar::m_OnValueChanged
	ScrollEvent_t689 * ___m_OnValueChanged;
	// UnityEngine.RectTransform UnityEngine.UI.Scrollbar::m_ContainerRect
	RectTransform_t642 * ___m_ContainerRect;
	// UnityEngine.Vector2 UnityEngine.UI.Scrollbar::m_Offset
	Vector2_t51  ___m_Offset;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Scrollbar::m_Tracker
	DrivenRectTransformTracker_t694  ___m_Tracker;
	// UnityEngine.Coroutine UnityEngine.UI.Scrollbar::m_PointerDownRepeat
	Coroutine_t91 * ___m_PointerDownRepeat;
	// System.Boolean UnityEngine.UI.Scrollbar::isPointerDownAndNotDragging
	bool ___isPointerDownAndNotDragging;
};
