#pragma once
#include <stdint.h>
// UnityEngine.UI.LayoutGroup
#include "UnityEngine_UI_UnityEngine_UI_LayoutGroup.h"
// UnityEngine.UI.GridLayoutGroup/Corner
#include "UnityEngine_UI_UnityEngine_UI_GridLayoutGroup_Corner.h"
// UnityEngine.UI.GridLayoutGroup/Axis
#include "UnityEngine_UI_UnityEngine_UI_GridLayoutGroup_Axis.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.UI.GridLayoutGroup/Constraint
#include "UnityEngine_UI_UnityEngine_UI_GridLayoutGroup_Constraint.h"
// UnityEngine.UI.GridLayoutGroup
struct GridLayoutGroup_t733  : public LayoutGroup_t734
{
	// UnityEngine.UI.GridLayoutGroup/Corner UnityEngine.UI.GridLayoutGroup::m_StartCorner
	int32_t ___m_StartCorner;
	// UnityEngine.UI.GridLayoutGroup/Axis UnityEngine.UI.GridLayoutGroup::m_StartAxis
	int32_t ___m_StartAxis;
	// UnityEngine.Vector2 UnityEngine.UI.GridLayoutGroup::m_CellSize
	Vector2_t51  ___m_CellSize;
	// UnityEngine.Vector2 UnityEngine.UI.GridLayoutGroup::m_Spacing
	Vector2_t51  ___m_Spacing;
	// UnityEngine.UI.GridLayoutGroup/Constraint UnityEngine.UI.GridLayoutGroup::m_Constraint
	int32_t ___m_Constraint;
	// System.Int32 UnityEngine.UI.GridLayoutGroup::m_ConstraintCount
	int32_t ___m_ConstraintCount;
};
