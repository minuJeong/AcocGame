#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Slider
struct Slider_t708;
// UnityEngine.RectTransform
struct RectTransform_t642;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t706;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t549;
// UnityEngine.Camera
struct Camera_t204;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t557;
// UnityEngine.UI.Selectable
struct Selectable_t630;
// UnityEngine.Transform
struct Transform_t56;
// UnityEngine.UI.Slider/Direction
#include "UnityEngine_UI_UnityEngine_UI_Slider_Direction.h"
// UnityEngine.UI.Slider/Axis
#include "UnityEngine_UI_UnityEngine_UI_Slider_Axis.h"
// UnityEngine.UI.CanvasUpdate
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate.h"

// System.Void UnityEngine.UI.Slider::.ctor()
 void Slider__ctor_m3620 (Slider_t708 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Slider::get_fillRect()
 RectTransform_t642 * Slider_get_fillRect_m3621 (Slider_t708 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_fillRect(UnityEngine.RectTransform)
 void Slider_set_fillRect_m3622 (Slider_t708 * __this, RectTransform_t642 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Slider::get_handleRect()
 RectTransform_t642 * Slider_get_handleRect_m3623 (Slider_t708 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_handleRect(UnityEngine.RectTransform)
 void Slider_set_handleRect_m3624 (Slider_t708 * __this, RectTransform_t642 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::get_direction()
 int32_t Slider_get_direction_m3625 (Slider_t708 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_direction(UnityEngine.UI.Slider/Direction)
 void Slider_set_direction_m3626 (Slider_t708 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_minValue()
 float Slider_get_minValue_m3627 (Slider_t708 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_minValue(System.Single)
 void Slider_set_minValue_m3628 (Slider_t708 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_maxValue()
 float Slider_get_maxValue_m3629 (Slider_t708 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_maxValue(System.Single)
 void Slider_set_maxValue_m3630 (Slider_t708 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Slider::get_wholeNumbers()
 bool Slider_get_wholeNumbers_m3631 (Slider_t708 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_wholeNumbers(System.Boolean)
 void Slider_set_wholeNumbers_m3632 (Slider_t708 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_value()
 float Slider_get_value_m3633 (Slider_t708 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_value(System.Single)
 void Slider_set_value_m3634 (Slider_t708 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_normalizedValue()
 float Slider_get_normalizedValue_m3635 (Slider_t708 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_normalizedValue(System.Single)
 void Slider_set_normalizedValue_m3636 (Slider_t708 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::get_onValueChanged()
 SliderEvent_t706 * Slider_get_onValueChanged_m3637 (Slider_t708 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_onValueChanged(UnityEngine.UI.Slider/SliderEvent)
 void Slider_set_onValueChanged_m3638 (Slider_t708 * __this, SliderEvent_t706 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_stepSize()
 float Slider_get_stepSize_m3639 (Slider_t708 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::Rebuild(UnityEngine.UI.CanvasUpdate)
 void Slider_Rebuild_m3640 (Slider_t708 * __this, int32_t ___executing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnEnable()
 void Slider_OnEnable_m3641 (Slider_t708 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnDisable()
 void Slider_OnDisable_m3642 (Slider_t708 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::UpdateCachedReferences()
 void Slider_UpdateCachedReferences_m3643 (Slider_t708 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::Set(System.Single)
 void Slider_Set_m3644 (Slider_t708 * __this, float ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::Set(System.Single,System.Boolean)
 void Slider_Set_m3645 (Slider_t708 * __this, float ___input, bool ___sendCallback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnRectTransformDimensionsChange()
 void Slider_OnRectTransformDimensionsChange_m3646 (Slider_t708 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Slider/Axis UnityEngine.UI.Slider::get_axis()
 int32_t Slider_get_axis_m3647 (Slider_t708 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Slider::get_reverseValue()
 bool Slider_get_reverseValue_m3648 (Slider_t708 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::UpdateVisuals()
 void Slider_UpdateVisuals_m3649 (Slider_t708 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::UpdateDrag(UnityEngine.EventSystems.PointerEventData,UnityEngine.Camera)
 void Slider_UpdateDrag_m3650 (Slider_t708 * __this, PointerEventData_t549 * ___eventData, Camera_t204 * ___cam, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Slider::MayDrag(UnityEngine.EventSystems.PointerEventData)
 bool Slider_MayDrag_m3651 (Slider_t708 * __this, PointerEventData_t549 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
 void Slider_OnPointerDown_m3652 (Slider_t708 * __this, PointerEventData_t549 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnDrag(UnityEngine.EventSystems.PointerEventData)
 void Slider_OnDrag_m3653 (Slider_t708 * __this, PointerEventData_t549 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnMove(UnityEngine.EventSystems.AxisEventData)
 void Slider_OnMove_m3654 (Slider_t708 * __this, AxisEventData_t557 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Slider::FindSelectableOnLeft()
 Selectable_t630 * Slider_FindSelectableOnLeft_m3655 (Slider_t708 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Slider::FindSelectableOnRight()
 Selectable_t630 * Slider_FindSelectableOnRight_m3656 (Slider_t708 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Slider::FindSelectableOnUp()
 Selectable_t630 * Slider_FindSelectableOnUp_m3657 (Slider_t708 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Slider::FindSelectableOnDown()
 Selectable_t630 * Slider_FindSelectableOnDown_m3658 (Slider_t708 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData)
 void Slider_OnInitializePotentialDrag_m3659 (Slider_t708 * __this, PointerEventData_t549 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::SetDirection(UnityEngine.UI.Slider/Direction,System.Boolean)
 void Slider_SetDirection_m3660 (Slider_t708 * __this, int32_t ___direction, bool ___includeRectLayouts, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Slider::UnityEngine.UI.ICanvasElement.IsDestroyed()
 bool Slider_UnityEngine_UI_ICanvasElement_IsDestroyed_m3661 (Slider_t708 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.Slider::UnityEngine.UI.ICanvasElement.get_transform()
 Transform_t56 * Slider_UnityEngine_UI_ICanvasElement_get_transform_m3662 (Slider_t708 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
