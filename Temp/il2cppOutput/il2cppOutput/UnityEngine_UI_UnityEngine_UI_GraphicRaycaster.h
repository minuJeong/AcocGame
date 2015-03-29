#pragma once
#include <stdint.h>
// UnityEngine.Canvas
struct Canvas_t644;
// System.Collections.Generic.List`1<UnityEngine.UI.Graphic>
struct List_1_t651;
// System.Comparison`1<UnityEngine.UI.Graphic>
struct Comparison_1_t652;
// UnityEngine.EventSystems.BaseRaycaster
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseRaycaster.h"
// UnityEngine.UI.GraphicRaycaster/BlockingObjects
#include "UnityEngine_UI_UnityEngine_UI_GraphicRaycaster_BlockingObjec.h"
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"
// UnityEngine.UI.GraphicRaycaster
struct GraphicRaycaster_t653  : public BaseRaycaster_t603
{
	// System.Boolean UnityEngine.UI.GraphicRaycaster::m_IgnoreReversedGraphics
	bool ___m_IgnoreReversedGraphics;
	// UnityEngine.UI.GraphicRaycaster/BlockingObjects UnityEngine.UI.GraphicRaycaster::m_BlockingObjects
	int32_t ___m_BlockingObjects;
	// UnityEngine.LayerMask UnityEngine.UI.GraphicRaycaster::m_BlockingMask
	LayerMask_t618  ___m_BlockingMask;
	// UnityEngine.Canvas UnityEngine.UI.GraphicRaycaster::m_Canvas
	Canvas_t644 * ___m_Canvas;
	// System.Collections.Generic.List`1<UnityEngine.UI.Graphic> UnityEngine.UI.GraphicRaycaster::m_RaycastResults
	List_1_t651 * ___m_RaycastResults;
};
struct GraphicRaycaster_t653_StaticFields{
	// System.Int32 UnityEngine.UI.GraphicRaycaster::kNoEventMaskSet
	int32_t ___kNoEventMaskSet;
	// System.Collections.Generic.List`1<UnityEngine.UI.Graphic> UnityEngine.UI.GraphicRaycaster::s_SortedGraphics
	List_1_t651 * ___s_SortedGraphics;
	// System.Comparison`1<UnityEngine.UI.Graphic> UnityEngine.UI.GraphicRaycaster::<>f__am$cache6
	Comparison_1_t652 * ___U3CU3Ef__am$cache6;
};
