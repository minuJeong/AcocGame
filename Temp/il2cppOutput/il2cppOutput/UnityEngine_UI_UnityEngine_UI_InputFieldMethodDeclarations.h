#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.InputField
struct InputField_t538;
// UnityEngine.TextGenerator
struct TextGenerator_t682;
// System.String
struct String_t;
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
// System.Collections.IEnumerator
struct IEnumerator_t60;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t549;
// UnityEngine.Event
struct Event_t421;
struct Event_t421_marshaled;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t545;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t649;
// UnityEngine.UI.InputField/ContentType[]
struct ContentTypeU5BU5D_t683;
// UnityEngine.Transform
struct Transform_t56;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.UI.InputField/ContentType
#include "UnityEngine_UI_UnityEngine_UI_InputField_ContentType.h"
// UnityEngine.UI.InputField/LineType
#include "UnityEngine_UI_UnityEngine_UI_InputField_LineType.h"
// UnityEngine.UI.InputField/InputType
#include "UnityEngine_UI_UnityEngine_UI_InputField_InputType.h"
// UnityEngine.TouchScreenKeyboardType
#include "UnityEngine_UnityEngine_TouchScreenKeyboardType.h"
// UnityEngine.UI.InputField/CharacterValidation
#include "UnityEngine_UI_UnityEngine_UI_InputField_CharacterValidation.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.UI.InputField/EditState
#include "UnityEngine_UI_UnityEngine_UI_InputField_EditState.h"
// UnityEngine.UI.CanvasUpdate
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate.h"
// UnityEngine.UI.Selectable/SelectionState
#include "UnityEngine_UI_UnityEngine_UI_Selectable_SelectionState.h"

// System.Void UnityEngine.UI.InputField::.ctor()
 void InputField__ctor_m3300 (InputField_t538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::.cctor()
 void InputField__cctor_m3301 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextGenerator UnityEngine.UI.InputField::get_cachedInputTextGenerator()
 TextGenerator_t682 * InputField_get_cachedInputTextGenerator_m3302 (InputField_t538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_shouldHideMobileInput(System.Boolean)
 void InputField_set_shouldHideMobileInput_m3303 (InputField_t538 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::get_shouldHideMobileInput()
 bool InputField_get_shouldHideMobileInput_m3304 (InputField_t538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.UI.InputField::get_text()
 String_t* InputField_get_text_m3305 (InputField_t538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_text(System.String)
 void InputField_set_text_m3306 (InputField_t538 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::get_isFocused()
 bool InputField_get_isFocused_m3307 (InputField_t538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.InputField::get_caretBlinkRate()
 float InputField_get_caretBlinkRate_m3308 (InputField_t538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_caretBlinkRate(System.Single)
 void InputField_set_caretBlinkRate_m3309 (InputField_t538 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Text UnityEngine.UI.InputField::get_textComponent()
 Text_t532 * InputField_get_textComponent_m3310 (InputField_t538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_textComponent(UnityEngine.UI.Text)
 void InputField_set_textComponent_m3311 (InputField_t538 * __this, Text_t532 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Graphic UnityEngine.UI.InputField::get_placeholder()
 Graphic_t648 * InputField_get_placeholder_m3312 (InputField_t538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_placeholder(UnityEngine.UI.Graphic)
 void InputField_set_placeholder_m3313 (InputField_t538 * __this, Graphic_t648 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.UI.InputField::get_selectionColor()
 Color_t30  InputField_get_selectionColor_m3314 (InputField_t538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_selectionColor(UnityEngine.Color)
 void InputField_set_selectionColor_m3315 (InputField_t538 * __this, Color_t30  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::get_onEndEdit()
 SubmitEvent_t673 * InputField_get_onEndEdit_m3316 (InputField_t538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_onEndEdit(UnityEngine.UI.InputField/SubmitEvent)
 void InputField_set_onEndEdit_m3317 (InputField_t538 * __this, SubmitEvent_t673 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::get_onValueChange()
 OnChangeEvent_t675 * InputField_get_onValueChange_m3318 (InputField_t538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_onValueChange(UnityEngine.UI.InputField/OnChangeEvent)
 void InputField_set_onValueChange_m3319 (InputField_t538 * __this, OnChangeEvent_t675 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::get_onValidateInput()
 OnValidateInput_t677 * InputField_get_onValidateInput_m3320 (InputField_t538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_onValidateInput(UnityEngine.UI.InputField/OnValidateInput)
 void InputField_set_onValidateInput_m3321 (InputField_t538 * __this, OnValidateInput_t677 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::get_characterLimit()
 int32_t InputField_get_characterLimit_m3322 (InputField_t538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_characterLimit(System.Int32)
 void InputField_set_characterLimit_m3323 (InputField_t538 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::get_contentType()
 int32_t InputField_get_contentType_m3324 (InputField_t538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_contentType(UnityEngine.UI.InputField/ContentType)
 void InputField_set_contentType_m3325 (InputField_t538 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::get_lineType()
 int32_t InputField_get_lineType_m3326 (InputField_t538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_lineType(UnityEngine.UI.InputField/LineType)
 void InputField_set_lineType_m3327 (InputField_t538 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::get_inputType()
 int32_t InputField_get_inputType_m3328 (InputField_t538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_inputType(UnityEngine.UI.InputField/InputType)
 void InputField_set_inputType_m3329 (InputField_t538 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::get_keyboardType()
 int32_t InputField_get_keyboardType_m3330 (InputField_t538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_keyboardType(UnityEngine.TouchScreenKeyboardType)
 void InputField_set_keyboardType_m3331 (InputField_t538 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::get_characterValidation()
 int32_t InputField_get_characterValidation_m3332 (InputField_t538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_characterValidation(UnityEngine.UI.InputField/CharacterValidation)
 void InputField_set_characterValidation_m3333 (InputField_t538 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::get_multiLine()
 bool InputField_get_multiLine_m3334 (InputField_t538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.UI.InputField::get_asteriskChar()
 uint16_t InputField_get_asteriskChar_m3335 (InputField_t538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_asteriskChar(System.Char)
 void InputField_set_asteriskChar_m3336 (InputField_t538 * __this, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::get_wasCanceled()
 bool InputField_get_wasCanceled_m3337 (InputField_t538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::ClampPos(System.Int32&)
 void InputField_ClampPos_m3338 (InputField_t538 * __this, int32_t* ___pos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::get_caretPosition()
 int32_t InputField_get_caretPosition_m3339 (InputField_t538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_caretPosition(System.Int32)
 void InputField_set_caretPosition_m3340 (InputField_t538 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::get_caretSelectPos()
 int32_t InputField_get_caretSelectPos_m3341 (InputField_t538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_caretSelectPos(System.Int32)
 void InputField_set_caretSelectPos_m3342 (InputField_t538 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::get_hasSelection()
 bool InputField_get_hasSelection_m3343 (InputField_t538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnEnable()
 void InputField_OnEnable_m3344 (InputField_t538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnDisable()
 void InputField_OnDisable_m3345 (InputField_t538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.InputField::CaretBlink()
 Object_t * InputField_CaretBlink_m3346 (InputField_t538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SetCaretVisible()
 void InputField_SetCaretVisible_m3347 (InputField_t538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SetCaretActive()
 void InputField_SetCaretActive_m3348 (InputField_t538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnFocus()
 void InputField_OnFocus_m3349 (InputField_t538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SelectAll()
 void InputField_SelectAll_m3350 (InputField_t538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveTextEnd(System.Boolean)
 void InputField_MoveTextEnd_m3351 (InputField_t538 * __this, bool ___shift, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveTextStart(System.Boolean)
 void InputField_MoveTextStart_m3352 (InputField_t538 * __this, bool ___shift, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.UI.InputField::get_clipboard()
 String_t* InputField_get_clipboard_m3353 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_clipboard(System.String)
 void InputField_set_clipboard_m3354 (Object_t * __this/* static, unused */, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::InPlaceEditing()
 bool InputField_InPlaceEditing_m3355 (InputField_t538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::LateUpdate()
 void InputField_LateUpdate_m3356 (InputField_t538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.InputField::ScreenToLocal(UnityEngine.Vector2)
 Vector2_t51  InputField_ScreenToLocal_m3357 (InputField_t538 * __this, Vector2_t51  ___screen, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::GetUnclampedCharacterLineFromPosition(UnityEngine.Vector2,UnityEngine.TextGenerator)
 int32_t InputField_GetUnclampedCharacterLineFromPosition_m3358 (InputField_t538 * __this, Vector2_t51  ___pos, TextGenerator_t682 * ___generator, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::GetCharacterIndexFromPosition(UnityEngine.Vector2)
 int32_t InputField_GetCharacterIndexFromPosition_m3359 (InputField_t538 * __this, Vector2_t51  ___pos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::MayDrag(UnityEngine.EventSystems.PointerEventData)
 bool InputField_MayDrag_m3360 (InputField_t538 * __this, PointerEventData_t549 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
 void InputField_OnBeginDrag_m3361 (InputField_t538 * __this, PointerEventData_t549 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnDrag(UnityEngine.EventSystems.PointerEventData)
 void InputField_OnDrag_m3362 (InputField_t538 * __this, PointerEventData_t549 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.InputField::MouseDragOutsideRect(UnityEngine.EventSystems.PointerEventData)
 Object_t * InputField_MouseDragOutsideRect_m3363 (InputField_t538 * __this, PointerEventData_t549 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
 void InputField_OnEndDrag_m3364 (InputField_t538 * __this, PointerEventData_t549 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
 void InputField_OnPointerDown_m3365 (InputField_t538 * __this, PointerEventData_t549 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/EditState UnityEngine.UI.InputField::KeyPressed(UnityEngine.Event)
 int32_t InputField_KeyPressed_m3366 (InputField_t538 * __this, Event_t421 * ___evt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::IsValidChar(System.Char)
 bool InputField_IsValidChar_m3367 (InputField_t538 * __this, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::ProcessEvent(UnityEngine.Event)
 void InputField_ProcessEvent_m3368 (InputField_t538 * __this, Event_t421 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnUpdateSelected(UnityEngine.EventSystems.BaseEventData)
 void InputField_OnUpdateSelected_m3369 (InputField_t538 * __this, BaseEventData_t545 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.UI.InputField::GetSelectedString()
 String_t* InputField_GetSelectedString_m3370 (InputField_t538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::FindtNextWordBegin()
 int32_t InputField_FindtNextWordBegin_m3371 (InputField_t538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveRight(System.Boolean,System.Boolean)
 void InputField_MoveRight_m3372 (InputField_t538 * __this, bool ___shift, bool ___ctrl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::FindtPrevWordBegin()
 int32_t InputField_FindtPrevWordBegin_m3373 (InputField_t538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveLeft(System.Boolean,System.Boolean)
 void InputField_MoveLeft_m3374 (InputField_t538 * __this, bool ___shift, bool ___ctrl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::DetermineCharacterLine(System.Int32,UnityEngine.TextGenerator)
 int32_t InputField_DetermineCharacterLine_m3375 (InputField_t538 * __this, int32_t ___charPos, TextGenerator_t682 * ___generator, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::LineUpCharacterPosition(System.Int32,System.Boolean)
 int32_t InputField_LineUpCharacterPosition_m3376 (InputField_t538 * __this, int32_t ___originalPos, bool ___goToFirstChar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::LineDownCharacterPosition(System.Int32,System.Boolean)
 int32_t InputField_LineDownCharacterPosition_m3377 (InputField_t538 * __this, int32_t ___originalPos, bool ___goToLastChar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveDown(System.Boolean)
 void InputField_MoveDown_m3378 (InputField_t538 * __this, bool ___shift, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveDown(System.Boolean,System.Boolean)
 void InputField_MoveDown_m3379 (InputField_t538 * __this, bool ___shift, bool ___goToLastChar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveUp(System.Boolean)
 void InputField_MoveUp_m3380 (InputField_t538 * __this, bool ___shift, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveUp(System.Boolean,System.Boolean)
 void InputField_MoveUp_m3381 (InputField_t538 * __this, bool ___shift, bool ___goToFirstChar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::Delete()
 void InputField_Delete_m3382 (InputField_t538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::ForwardSpace()
 void InputField_ForwardSpace_m3383 (InputField_t538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::Backspace()
 void InputField_Backspace_m3384 (InputField_t538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::Insert(System.Char)
 void InputField_Insert_m3385 (InputField_t538 * __this, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SendOnValueChangedAndUpdateLabel()
 void InputField_SendOnValueChangedAndUpdateLabel_m3386 (InputField_t538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SendOnValueChanged()
 void InputField_SendOnValueChanged_m3387 (InputField_t538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SendOnSubmit()
 void InputField_SendOnSubmit_m3388 (InputField_t538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::Append(System.String)
 void InputField_Append_m3389 (InputField_t538 * __this, String_t* ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::Append(System.Char)
 void InputField_Append_m3390 (InputField_t538 * __this, uint16_t ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::UpdateLabel()
 void InputField_UpdateLabel_m3391 (InputField_t538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::IsSelectionVisible()
 bool InputField_IsSelectionVisible_m3392 (InputField_t538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::GetLineStartPosition(UnityEngine.TextGenerator,System.Int32)
 int32_t InputField_GetLineStartPosition_m3393 (Object_t * __this/* static, unused */, TextGenerator_t682 * ___gen, int32_t ___line, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::GetLineEndPosition(UnityEngine.TextGenerator,System.Int32)
 int32_t InputField_GetLineEndPosition_m3394 (Object_t * __this/* static, unused */, TextGenerator_t682 * ___gen, int32_t ___line, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SetDrawRangeToContainCaretPosition(UnityEngine.TextGenerator,System.Int32,System.Int32&,System.Int32&)
 void InputField_SetDrawRangeToContainCaretPosition_m3395 (InputField_t538 * __this, TextGenerator_t682 * ___gen, int32_t ___caretPos, int32_t* ___drawStart, int32_t* ___drawEnd, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MarkGeometryAsDirty()
 void InputField_MarkGeometryAsDirty_m3396 (InputField_t538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::Rebuild(UnityEngine.UI.CanvasUpdate)
 void InputField_Rebuild_m3397 (InputField_t538 * __this, int32_t ___update, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::UpdateGeometry()
 void InputField_UpdateGeometry_m3398 (InputField_t538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::AssignPositioningIfNeeded()
 void InputField_AssignPositioningIfNeeded_m3399 (InputField_t538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnFillVBO(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
 void InputField_OnFillVBO_m3400 (InputField_t538 * __this, List_1_t649 * ___vbo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::GenerateCursor(System.Collections.Generic.List`1<UnityEngine.UIVertex>,UnityEngine.Vector2)
 void InputField_GenerateCursor_m3401 (InputField_t538 * __this, List_1_t649 * ___vbo, Vector2_t51  ___roundingOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::CreateCursorVerts()
 void InputField_CreateCursorVerts_m3402 (InputField_t538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.InputField::SumLineHeights(System.Int32,UnityEngine.TextGenerator)
 float InputField_SumLineHeights_m3403 (InputField_t538 * __this, int32_t ___endLine, TextGenerator_t682 * ___generator, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::GenerateHightlight(System.Collections.Generic.List`1<UnityEngine.UIVertex>,UnityEngine.Vector2)
 void InputField_GenerateHightlight_m3404 (InputField_t538 * __this, List_1_t649 * ___vbo, Vector2_t51  ___roundingOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.UI.InputField::Validate(System.String,System.Int32,System.Char)
 uint16_t InputField_Validate_m3405 (InputField_t538 * __this, String_t* ___text, int32_t ___pos, uint16_t ___ch, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::ActivateInputField()
 void InputField_ActivateInputField_m3406 (InputField_t538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::ActivateInputFieldInternal()
 void InputField_ActivateInputFieldInternal_m3407 (InputField_t538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnSelect(UnityEngine.EventSystems.BaseEventData)
 void InputField_OnSelect_m3408 (InputField_t538 * __this, BaseEventData_t545 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
 void InputField_OnPointerClick_m3409 (InputField_t538 * __this, PointerEventData_t549 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::DeactivateInputField()
 void InputField_DeactivateInputField_m3410 (InputField_t538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnDeselect(UnityEngine.EventSystems.BaseEventData)
 void InputField_OnDeselect_m3411 (InputField_t538 * __this, BaseEventData_t545 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnSubmit(UnityEngine.EventSystems.BaseEventData)
 void InputField_OnSubmit_m3412 (InputField_t538 * __this, BaseEventData_t545 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::EnforceContentType()
 void InputField_EnforceContentType_m3413 (InputField_t538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SetToCustomIfContentTypeIsNot(UnityEngine.UI.InputField/ContentType[])
 void InputField_SetToCustomIfContentTypeIsNot_m3414 (InputField_t538 * __this, ContentTypeU5BU5D_t683* ___allowedContentTypes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SetToCustom()
 void InputField_SetToCustom_m3415 (InputField_t538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::DoStateTransition(UnityEngine.UI.Selectable/SelectionState,System.Boolean)
 void InputField_DoStateTransition_m3416 (InputField_t538 * __this, int32_t ___state, bool ___instant, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::UnityEngine.UI.ICanvasElement.IsDestroyed()
 bool InputField_UnityEngine_UI_ICanvasElement_IsDestroyed_m3417 (InputField_t538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.InputField::UnityEngine.UI.ICanvasElement.get_transform()
 Transform_t56 * InputField_UnityEngine_UI_ICanvasElement_get_transform_m3418 (InputField_t538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
