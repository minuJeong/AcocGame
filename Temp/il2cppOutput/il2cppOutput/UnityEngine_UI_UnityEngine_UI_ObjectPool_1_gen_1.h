#pragma once
#include <stdint.h>
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct Stack_1_t5732;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct UnityAction_1_t749;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct ObjectPool_1_t748  : public Object_t
{
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::m_Stack
	Stack_1_t5732 * ___m_Stack;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::m_ActionOnGet
	UnityAction_1_t749 * ___m_ActionOnGet;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::m_ActionOnRelease
	UnityAction_1_t749 * ___m_ActionOnRelease;
	// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField;
};
