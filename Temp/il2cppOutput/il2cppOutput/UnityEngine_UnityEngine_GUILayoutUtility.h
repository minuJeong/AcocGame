#pragma once
#include <stdint.h>
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
struct Dictionary_2_t2502;
// UnityEngine.GUILayoutUtility/LayoutCache
struct LayoutCache_t2501;
// UnityEngine.GUIStyle
struct GUIStyle_t138;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.GUILayoutUtility
struct GUILayoutUtility_t420  : public Object_t
{
};
struct GUILayoutUtility_t420_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache> UnityEngine.GUILayoutUtility::storedLayouts
	Dictionary_2_t2502 * ___storedLayouts;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache> UnityEngine.GUILayoutUtility::storedWindows
	Dictionary_2_t2502 * ___storedWindows;
	// UnityEngine.GUILayoutUtility/LayoutCache UnityEngine.GUILayoutUtility::current
	LayoutCache_t2501 * ___current;
	// UnityEngine.Rect UnityEngine.GUILayoutUtility::kDummyRect
	Rect_t55  ___kDummyRect;
	// UnityEngine.GUIStyle UnityEngine.GUILayoutUtility::s_SpaceStyle
	GUIStyle_t138 * ___s_SpaceStyle;
};
