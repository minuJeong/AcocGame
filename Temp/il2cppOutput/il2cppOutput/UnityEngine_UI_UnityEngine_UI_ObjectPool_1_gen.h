#pragma once
#include <stdint.h>
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct Stack_1_t5180;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct UnityAction_1_t579;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct ObjectPool_1_t577  : public Object_t
{
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::m_Stack
	Stack_1_t5180 * ___m_Stack;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::m_ActionOnGet
	UnityAction_1_t579 * ___m_ActionOnGet;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::m_ActionOnRelease
	UnityAction_1_t579 * ___m_ActionOnRelease;
	// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField;
};
