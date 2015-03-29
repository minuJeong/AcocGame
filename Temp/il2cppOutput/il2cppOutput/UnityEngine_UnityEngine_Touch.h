#pragma once
#include <stdint.h>
// System.ValueType
#include "mscorlib_System_ValueType.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhase.h"
// UnityEngine.Touch
struct Touch_t526 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t51  ___m_Position;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t51  ___m_RawPosition;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t51  ___m_PositionDelta;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase;
};
// Native definition for marshalling of: UnityEngine.Touch
struct Touch_t526_marshaled
{
	int32_t ___m_FingerId;
	Vector2_t51  ___m_Position;
	Vector2_t51  ___m_RawPosition;
	Vector2_t51  ___m_PositionDelta;
	float ___m_TimeDelta;
	int32_t ___m_TapCount;
	int32_t ___m_Phase;
};
