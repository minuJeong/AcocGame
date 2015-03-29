#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Selectable
struct Selectable_t630;
// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t701;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t626;
// UnityEngine.UI.Graphic
struct Graphic_t648;
// UnityEngine.UI.Image
struct Image_t665;
// UnityEngine.Animator
struct Animator_t168;
// UnityEngine.RectTransform
struct RectTransform_t642;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t557;
// UnityEngine.Sprite
struct Sprite_t664;
// System.String
struct String_t;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t545;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t549;
// UnityEngine.UI.Navigation
#include "UnityEngine_UI_UnityEngine_UI_Navigation.h"
// UnityEngine.UI.Selectable/Transition
#include "UnityEngine_UI_UnityEngine_UI_Selectable_Transition.h"
// UnityEngine.UI.ColorBlock
#include "UnityEngine_UI_UnityEngine_UI_ColorBlock.h"
// UnityEngine.UI.SpriteState
#include "UnityEngine_UI_UnityEngine_UI_SpriteState.h"
// UnityEngine.UI.Selectable/SelectionState
#include "UnityEngine_UI_UnityEngine_UI_Selectable_SelectionState.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.UI.Selectable::.ctor()
 void Selectable__ctor_m3557 (Selectable_t630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::.cctor()
 void Selectable__cctor_m3558 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.UI.Selectable> UnityEngine.UI.Selectable::get_allSelectables()
 List_1_t701 * Selectable_get_allSelectables_m3559 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::get_navigation()
 Navigation_t686  Selectable_get_navigation_m3560 (Selectable_t630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_navigation(UnityEngine.UI.Navigation)
 void Selectable_set_navigation_m3561 (Selectable_t630 * __this, Navigation_t686  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::get_transition()
 int32_t Selectable_get_transition_m3562 (Selectable_t630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_transition(UnityEngine.UI.Selectable/Transition)
 void Selectable_set_transition_m3563 (Selectable_t630 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::get_colors()
 ColorBlock_t637  Selectable_get_colors_m3564 (Selectable_t630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_colors(UnityEngine.UI.ColorBlock)
 void Selectable_set_colors_m3565 (Selectable_t630 * __this, ColorBlock_t637  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::get_spriteState()
 SpriteState_t703  Selectable_get_spriteState_m3566 (Selectable_t630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_spriteState(UnityEngine.UI.SpriteState)
 void Selectable_set_spriteState_m3567 (Selectable_t630 * __this, SpriteState_t703  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::get_animationTriggers()
 AnimationTriggers_t626 * Selectable_get_animationTriggers_m3568 (Selectable_t630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_animationTriggers(UnityEngine.UI.AnimationTriggers)
 void Selectable_set_animationTriggers_m3569 (Selectable_t630 * __this, AnimationTriggers_t626 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::get_targetGraphic()
 Graphic_t648 * Selectable_get_targetGraphic_m3570 (Selectable_t630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_targetGraphic(UnityEngine.UI.Graphic)
 void Selectable_set_targetGraphic_m3571 (Selectable_t630 * __this, Graphic_t648 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::get_interactable()
 bool Selectable_get_interactable_m3572 (Selectable_t630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
 void Selectable_set_interactable_m2776 (Selectable_t630 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::get_isPointerInside()
 bool Selectable_get_isPointerInside_m3573 (Selectable_t630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_isPointerInside(System.Boolean)
 void Selectable_set_isPointerInside_m3574 (Selectable_t630 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::get_isPointerDown()
 bool Selectable_get_isPointerDown_m3575 (Selectable_t630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_isPointerDown(System.Boolean)
 void Selectable_set_isPointerDown_m3576 (Selectable_t630 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::get_hasSelection()
 bool Selectable_get_hasSelection_m3577 (Selectable_t630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_hasSelection(System.Boolean)
 void Selectable_set_hasSelection_m3578 (Selectable_t630 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Image UnityEngine.UI.Selectable::get_image()
 Image_t665 * Selectable_get_image_m3579 (Selectable_t630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_image(UnityEngine.UI.Image)
 void Selectable_set_image_m3580 (Selectable_t630 * __this, Image_t665 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Animator UnityEngine.UI.Selectable::get_animator()
 Animator_t168 * Selectable_get_animator_m3581 (Selectable_t630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::Awake()
 void Selectable_Awake_m3582 (Selectable_t630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnCanvasGroupChanged()
 void Selectable_OnCanvasGroupChanged_m3583 (Selectable_t630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::IsInteractable()
 bool Selectable_IsInteractable_m3584 (Selectable_t630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnDidApplyAnimationProperties()
 void Selectable_OnDidApplyAnimationProperties_m3585 (Selectable_t630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnEnable()
 void Selectable_OnEnable_m3586 (Selectable_t630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnSetProperty()
 void Selectable_OnSetProperty_m3587 (Selectable_t630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnDisable()
 void Selectable_OnDisable_m3588 (Selectable_t630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable/SelectionState UnityEngine.UI.Selectable::get_currentSelectionState()
 int32_t Selectable_get_currentSelectionState_m3589 (Selectable_t630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::InstantClearState()
 void Selectable_InstantClearState_m3590 (Selectable_t630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::DoStateTransition(UnityEngine.UI.Selectable/SelectionState,System.Boolean)
 void Selectable_DoStateTransition_m3591 (Selectable_t630 * __this, int32_t ___state, bool ___instant, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Selectable::FindSelectable(UnityEngine.Vector3)
 Selectable_t630 * Selectable_FindSelectable_m3592 (Selectable_t630 * __this, Vector3_t31  ___dir, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.UI.Selectable::GetPointOnRectEdge(UnityEngine.RectTransform,UnityEngine.Vector2)
 Vector3_t31  Selectable_GetPointOnRectEdge_m3593 (Object_t * __this/* static, unused */, RectTransform_t642 * ___rect, Vector2_t51  ___dir, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::Navigate(UnityEngine.EventSystems.AxisEventData,UnityEngine.UI.Selectable)
 void Selectable_Navigate_m3594 (Selectable_t630 * __this, AxisEventData_t557 * ___eventData, Selectable_t630 * ___sel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Selectable::FindSelectableOnLeft()
 Selectable_t630 * Selectable_FindSelectableOnLeft_m3595 (Selectable_t630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Selectable::FindSelectableOnRight()
 Selectable_t630 * Selectable_FindSelectableOnRight_m3596 (Selectable_t630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Selectable::FindSelectableOnUp()
 Selectable_t630 * Selectable_FindSelectableOnUp_m3597 (Selectable_t630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Selectable::FindSelectableOnDown()
 Selectable_t630 * Selectable_FindSelectableOnDown_m3598 (Selectable_t630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnMove(UnityEngine.EventSystems.AxisEventData)
 void Selectable_OnMove_m3599 (Selectable_t630 * __this, AxisEventData_t557 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::StartColorTween(UnityEngine.Color,System.Boolean)
 void Selectable_StartColorTween_m3600 (Selectable_t630 * __this, Color_t30  ___targetColor, bool ___instant, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::DoSpriteSwap(UnityEngine.Sprite)
 void Selectable_DoSpriteSwap_m3601 (Selectable_t630 * __this, Sprite_t664 * ___newSprite, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::TriggerAnimation(System.String)
 void Selectable_TriggerAnimation_m3602 (Selectable_t630 * __this, String_t* ___triggername, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::IsHighlighted(UnityEngine.EventSystems.BaseEventData)
 bool Selectable_IsHighlighted_m3603 (Selectable_t630 * __this, BaseEventData_t545 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::IsPressed(UnityEngine.EventSystems.BaseEventData)
 bool Selectable_IsPressed_m3604 (Selectable_t630 * __this, BaseEventData_t545 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::IsPressed()
 bool Selectable_IsPressed_m3605 (Selectable_t630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::UpdateSelectionState(UnityEngine.EventSystems.BaseEventData)
 void Selectable_UpdateSelectionState_m3606 (Selectable_t630 * __this, BaseEventData_t545 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::EvaluateAndTransitionToSelectionState(UnityEngine.EventSystems.BaseEventData)
 void Selectable_EvaluateAndTransitionToSelectionState_m3607 (Selectable_t630 * __this, BaseEventData_t545 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::InternalEvaluateAndTransitionToSelectionState(System.Boolean)
 void Selectable_InternalEvaluateAndTransitionToSelectionState_m3608 (Selectable_t630 * __this, bool ___instant, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
 void Selectable_OnPointerDown_m3609 (Selectable_t630 * __this, PointerEventData_t549 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
 void Selectable_OnPointerUp_m3610 (Selectable_t630 * __this, PointerEventData_t549 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
 void Selectable_OnPointerEnter_m3611 (Selectable_t630 * __this, PointerEventData_t549 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
 void Selectable_OnPointerExit_m3612 (Selectable_t630 * __this, PointerEventData_t549 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnSelect(UnityEngine.EventSystems.BaseEventData)
 void Selectable_OnSelect_m3613 (Selectable_t630 * __this, BaseEventData_t545 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnDeselect(UnityEngine.EventSystems.BaseEventData)
 void Selectable_OnDeselect_m3614 (Selectable_t630 * __this, BaseEventData_t545 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::Select()
 void Selectable_Select_m3615 (Selectable_t630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
