#pragma once
#include <stdint.h>
// UnityEngine.Object
struct Object_t111;
struct Object_t111_marshaled;
// System.String
struct String_t;
// UnityEngine.Events.ArgumentCache
struct ArgumentCache_t2623;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Events.PersistentListenerMode
#include "UnityEngine_UnityEngine_Events_PersistentListenerMode.h"
// UnityEngine.Events.UnityEventCallState
#include "UnityEngine_UnityEngine_Events_UnityEventCallState.h"
// UnityEngine.Events.PersistentCall
struct PersistentCall_t2632  : public Object_t
{
	// UnityEngine.Object UnityEngine.Events.PersistentCall::m_Target
	Object_t111 * ___m_Target;
	// System.String UnityEngine.Events.PersistentCall::m_MethodName
	String_t* ___m_MethodName;
	// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::m_Mode
	int32_t ___m_Mode;
	// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::m_Arguments
	ArgumentCache_t2623 * ___m_Arguments;
	// UnityEngine.Events.UnityEventCallState UnityEngine.Events.PersistentCall::m_CallState
	int32_t ___m_CallState;
};
