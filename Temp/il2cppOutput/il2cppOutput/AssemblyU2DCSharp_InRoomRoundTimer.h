#pragma once
#include <stdint.h>
// System.String
struct String_t;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// InRoomRoundTimer
struct InRoomRoundTimer_t348  : public MonoBehaviour_t58
{
	// System.Int32 InRoomRoundTimer::SecondsPerTurn
	int32_t ___SecondsPerTurn;
	// System.Double InRoomRoundTimer::StartTime
	double ___StartTime;
	// UnityEngine.Rect InRoomRoundTimer::TextPos
	Rect_t55  ___TextPos;
	// System.Boolean InRoomRoundTimer::startRoundWhenTimeIsSynced
	bool ___startRoundWhenTimeIsSynced;
};
