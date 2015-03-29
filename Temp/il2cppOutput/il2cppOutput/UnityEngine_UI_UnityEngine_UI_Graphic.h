#pragma once
#include <stdint.h>
// UnityEngine.Material
struct Material_t108;
// UnityEngine.Texture2D
struct Texture2D_t62;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct ObjectPool_1_t641;
// UnityEngine.RectTransform
struct RectTransform_t642;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t643;
// UnityEngine.Canvas
struct Canvas_t644;
// UnityEngine.Events.UnityAction
struct UnityAction_t645;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t646;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct UnityAction_1_t647;
// UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviour.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.UI.Graphic
struct Graphic_t648  : public UIBehaviour_t548
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t108 * ___m_Material;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t30  ___m_Color;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t642 * ___m_RectTransform;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRender
	CanvasRenderer_t643 * ___m_CanvasRender;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t644 * ___m_Canvas;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t645 * ___m_OnDirtyLayoutCallback;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t645 * ___m_OnDirtyVertsCallback;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t645 * ___m_OnDirtyMaterialCallback;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t646 * ___m_ColorTweenRunner;
};
struct Graphic_t648_StaticFields{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t108 * ___s_DefaultUI;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t62 * ___s_WhiteTexture;
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>> UnityEngine.UI.Graphic::s_VboPool
	ObjectPool_1_t641 * ___s_VboPool;
	// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>> UnityEngine.UI.Graphic::<>f__am$cacheE
	UnityAction_1_t647 * ___U3CU3Ef__am$cacheE;
	// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>> UnityEngine.UI.Graphic::<>f__am$cacheF
	UnityAction_1_t647 * ___U3CU3Ef__am$cacheF;
};
