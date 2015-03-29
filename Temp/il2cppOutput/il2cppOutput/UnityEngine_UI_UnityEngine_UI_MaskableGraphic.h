#pragma once
#include <stdint.h>
// UnityEngine.Material
struct Material_t108;
// UnityEngine.UI.Graphic
#include "UnityEngine_UI_UnityEngine_UI_Graphic.h"
// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t666  : public Graphic_t648
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t108 * ___m_MaskMaterial;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate;
};
