#pragma once
#include <stdint.h>
// UnityEngine.Event
struct Event_t421;
struct Event_t421_marshaled;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t57;
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Event
struct Event_t421  : public Object_t
{
	// System.IntPtr UnityEngine.Event::m_Ptr
	IntPtr_t39 ___m_Ptr;
};
struct Event_t421_StaticFields{
	// UnityEngine.Event UnityEngine.Event::s_Current
	Event_t421 * ___s_Current;
	// UnityEngine.Event UnityEngine.Event::s_MasterEvent
	Event_t421 * ___s_MasterEvent;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> UnityEngine.Event::<>f__switch$map0
	Dictionary_2_t57 * ___U3CU3Ef__switch$map0;
};
// Native definition for marshalling of: UnityEngine.Event
struct Event_t421_marshaled
{
	IntPtr_t39 ___m_Ptr;
};
