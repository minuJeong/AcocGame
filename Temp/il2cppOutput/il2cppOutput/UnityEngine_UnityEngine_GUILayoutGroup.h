﻿#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>
struct List_1_t2504;
// UnityEngine.RectOffset
struct RectOffset_t422;
// UnityEngine.GUILayoutEntry
#include "UnityEngine_UnityEngine_GUILayoutEntry.h"
// UnityEngine.GUILayoutGroup
struct GUILayoutGroup_t2500  : public GUILayoutEntry_t2503
{
	// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry> UnityEngine.GUILayoutGroup::entries
	List_1_t2504 * ___entries;
	// System.Boolean UnityEngine.GUILayoutGroup::isVertical
	bool ___isVertical;
	// System.Boolean UnityEngine.GUILayoutGroup::resetCoords
	bool ___resetCoords;
	// System.Single UnityEngine.GUILayoutGroup::spacing
	float ___spacing;
	// System.Boolean UnityEngine.GUILayoutGroup::sameSize
	bool ___sameSize;
	// System.Boolean UnityEngine.GUILayoutGroup::isWindow
	bool ___isWindow;
	// System.Int32 UnityEngine.GUILayoutGroup::windowID
	int32_t ___windowID;
	// System.Int32 UnityEngine.GUILayoutGroup::cursor
	int32_t ___cursor;
	// System.Int32 UnityEngine.GUILayoutGroup::stretchableCountX
	int32_t ___stretchableCountX;
	// System.Int32 UnityEngine.GUILayoutGroup::stretchableCountY
	int32_t ___stretchableCountY;
	// System.Boolean UnityEngine.GUILayoutGroup::userSpecifiedWidth
	bool ___userSpecifiedWidth;
	// System.Boolean UnityEngine.GUILayoutGroup::userSpecifiedHeight
	bool ___userSpecifiedHeight;
	// System.Single UnityEngine.GUILayoutGroup::childMinWidth
	float ___childMinWidth;
	// System.Single UnityEngine.GUILayoutGroup::childMaxWidth
	float ___childMaxWidth;
	// System.Single UnityEngine.GUILayoutGroup::childMinHeight
	float ___childMinHeight;
	// System.Single UnityEngine.GUILayoutGroup::childMaxHeight
	float ___childMaxHeight;
	// UnityEngine.RectOffset UnityEngine.GUILayoutGroup::m_Margin
	RectOffset_t422 * ___m_Margin;
};