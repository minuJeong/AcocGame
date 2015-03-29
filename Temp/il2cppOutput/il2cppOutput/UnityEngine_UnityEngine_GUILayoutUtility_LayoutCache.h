#pragma once
#include <stdint.h>
// UnityEngine.GUILayoutGroup
struct GUILayoutGroup_t2500;
// UnityEngineInternal.GenericStack
struct GenericStack_t2496;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.GUILayoutUtility/LayoutCache
struct LayoutCache_t2501  : public Object_t
{
	// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility/LayoutCache::topLevel
	GUILayoutGroup_t2500 * ___topLevel;
	// UnityEngineInternal.GenericStack UnityEngine.GUILayoutUtility/LayoutCache::layoutGroups
	GenericStack_t2496 * ___layoutGroups;
	// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility/LayoutCache::windows
	GUILayoutGroup_t2500 * ___windows;
};
