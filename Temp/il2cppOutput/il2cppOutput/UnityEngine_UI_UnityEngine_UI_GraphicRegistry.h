#pragma once
#include <stdint.h>
// UnityEngine.UI.GraphicRegistry
struct GraphicRegistry_t654;
// System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
struct Dictionary_2_t655;
// System.Collections.Generic.List`1<UnityEngine.UI.Graphic>
struct List_1_t651;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.UI.GraphicRegistry
struct GraphicRegistry_t654  : public Object_t
{
	// System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>> UnityEngine.UI.GraphicRegistry::m_Graphics
	Dictionary_2_t655 * ___m_Graphics;
};
struct GraphicRegistry_t654_StaticFields{
	// UnityEngine.UI.GraphicRegistry UnityEngine.UI.GraphicRegistry::s_Instance
	GraphicRegistry_t654 * ___s_Instance;
	// System.Collections.Generic.List`1<UnityEngine.UI.Graphic> UnityEngine.UI.GraphicRegistry::s_EmptyList
	List_1_t651 * ___s_EmptyList;
};
