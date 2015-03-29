#pragma once
#include <stdint.h>
// System.String
struct String_t;
// ChatGui
struct ChatGui_t183;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// NamePickGui
struct NamePickGui_t184  : public MonoBehaviour_t58
{
	// UnityEngine.Vector2 NamePickGui::GuiSize
	Vector2_t51  ___GuiSize;
	// System.String NamePickGui::InputLine
	String_t* ___InputLine;
	// UnityEngine.Rect NamePickGui::guiCenteredRect
	Rect_t55  ___guiCenteredRect;
	// ChatGui NamePickGui::chatComponent
	ChatGui_t183 * ___chatComponent;
	// System.String NamePickGui::helpText
	String_t* ___helpText;
};
