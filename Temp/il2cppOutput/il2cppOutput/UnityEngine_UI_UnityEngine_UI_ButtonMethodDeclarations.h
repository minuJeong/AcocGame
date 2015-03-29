#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Button
struct Button_t539;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t627;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t549;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t545;
// System.Collections.IEnumerator
struct IEnumerator_t60;

// System.Void UnityEngine.UI.Button::.ctor()
 void Button__ctor_m3098 (Button_t539 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
 ButtonClickedEvent_t627 * Button_get_onClick_m3099 (Button_t539 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::set_onClick(UnityEngine.UI.Button/ButtonClickedEvent)
 void Button_set_onClick_m3100 (Button_t539 * __this, ButtonClickedEvent_t627 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::Press()
 void Button_Press_m3101 (Button_t539 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
 void Button_OnPointerClick_m3102 (Button_t539 * __this, PointerEventData_t549 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnSubmit(UnityEngine.EventSystems.BaseEventData)
 void Button_OnSubmit_m3103 (Button_t539 * __this, BaseEventData_t545 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.Button::OnFinishSubmit()
 Object_t * Button_OnFinishSubmit_m3104 (Button_t539 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
