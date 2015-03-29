#pragma once
#include <stdint.h>
// UnityEngine.GUISkin
struct GUISkin_t137;
// UnityEngineInternal.GenericStack
struct GenericStack_t2496;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// UnityEngine.GUI
struct GUI_t415  : public Object_t
{
};
struct GUI_t415_StaticFields{
	// System.Single UnityEngine.GUI::scrollStepSize
	float ___scrollStepSize;
	// System.Int32 UnityEngine.GUI::scrollControlID
	int32_t ___scrollControlID;
	// System.Int32 UnityEngine.GUI::hotTextField
	int32_t ___hotTextField;
	// UnityEngine.GUISkin UnityEngine.GUI::s_Skin
	GUISkin_t137 * ___s_Skin;
	// UnityEngine.Rect UnityEngine.GUI::s_ToolTipRect
	Rect_t55  ___s_ToolTipRect;
	// System.Int32 UnityEngine.GUI::boxHash
	int32_t ___boxHash;
	// System.Int32 UnityEngine.GUI::repeatButtonHash
	int32_t ___repeatButtonHash;
	// System.Int32 UnityEngine.GUI::toggleHash
	int32_t ___toggleHash;
	// System.Int32 UnityEngine.GUI::buttonGridHash
	int32_t ___buttonGridHash;
	// System.Int32 UnityEngine.GUI::sliderHash
	int32_t ___sliderHash;
	// System.Int32 UnityEngine.GUI::beginGroupHash
	int32_t ___beginGroupHash;
	// System.Int32 UnityEngine.GUI::scrollviewHash
	int32_t ___scrollviewHash;
	// UnityEngineInternal.GenericStack UnityEngine.GUI::s_ScrollViewStates
	GenericStack_t2496 * ___s_ScrollViewStates;
	// System.DateTime UnityEngine.GUI::<nextScrollStepTime>k__BackingField
	DateTime_t126  ___U3CnextScrollStepTimeU3Ek__BackingField;
	// System.Int32 UnityEngine.GUI::<scrollTroughSide>k__BackingField
	int32_t ___U3CscrollTroughSideU3Ek__BackingField;
};
