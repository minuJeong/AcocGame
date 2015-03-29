#pragma once
#include <stdint.h>
// UnityEngine.Display[]
struct DisplayU5BU5D_t2543;
// UnityEngine.Display
struct Display_t2544;
// UnityEngine.Display/DisplaysUpdatedDelegate
struct DisplaysUpdatedDelegate_t2542;
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Display
struct Display_t2544  : public Object_t
{
	// System.IntPtr UnityEngine.Display::nativeDisplay
	IntPtr_t39 ___nativeDisplay;
};
struct Display_t2544_StaticFields{
	// UnityEngine.Display[] UnityEngine.Display::displays
	DisplayU5BU5D_t2543* ___displays;
	// UnityEngine.Display UnityEngine.Display::_mainDisplay
	Display_t2544 * ____mainDisplay;
	// UnityEngine.Display/DisplaysUpdatedDelegate UnityEngine.Display::onDisplaysUpdated
	DisplaysUpdatedDelegate_t2542 * ___onDisplaysUpdated;
};
