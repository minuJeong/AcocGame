#pragma once
#include <stdint.h>
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t455;
// UnityEngine.GUIContent
struct GUIContent_t419;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.GUIContent
struct GUIContent_t419  : public Object_t
{
	// System.String UnityEngine.GUIContent::m_Text
	String_t* ___m_Text;
	// UnityEngine.Texture UnityEngine.GUIContent::m_Image
	Texture_t455 * ___m_Image;
	// System.String UnityEngine.GUIContent::m_Tooltip
	String_t* ___m_Tooltip;
};
struct GUIContent_t419_StaticFields{
	// UnityEngine.GUIContent UnityEngine.GUIContent::none
	GUIContent_t419 * ___none;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Text
	GUIContent_t419 * ___s_Text;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Image
	GUIContent_t419 * ___s_Image;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_TextImage
	GUIContent_t419 * ___s_TextImage;
};
