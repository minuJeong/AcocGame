#pragma once
#include <stdint.h>
// UnityEngine.RectTransform
struct RectTransform_t642;
// UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviour.h"
// UnityEngine.UI.ContentSizeFitter/FitMode
#include "UnityEngine_UI_UnityEngine_UI_ContentSizeFitter_FitMode.h"
// UnityEngine.DrivenRectTransformTracker
#include "UnityEngine_UnityEngine_DrivenRectTransformTracker.h"
// UnityEngine.UI.ContentSizeFitter
struct ContentSizeFitter_t729  : public UIBehaviour_t548
{
	// UnityEngine.UI.ContentSizeFitter/FitMode UnityEngine.UI.ContentSizeFitter::m_HorizontalFit
	int32_t ___m_HorizontalFit;
	// UnityEngine.UI.ContentSizeFitter/FitMode UnityEngine.UI.ContentSizeFitter::m_VerticalFit
	int32_t ___m_VerticalFit;
	// UnityEngine.RectTransform UnityEngine.UI.ContentSizeFitter::m_Rect
	RectTransform_t642 * ___m_Rect;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.ContentSizeFitter::m_Tracker
	DrivenRectTransformTracker_t694  ___m_Tracker;
};
