#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Scrollbar
struct Scrollbar_t692;
// UnityEngine.RectTransform
struct RectTransform_t642;
// UnityEngine.UI.Scrollbar/ScrollEvent
struct ScrollEvent_t689;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t549;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t557;
// UnityEngine.UI.Selectable
struct Selectable_t630;
// UnityEngine.Transform
struct Transform_t56;
// UnityEngine.UI.Scrollbar/Direction
#include "UnityEngine_UI_UnityEngine_UI_Scrollbar_Direction.h"
// UnityEngine.UI.Scrollbar/Axis
#include "UnityEngine_UI_UnityEngine_UI_Scrollbar_Axis.h"
// UnityEngine.UI.CanvasUpdate
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate.h"

// System.Void UnityEngine.UI.Scrollbar::.ctor()
 void Scrollbar__ctor_m3462 (Scrollbar_t692 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Scrollbar::get_handleRect()
 RectTransform_t642 * Scrollbar_get_handleRect_m3463 (Scrollbar_t692 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::set_handleRect(UnityEngine.RectTransform)
 void Scrollbar_set_handleRect_m3464 (Scrollbar_t692 * __this, RectTransform_t642 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Scrollbar/Direction UnityEngine.UI.Scrollbar::get_direction()
 int32_t Scrollbar_get_direction_m3465 (Scrollbar_t692 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::set_direction(UnityEngine.UI.Scrollbar/Direction)
 void Scrollbar_set_direction_m3466 (Scrollbar_t692 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Scrollbar::get_value()
 float Scrollbar_get_value_m3467 (Scrollbar_t692 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::set_value(System.Single)
 void Scrollbar_set_value_m3468 (Scrollbar_t692 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Scrollbar::get_size()
 float Scrollbar_get_size_m3469 (Scrollbar_t692 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::set_size(System.Single)
 void Scrollbar_set_size_m3470 (Scrollbar_t692 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Scrollbar::get_numberOfSteps()
 int32_t Scrollbar_get_numberOfSteps_m3471 (Scrollbar_t692 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::set_numberOfSteps(System.Int32)
 void Scrollbar_set_numberOfSteps_m3472 (Scrollbar_t692 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Scrollbar/ScrollEvent UnityEngine.UI.Scrollbar::get_onValueChanged()
 ScrollEvent_t689 * Scrollbar_get_onValueChanged_m3473 (Scrollbar_t692 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::set_onValueChanged(UnityEngine.UI.Scrollbar/ScrollEvent)
 void Scrollbar_set_onValueChanged_m3474 (Scrollbar_t692 * __this, ScrollEvent_t689 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Scrollbar::get_stepSize()
 float Scrollbar_get_stepSize_m3475 (Scrollbar_t692 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::Rebuild(UnityEngine.UI.CanvasUpdate)
 void Scrollbar_Rebuild_m3476 (Scrollbar_t692 * __this, int32_t ___executing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnEnable()
 void Scrollbar_OnEnable_m3477 (Scrollbar_t692 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnDisable()
 void Scrollbar_OnDisable_m3478 (Scrollbar_t692 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::UpdateCachedReferences()
 void Scrollbar_UpdateCachedReferences_m3479 (Scrollbar_t692 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::Set(System.Single)
 void Scrollbar_Set_m3480 (Scrollbar_t692 * __this, float ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::Set(System.Single,System.Boolean)
 void Scrollbar_Set_m3481 (Scrollbar_t692 * __this, float ___input, bool ___sendCallback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnRectTransformDimensionsChange()
 void Scrollbar_OnRectTransformDimensionsChange_m3482 (Scrollbar_t692 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Scrollbar/Axis UnityEngine.UI.Scrollbar::get_axis()
 int32_t Scrollbar_get_axis_m3483 (Scrollbar_t692 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Scrollbar::get_reverseValue()
 bool Scrollbar_get_reverseValue_m3484 (Scrollbar_t692 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::UpdateVisuals()
 void Scrollbar_UpdateVisuals_m3485 (Scrollbar_t692 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::UpdateDrag(UnityEngine.EventSystems.PointerEventData)
 void Scrollbar_UpdateDrag_m3486 (Scrollbar_t692 * __this, PointerEventData_t549 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Scrollbar::MayDrag(UnityEngine.EventSystems.PointerEventData)
 bool Scrollbar_MayDrag_m3487 (Scrollbar_t692 * __this, PointerEventData_t549 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
 void Scrollbar_OnBeginDrag_m3488 (Scrollbar_t692 * __this, PointerEventData_t549 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnDrag(UnityEngine.EventSystems.PointerEventData)
 void Scrollbar_OnDrag_m3489 (Scrollbar_t692 * __this, PointerEventData_t549 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
 void Scrollbar_OnPointerDown_m3490 (Scrollbar_t692 * __this, PointerEventData_t549 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.Scrollbar::ClickRepeat(UnityEngine.EventSystems.PointerEventData)
 Object_t * Scrollbar_ClickRepeat_m3491 (Scrollbar_t692 * __this, PointerEventData_t549 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
 void Scrollbar_OnPointerUp_m3492 (Scrollbar_t692 * __this, PointerEventData_t549 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnMove(UnityEngine.EventSystems.AxisEventData)
 void Scrollbar_OnMove_m3493 (Scrollbar_t692 * __this, AxisEventData_t557 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Scrollbar::FindSelectableOnLeft()
 Selectable_t630 * Scrollbar_FindSelectableOnLeft_m3494 (Scrollbar_t692 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Scrollbar::FindSelectableOnRight()
 Selectable_t630 * Scrollbar_FindSelectableOnRight_m3495 (Scrollbar_t692 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Scrollbar::FindSelectableOnUp()
 Selectable_t630 * Scrollbar_FindSelectableOnUp_m3496 (Scrollbar_t692 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Scrollbar::FindSelectableOnDown()
 Selectable_t630 * Scrollbar_FindSelectableOnDown_m3497 (Scrollbar_t692 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData)
 void Scrollbar_OnInitializePotentialDrag_m3498 (Scrollbar_t692 * __this, PointerEventData_t549 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::SetDirection(UnityEngine.UI.Scrollbar/Direction,System.Boolean)
 void Scrollbar_SetDirection_m3499 (Scrollbar_t692 * __this, int32_t ___direction, bool ___includeRectLayouts, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Scrollbar::UnityEngine.UI.ICanvasElement.IsDestroyed()
 bool Scrollbar_UnityEngine_UI_ICanvasElement_IsDestroyed_m3500 (Scrollbar_t692 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.Scrollbar::UnityEngine.UI.ICanvasElement.get_transform()
 Transform_t56 * Scrollbar_UnityEngine_UI_ICanvasElement_get_transform_m3501 (Scrollbar_t692 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
