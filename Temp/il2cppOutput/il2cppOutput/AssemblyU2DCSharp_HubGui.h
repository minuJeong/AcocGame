#pragma once
#include <stdint.h>
// UnityEngine.GUISkin
struct GUISkin_t137;
// System.String
struct String_t;
// UnityEngine.GUIStyle
struct GUIStyle_t138;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// HubGui/DemoBtn
#include "AssemblyU2DCSharp_HubGui_DemoBtn.h"
// HubGui
struct HubGui_t191  : public MonoBehaviour_t58
{
	// UnityEngine.GUISkin HubGui::Skin
	GUISkin_t137 * ___Skin;
	// UnityEngine.Vector2 HubGui::scrollPos
	Vector2_t51  ___scrollPos;
	// System.String HubGui::demoDescription
	String_t* ___demoDescription;
	// HubGui/DemoBtn HubGui::demoBtn
	DemoBtn_t190  ___demoBtn;
	// HubGui/DemoBtn HubGui::webLink
	DemoBtn_t190  ___webLink;
	// UnityEngine.GUIStyle HubGui::m_Headline
	GUIStyle_t138 * ___m_Headline;
};
