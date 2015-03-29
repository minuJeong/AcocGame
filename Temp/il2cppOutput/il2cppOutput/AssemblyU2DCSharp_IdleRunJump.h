#pragma once
#include <stdint.h>
// UnityEngine.Animator
struct Animator_t168;
// PhotonView
struct PhotonView_t170;
// PhotonTransformView
struct PhotonTransformView_t217;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// IdleRunJump
struct IdleRunJump_t238  : public MonoBehaviour_t58
{
	// UnityEngine.Animator IdleRunJump::animator
	Animator_t168 * ___animator;
	// System.Single IdleRunJump::DirectionDampTime
	float ___DirectionDampTime;
	// System.Boolean IdleRunJump::ApplyGravity
	bool ___ApplyGravity;
	// System.Single IdleRunJump::SynchronizedMaxSpeed
	float ___SynchronizedMaxSpeed;
	// System.Single IdleRunJump::TurnSpeedModifier
	float ___TurnSpeedModifier;
	// System.Single IdleRunJump::SynchronizedTurnSpeed
	float ___SynchronizedTurnSpeed;
	// System.Single IdleRunJump::SynchronizedSpeedAcceleration
	float ___SynchronizedSpeedAcceleration;
	// PhotonView IdleRunJump::m_PhotonView
	PhotonView_t170 * ___m_PhotonView;
	// PhotonTransformView IdleRunJump::m_TransformView
	PhotonTransformView_t217 * ___m_TransformView;
	// System.Single IdleRunJump::m_SpeedModifier
	float ___m_SpeedModifier;
};
