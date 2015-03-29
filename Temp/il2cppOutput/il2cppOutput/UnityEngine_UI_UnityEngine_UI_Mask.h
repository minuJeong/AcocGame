#pragma once
#include <stdint.h>
// UnityEngine.Material
struct Material_t108;
// UnityEngine.UI.Graphic
struct Graphic_t648;
// UnityEngine.RectTransform
struct RectTransform_t642;
// UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviour.h"
// UnityEngine.UI.Mask
struct Mask_t746  : public UIBehaviour_t548
{
	// System.Boolean UnityEngine.UI.Mask::m_ShowMaskGraphic
	bool ___m_ShowMaskGraphic;
	// UnityEngine.Material UnityEngine.UI.Mask::m_RenderMaterial
	Material_t108 * ___m_RenderMaterial;
	// UnityEngine.UI.Graphic UnityEngine.UI.Mask::m_Graphic
	Graphic_t648 * ___m_Graphic;
	// UnityEngine.RectTransform UnityEngine.UI.Mask::m_RectTransform
	RectTransform_t642 * ___m_RectTransform;
};
