#pragma once
#include <stdint.h>
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t5182;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t4182;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.UI.ObjectPool`1<System.Object>
struct ObjectPool_1_t5181  : public Object_t
{
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1<System.Object>::m_Stack
	Stack_1_t5182 * ___m_Stack;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1<System.Object>::m_ActionOnGet
	UnityAction_1_t4182 * ___m_ActionOnGet;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1<System.Object>::m_ActionOnRelease
	UnityAction_1_t4182 * ___m_ActionOnRelease;
	// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField;
};
