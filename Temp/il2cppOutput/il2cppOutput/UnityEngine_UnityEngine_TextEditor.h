#pragma once
#include <stdint.h>
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t680;
// UnityEngine.GUIContent
struct GUIContent_t419;
// UnityEngine.GUIStyle
struct GUIStyle_t138;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t2622;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.TextEditor/DblClickSnapping
#include "UnityEngine_UnityEngine_TextEditor_DblClickSnapping.h"
// UnityEngine.TextEditor
struct TextEditor_t804  : public Object_t
{
	// UnityEngine.TouchScreenKeyboard UnityEngine.TextEditor::keyboardOnScreen
	TouchScreenKeyboard_t680 * ___keyboardOnScreen;
	// System.Int32 UnityEngine.TextEditor::pos
	int32_t ___pos;
	// System.Int32 UnityEngine.TextEditor::selectPos
	int32_t ___selectPos;
	// System.Int32 UnityEngine.TextEditor::controlID
	int32_t ___controlID;
	// UnityEngine.GUIContent UnityEngine.TextEditor::content
	GUIContent_t419 * ___content;
	// UnityEngine.GUIStyle UnityEngine.TextEditor::style
	GUIStyle_t138 * ___style;
	// UnityEngine.Rect UnityEngine.TextEditor::position
	Rect_t55  ___position;
	// System.Boolean UnityEngine.TextEditor::multiline
	bool ___multiline;
	// System.Boolean UnityEngine.TextEditor::hasHorizontalCursorPos
	bool ___hasHorizontalCursorPos;
	// System.Boolean UnityEngine.TextEditor::isPasswordField
	bool ___isPasswordField;
	// System.Boolean UnityEngine.TextEditor::m_HasFocus
	bool ___m_HasFocus;
	// UnityEngine.Vector2 UnityEngine.TextEditor::scrollOffset
	Vector2_t51  ___scrollOffset;
	// System.Boolean UnityEngine.TextEditor::m_TextHeightPotentiallyChanged
	bool ___m_TextHeightPotentiallyChanged;
	// UnityEngine.Vector2 UnityEngine.TextEditor::graphicalCursorPos
	Vector2_t51  ___graphicalCursorPos;
	// UnityEngine.Vector2 UnityEngine.TextEditor::graphicalSelectCursorPos
	Vector2_t51  ___graphicalSelectCursorPos;
	// System.Boolean UnityEngine.TextEditor::m_MouseDragSelectsWholeWords
	bool ___m_MouseDragSelectsWholeWords;
	// System.Int32 UnityEngine.TextEditor::m_DblClickInitPos
	int32_t ___m_DblClickInitPos;
	// UnityEngine.TextEditor/DblClickSnapping UnityEngine.TextEditor::m_DblClickSnap
	uint8_t ___m_DblClickSnap;
	// System.Boolean UnityEngine.TextEditor::m_bJustSelected
	bool ___m_bJustSelected;
	// System.Int32 UnityEngine.TextEditor::m_iAltCursorPos
	int32_t ___m_iAltCursorPos;
	// System.String UnityEngine.TextEditor::oldText
	String_t* ___oldText;
	// System.Int32 UnityEngine.TextEditor::oldPos
	int32_t ___oldPos;
	// System.Int32 UnityEngine.TextEditor::oldSelectPos
	int32_t ___oldSelectPos;
};
struct TextEditor_t804_StaticFields{
	// System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp> UnityEngine.TextEditor::s_Keyactions
	Dictionary_2_t2622 * ___s_Keyactions;
};
