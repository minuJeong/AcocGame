#pragma once
#include <stdint.h>
// UnityEngine.Sprite
struct Sprite_t664;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t50;
// UnityEngine.UI.MaskableGraphic
#include "UnityEngine_UI_UnityEngine_UI_MaskableGraphic.h"
// UnityEngine.UI.Image/Type
#include "UnityEngine_UI_UnityEngine_UI_Image_Type.h"
// UnityEngine.UI.Image/FillMethod
#include "UnityEngine_UI_UnityEngine_UI_Image_FillMethod.h"
// UnityEngine.UI.Image
struct Image_t665  : public MaskableGraphic_t666
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t664 * ___m_Sprite;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t664 * ___m_OverrideSprite;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin;
	// System.Single UnityEngine.UI.Image::m_EventAlphaThreshold
	float ___m_EventAlphaThreshold;
};
struct Image_t665_StaticFields{
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_t50* ___s_VertScratch;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_t50* ___s_UVScratch;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_Xy
	Vector2U5BU5D_t50* ___s_Xy;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_Uv
	Vector2U5BU5D_t50* ___s_Uv;
};
