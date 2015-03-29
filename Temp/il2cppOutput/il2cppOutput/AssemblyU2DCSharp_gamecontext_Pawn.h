#pragma once
#include <stdint.h>
// UnityEngine.NavMeshAgent
struct NavMeshAgent_t383;
// gamecontext.uicontrol.SelectCursor
struct SelectCursor_t384;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// gamecontext.Pawn
struct Pawn_t382  : public MonoBehaviour_t58
{
	// UnityEngine.NavMeshAgent gamecontext.Pawn::CachedNMAgent
	NavMeshAgent_t383 * ___CachedNMAgent;
	// gamecontext.uicontrol.SelectCursor gamecontext.Pawn::SelectCursor
	SelectCursor_t384 * ___SelectCursor;
};
