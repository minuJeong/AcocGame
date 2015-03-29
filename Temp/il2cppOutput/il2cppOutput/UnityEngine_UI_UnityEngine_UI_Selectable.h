#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t701;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t626;
// UnityEngine.UI.Graphic
struct Graphic_t648;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t702;
// UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviour.h"
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
// UnityEngine.UI.Selectable
struct Selectable_t630  : public UIBehaviour_t548
{
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t686  ___m_Navigation;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t637  ___m_Colors;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t703  ___m_SpriteState;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t626 * ___m_AnimationTriggers;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_t648 * ___m_TargetGraphic;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction;
	// UnityEngine.UI.Selectable/SelectionState UnityEngine.UI.Selectable::m_CurrentSelectionState
	int32_t ___m_CurrentSelectionState;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t702 * ___m_CanvasGroupCache;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField;
};
struct Selectable_t630_StaticFields{
	// System.Collections.Generic.List`1<UnityEngine.UI.Selectable> UnityEngine.UI.Selectable::s_List
	List_1_t701 * ___s_List;
};
