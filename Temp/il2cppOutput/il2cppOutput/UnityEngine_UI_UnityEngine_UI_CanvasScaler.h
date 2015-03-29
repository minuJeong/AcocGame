#pragma once
#include <stdint.h>
// UnityEngine.Canvas
struct Canvas_t644;
// UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviour.h"
// UnityEngine.UI.CanvasScaler/ScaleMode
#include "UnityEngine_UI_UnityEngine_UI_CanvasScaler_ScaleMode.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.UI.CanvasScaler/ScreenMatchMode
#include "UnityEngine_UI_UnityEngine_UI_CanvasScaler_ScreenMatchMode.h"
// UnityEngine.UI.CanvasScaler/Unit
#include "UnityEngine_UI_UnityEngine_UI_CanvasScaler_Unit.h"
// UnityEngine.UI.CanvasScaler
struct CanvasScaler_t727  : public UIBehaviour_t548
{
	// UnityEngine.UI.CanvasScaler/ScaleMode UnityEngine.UI.CanvasScaler::m_UiScaleMode
	int32_t ___m_UiScaleMode;
	// System.Single UnityEngine.UI.CanvasScaler::m_ReferencePixelsPerUnit
	float ___m_ReferencePixelsPerUnit;
	// System.Single UnityEngine.UI.CanvasScaler::m_ScaleFactor
	float ___m_ScaleFactor;
	// UnityEngine.Vector2 UnityEngine.UI.CanvasScaler::m_ReferenceResolution
	Vector2_t51  ___m_ReferenceResolution;
	// UnityEngine.UI.CanvasScaler/ScreenMatchMode UnityEngine.UI.CanvasScaler::m_ScreenMatchMode
	int32_t ___m_ScreenMatchMode;
	// System.Single UnityEngine.UI.CanvasScaler::m_MatchWidthOrHeight
	float ___m_MatchWidthOrHeight;
	// UnityEngine.UI.CanvasScaler/Unit UnityEngine.UI.CanvasScaler::m_PhysicalUnit
	int32_t ___m_PhysicalUnit;
	// System.Single UnityEngine.UI.CanvasScaler::m_FallbackScreenDPI
	float ___m_FallbackScreenDPI;
	// System.Single UnityEngine.UI.CanvasScaler::m_DefaultSpriteDPI
	float ___m_DefaultSpriteDPI;
	// System.Single UnityEngine.UI.CanvasScaler::m_DynamicPixelsPerUnit
	float ___m_DynamicPixelsPerUnit;
	// UnityEngine.Canvas UnityEngine.UI.CanvasScaler::m_Canvas
	Canvas_t644 * ___m_Canvas;
	// System.Single UnityEngine.UI.CanvasScaler::m_PrevScaleFactor
	float ___m_PrevScaleFactor;
	// System.Single UnityEngine.UI.CanvasScaler::m_PrevReferencePixelsPerUnit
	float ___m_PrevReferencePixelsPerUnit;
};
