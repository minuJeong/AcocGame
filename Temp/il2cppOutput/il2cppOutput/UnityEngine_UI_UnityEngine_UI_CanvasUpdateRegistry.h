#pragma once
#include <stdint.h>
// UnityEngine.UI.CanvasUpdateRegistry
struct CanvasUpdateRegistry_t632;
// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>
struct IndexedSet_1_t633;
// System.Comparison`1<UnityEngine.UI.ICanvasElement>
struct Comparison_1_t634;
// System.Predicate`1<UnityEngine.UI.ICanvasElement>
struct Predicate_1_t635;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.UI.CanvasUpdateRegistry
struct CanvasUpdateRegistry_t632  : public Object_t
{
	// System.Boolean UnityEngine.UI.CanvasUpdateRegistry::m_PerformingLayoutUpdate
	bool ___m_PerformingLayoutUpdate;
	// System.Boolean UnityEngine.UI.CanvasUpdateRegistry::m_PerformingGraphicUpdate
	bool ___m_PerformingGraphicUpdate;
	// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement> UnityEngine.UI.CanvasUpdateRegistry::m_LayoutRebuildQueue
	IndexedSet_1_t633 * ___m_LayoutRebuildQueue;
	// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement> UnityEngine.UI.CanvasUpdateRegistry::m_GraphicRebuildQueue
	IndexedSet_1_t633 * ___m_GraphicRebuildQueue;
};
struct CanvasUpdateRegistry_t632_StaticFields{
	// UnityEngine.UI.CanvasUpdateRegistry UnityEngine.UI.CanvasUpdateRegistry::s_Instance
	CanvasUpdateRegistry_t632 * ___s_Instance;
	// System.Comparison`1<UnityEngine.UI.ICanvasElement> UnityEngine.UI.CanvasUpdateRegistry::s_SortLayoutFunction
	Comparison_1_t634 * ___s_SortLayoutFunction;
	// System.Predicate`1<UnityEngine.UI.ICanvasElement> UnityEngine.UI.CanvasUpdateRegistry::<>f__am$cache6
	Predicate_1_t635 * ___U3CU3Ef__am$cache6;
	// System.Predicate`1<UnityEngine.UI.ICanvasElement> UnityEngine.UI.CanvasUpdateRegistry::<>f__am$cache7
	Predicate_1_t635 * ___U3CU3Ef__am$cache7;
};
