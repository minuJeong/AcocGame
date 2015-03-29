#pragma once
#include <stdint.h>
// UnityEngine.GUIStyleState
struct GUIStyleState_t2516;
// UnityEngine.RectOffset
struct RectOffset_t422;
// UnityEngine.Font
struct Font_t373;
// UnityEngine.GUIStyle
struct GUIStyle_t138;
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.GUIStyle
struct GUIStyle_t138  : public Object_t
{
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	IntPtr_t39 ___m_Ptr;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_t2516 * ___m_Normal;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_t2516 * ___m_Hover;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_t2516 * ___m_Active;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_t2516 * ___m_Focused;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_t2516 * ___m_OnNormal;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_t2516 * ___m_OnHover;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_t2516 * ___m_OnActive;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_t2516 * ___m_OnFocused;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_t422 * ___m_Border;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_t422 * ___m_Padding;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_t422 * ___m_Margin;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_t422 * ___m_Overflow;
	// UnityEngine.Font UnityEngine.GUIStyle::m_FontInternal
	Font_t373 * ___m_FontInternal;
};
struct GUIStyle_t138_StaticFields{
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t138 * ___s_None;
};
