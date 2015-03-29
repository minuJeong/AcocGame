#pragma once
#include <stdint.h>
// UnityEngine.Font
struct Font_t373;
// UnityEngine.GUIStyle
struct GUIStyle_t138;
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t456;
// UnityEngine.GUISettings
struct GUISettings_t2512;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct Dictionary_2_t2514;
// UnityEngine.GUISkin/SkinChangedDelegate
struct SkinChangedDelegate_t2513;
// UnityEngine.GUISkin
struct GUISkin_t137;
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObject.h"
// UnityEngine.GUISkin
struct GUISkin_t137  : public ScriptableObject_t151
{
	// UnityEngine.Font UnityEngine.GUISkin::m_Font
	Font_t373 * ___m_Font;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_box
	GUIStyle_t138 * ___m_box;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_button
	GUIStyle_t138 * ___m_button;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_toggle
	GUIStyle_t138 * ___m_toggle;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_label
	GUIStyle_t138 * ___m_label;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textField
	GUIStyle_t138 * ___m_textField;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textArea
	GUIStyle_t138 * ___m_textArea;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_window
	GUIStyle_t138 * ___m_window;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSlider
	GUIStyle_t138 * ___m_horizontalSlider;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumb
	GUIStyle_t138 * ___m_horizontalSliderThumb;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSlider
	GUIStyle_t138 * ___m_verticalSlider;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumb
	GUIStyle_t138 * ___m_verticalSliderThumb;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbar
	GUIStyle_t138 * ___m_horizontalScrollbar;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarThumb
	GUIStyle_t138 * ___m_horizontalScrollbarThumb;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarLeftButton
	GUIStyle_t138 * ___m_horizontalScrollbarLeftButton;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarRightButton
	GUIStyle_t138 * ___m_horizontalScrollbarRightButton;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbar
	GUIStyle_t138 * ___m_verticalScrollbar;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarThumb
	GUIStyle_t138 * ___m_verticalScrollbarThumb;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarUpButton
	GUIStyle_t138 * ___m_verticalScrollbarUpButton;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarDownButton
	GUIStyle_t138 * ___m_verticalScrollbarDownButton;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_ScrollView
	GUIStyle_t138 * ___m_ScrollView;
	// UnityEngine.GUIStyle[] UnityEngine.GUISkin::m_CustomStyles
	GUIStyleU5BU5D_t456* ___m_CustomStyles;
	// UnityEngine.GUISettings UnityEngine.GUISkin::m_Settings
	GUISettings_t2512 * ___m_Settings;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle> UnityEngine.GUISkin::styles
	Dictionary_2_t2514 * ___styles;
};
struct GUISkin_t137_StaticFields{
	// UnityEngine.GUIStyle UnityEngine.GUISkin::ms_Error
	GUIStyle_t138 * ___ms_Error;
	// UnityEngine.GUISkin/SkinChangedDelegate UnityEngine.GUISkin::m_SkinChanged
	SkinChangedDelegate_t2513 * ___m_SkinChanged;
	// UnityEngine.GUISkin UnityEngine.GUISkin::current
	GUISkin_t137 * ___current;
};
