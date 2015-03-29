#pragma once
#include <stdint.h>
// System.String
struct String_t;
// UnityEngine.Object
struct Object_t111;
struct Object_t111_marshaled;
// UnityEngine.AnimationState
struct AnimationState_t459;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.AnimationEventSource
#include "UnityEngine_UnityEngine_AnimationEventSource.h"
// UnityEngine.AnimatorStateInfo
#include "UnityEngine_UnityEngine_AnimatorStateInfo.h"
// UnityEngine.AnimatorClipInfo
#include "UnityEngine_UnityEngine_AnimatorClipInfo.h"
// UnityEngine.AnimationEvent
struct AnimationEvent_t2567  : public Object_t
{
	// System.Single UnityEngine.AnimationEvent::m_Time
	float ___m_Time;
	// System.String UnityEngine.AnimationEvent::m_FunctionName
	String_t* ___m_FunctionName;
	// System.String UnityEngine.AnimationEvent::m_StringParameter
	String_t* ___m_StringParameter;
	// UnityEngine.Object UnityEngine.AnimationEvent::m_ObjectReferenceParameter
	Object_t111 * ___m_ObjectReferenceParameter;
	// System.Single UnityEngine.AnimationEvent::m_FloatParameter
	float ___m_FloatParameter;
	// System.Int32 UnityEngine.AnimationEvent::m_IntParameter
	int32_t ___m_IntParameter;
	// System.Int32 UnityEngine.AnimationEvent::m_MessageOptions
	int32_t ___m_MessageOptions;
	// UnityEngine.AnimationEventSource UnityEngine.AnimationEvent::m_Source
	int32_t ___m_Source;
	// UnityEngine.AnimationState UnityEngine.AnimationEvent::m_StateSender
	AnimationState_t459 * ___m_StateSender;
	// UnityEngine.AnimatorStateInfo UnityEngine.AnimationEvent::m_AnimatorStateInfo
	AnimatorStateInfo_t467  ___m_AnimatorStateInfo;
	// UnityEngine.AnimatorClipInfo UnityEngine.AnimationEvent::m_AnimatorClipInfo
	AnimatorClipInfo_t2568  ___m_AnimatorClipInfo;
};
