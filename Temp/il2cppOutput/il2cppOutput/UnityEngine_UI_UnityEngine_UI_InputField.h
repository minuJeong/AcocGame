#pragma once
#include <stdint.h>
// System.String
struct String_t;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t680;
// System.Char[]
struct CharU5BU5D_t450;
// UnityEngine.UI.Text
struct Text_t532;
// UnityEngine.UI.Graphic
struct Graphic_t648;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t673;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_t675;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t677;
// UnityEngine.RectTransform
struct RectTransform_t642;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t681;
// UnityEngine.TextGenerator
struct TextGenerator_t682;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t643;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t649;
// UnityEngine.Coroutine
struct Coroutine_t91;
struct Coroutine_t91_marshaled;
// UnityEngine.Event
struct Event_t421;
struct Event_t421_marshaled;
// UnityEngine.UI.Selectable
#include "UnityEngine_UI_UnityEngine_UI_Selectable.h"
// UnityEngine.UI.InputField/ContentType
#include "UnityEngine_UI_UnityEngine_UI_InputField_ContentType.h"
// UnityEngine.UI.InputField/InputType
#include "UnityEngine_UI_UnityEngine_UI_InputField_InputType.h"
// UnityEngine.TouchScreenKeyboardType
#include "UnityEngine_UnityEngine_TouchScreenKeyboardType.h"
// UnityEngine.UI.InputField/LineType
#include "UnityEngine_UI_UnityEngine_UI_InputField_LineType.h"
// UnityEngine.UI.InputField/CharacterValidation
#include "UnityEngine_UI_UnityEngine_UI_InputField_CharacterValidation.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.UI.InputField
struct InputField_t538  : public Selectable_t630
{
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_t532 * ___m_TextComponent;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_t648 * ___m_Placeholder;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	uint16_t ___m_AsteriskChar;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_EndEdit
	SubmitEvent_t673 * ___m_EndEdit;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChange
	OnChangeEvent_t675 * ___m_OnValueChange;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t677 * ___m_OnValidateInput;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_t30  ___m_SelectionColor;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t642 * ___caretRectTrans;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_t681* ___m_CursorVerts;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t682 * ___m_InputTextCache;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_t643 * ___m_CachedInputRenderer;
	// System.Collections.Generic.List`1<UnityEngine.UIVertex> UnityEngine.UI.InputField::m_Vbo
	List_1_t649 * ___m_Vbo;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlickCoroutine
	Coroutine_t91 * ___m_BlickCoroutine;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t91 * ___m_DragCoroutine;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_t421 * ___m_ProcessingEvent;
};
struct InputField_t538_StaticFields{
	// System.Single UnityEngine.UI.InputField::kHScrollSpeed
	float ___kHScrollSpeed;
	// System.Single UnityEngine.UI.InputField::kVScrollSpeed
	float ___kVScrollSpeed;
	// System.String UnityEngine.UI.InputField::kEmailSpecialCharacters
	String_t* ___kEmailSpecialCharacters;
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_t680 * ___m_Keyboard;
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t450* ___kSeparators;
};
