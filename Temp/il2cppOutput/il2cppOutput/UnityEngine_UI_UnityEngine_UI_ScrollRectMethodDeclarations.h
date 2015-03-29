#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ScrollRect
struct ScrollRect_t698;
// UnityEngine.RectTransform
struct RectTransform_t642;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t692;
// UnityEngine.UI.ScrollRect/ScrollRectEvent
struct ScrollRectEvent_t696;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t549;
// UnityEngine.Transform
struct Transform_t56;
// UnityEngine.UI.ScrollRect/MovementType
#include "UnityEngine_UI_UnityEngine_UI_ScrollRect_MovementType.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.UI.CanvasUpdate
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate.h"
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"

// System.Void UnityEngine.UI.ScrollRect::.ctor()
 void ScrollRect__ctor_m3503 (ScrollRect_t698 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::get_content()
 RectTransform_t642 * ScrollRect_get_content_m3504 (ScrollRect_t698 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_content(UnityEngine.RectTransform)
 void ScrollRect_set_content_m3505 (ScrollRect_t698 * __this, RectTransform_t642 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::get_horizontal()
 bool ScrollRect_get_horizontal_m3506 (ScrollRect_t698 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_horizontal(System.Boolean)
 void ScrollRect_set_horizontal_m3507 (ScrollRect_t698 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::get_vertical()
 bool ScrollRect_get_vertical_m3508 (ScrollRect_t698 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_vertical(System.Boolean)
 void ScrollRect_set_vertical_m3509 (ScrollRect_t698 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.ScrollRect/MovementType UnityEngine.UI.ScrollRect::get_movementType()
 int32_t ScrollRect_get_movementType_m3510 (ScrollRect_t698 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_movementType(UnityEngine.UI.ScrollRect/MovementType)
 void ScrollRect_set_movementType_m3511 (ScrollRect_t698 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_elasticity()
 float ScrollRect_get_elasticity_m3512 (ScrollRect_t698 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_elasticity(System.Single)
 void ScrollRect_set_elasticity_m3513 (ScrollRect_t698 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::get_inertia()
 bool ScrollRect_get_inertia_m3514 (ScrollRect_t698 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_inertia(System.Boolean)
 void ScrollRect_set_inertia_m3515 (ScrollRect_t698 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_decelerationRate()
 float ScrollRect_get_decelerationRate_m3516 (ScrollRect_t698 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_decelerationRate(System.Single)
 void ScrollRect_set_decelerationRate_m3517 (ScrollRect_t698 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_scrollSensitivity()
 float ScrollRect_get_scrollSensitivity_m3518 (ScrollRect_t698 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_scrollSensitivity(System.Single)
 void ScrollRect_set_scrollSensitivity_m3519 (ScrollRect_t698 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::get_horizontalScrollbar()
 Scrollbar_t692 * ScrollRect_get_horizontalScrollbar_m3520 (ScrollRect_t698 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_horizontalScrollbar(UnityEngine.UI.Scrollbar)
 void ScrollRect_set_horizontalScrollbar_m3521 (ScrollRect_t698 * __this, Scrollbar_t692 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::get_verticalScrollbar()
 Scrollbar_t692 * ScrollRect_get_verticalScrollbar_m3522 (ScrollRect_t698 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_verticalScrollbar(UnityEngine.UI.Scrollbar)
 void ScrollRect_set_verticalScrollbar_m3523 (ScrollRect_t698 * __this, Scrollbar_t692 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.ScrollRect/ScrollRectEvent UnityEngine.UI.ScrollRect::get_onValueChanged()
 ScrollRectEvent_t696 * ScrollRect_get_onValueChanged_m3524 (ScrollRect_t698 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_onValueChanged(UnityEngine.UI.ScrollRect/ScrollRectEvent)
 void ScrollRect_set_onValueChanged_m3525 (ScrollRect_t698 * __this, ScrollRectEvent_t696 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::get_viewRect()
 RectTransform_t642 * ScrollRect_get_viewRect_m3526 (ScrollRect_t698 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::get_velocity()
 Vector2_t51  ScrollRect_get_velocity_m3527 (ScrollRect_t698 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_velocity(UnityEngine.Vector2)
 void ScrollRect_set_velocity_m3528 (ScrollRect_t698 * __this, Vector2_t51  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::Rebuild(UnityEngine.UI.CanvasUpdate)
 void ScrollRect_Rebuild_m3529 (ScrollRect_t698 * __this, int32_t ___executing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnEnable()
 void ScrollRect_OnEnable_m3530 (ScrollRect_t698 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnDisable()
 void ScrollRect_OnDisable_m3531 (ScrollRect_t698 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::IsActive()
 bool ScrollRect_IsActive_m3532 (ScrollRect_t698 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::EnsureLayoutHasRebuilt()
 void ScrollRect_EnsureLayoutHasRebuilt_m3533 (ScrollRect_t698 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::StopMovement()
 void ScrollRect_StopMovement_m3534 (ScrollRect_t698 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnScroll(UnityEngine.EventSystems.PointerEventData)
 void ScrollRect_OnScroll_m3535 (ScrollRect_t698 * __this, PointerEventData_t549 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData)
 void ScrollRect_OnInitializePotentialDrag_m3536 (ScrollRect_t698 * __this, PointerEventData_t549 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
 void ScrollRect_OnBeginDrag_m3537 (ScrollRect_t698 * __this, PointerEventData_t549 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
 void ScrollRect_OnEndDrag_m3538 (ScrollRect_t698 * __this, PointerEventData_t549 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnDrag(UnityEngine.EventSystems.PointerEventData)
 void ScrollRect_OnDrag_m3539 (ScrollRect_t698 * __this, PointerEventData_t549 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetContentAnchoredPosition(UnityEngine.Vector2)
 void ScrollRect_SetContentAnchoredPosition_m3540 (ScrollRect_t698 * __this, Vector2_t51  ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::LateUpdate()
 void ScrollRect_LateUpdate_m3541 (ScrollRect_t698 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::UpdatePrevData()
 void ScrollRect_UpdatePrevData_m3542 (ScrollRect_t698 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::UpdateScrollbars(UnityEngine.Vector2)
 void ScrollRect_UpdateScrollbars_m3543 (ScrollRect_t698 * __this, Vector2_t51  ___offset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::get_normalizedPosition()
 Vector2_t51  ScrollRect_get_normalizedPosition_m3544 (ScrollRect_t698 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_normalizedPosition(UnityEngine.Vector2)
 void ScrollRect_set_normalizedPosition_m3545 (ScrollRect_t698 * __this, Vector2_t51  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_horizontalNormalizedPosition()
 float ScrollRect_get_horizontalNormalizedPosition_m3546 (ScrollRect_t698 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_horizontalNormalizedPosition(System.Single)
 void ScrollRect_set_horizontalNormalizedPosition_m3547 (ScrollRect_t698 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_verticalNormalizedPosition()
 float ScrollRect_get_verticalNormalizedPosition_m3548 (ScrollRect_t698 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_verticalNormalizedPosition(System.Single)
 void ScrollRect_set_verticalNormalizedPosition_m3549 (ScrollRect_t698 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetHorizontalNormalizedPosition(System.Single)
 void ScrollRect_SetHorizontalNormalizedPosition_m3550 (ScrollRect_t698 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetVerticalNormalizedPosition(System.Single)
 void ScrollRect_SetVerticalNormalizedPosition_m3551 (ScrollRect_t698 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetNormalizedPosition(System.Single,System.Int32)
 void ScrollRect_SetNormalizedPosition_m3552 (ScrollRect_t698 * __this, float ___value, int32_t ___axis, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::RubberDelta(System.Single,System.Single)
 float ScrollRect_RubberDelta_m3553 (Object_t * __this/* static, unused */, float ___overStretching, float ___viewSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::UpdateBounds()
 void ScrollRect_UpdateBounds_m3554 (ScrollRect_t698 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UnityEngine.UI.ScrollRect::GetBounds()
 Bounds_t458  ScrollRect_GetBounds_m3555 (ScrollRect_t698 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::CalculateOffset(UnityEngine.Vector2)
 Vector2_t51  ScrollRect_CalculateOffset_m3556 (ScrollRect_t698 * __this, Vector2_t51  ___delta, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::UnityEngine.UI.ICanvasElement.IsDestroyed()
 bool ScrollRect_UnityEngine_UI_ICanvasElement_IsDestroyed_m3557 (ScrollRect_t698 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.ScrollRect::UnityEngine.UI.ICanvasElement.get_transform()
 Transform_t56 * ScrollRect_UnityEngine_UI_ICanvasElement_get_transform_m3558 (ScrollRect_t698 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
