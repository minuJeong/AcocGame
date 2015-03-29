#pragma once
#include <stdint.h>
// UnityEngine.CharacterController
struct CharacterController_t216;
// UnityEngine.Animator
struct Animator_t168;
// PhotonView
struct PhotonView_t170;
// PhotonTransformView
struct PhotonTransformView_t217;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// RPGMovement
struct RPGMovement_t218  : public MonoBehaviour_t58
{
	// System.Single RPGMovement::ForwardSpeed
	float ___ForwardSpeed;
	// System.Single RPGMovement::BackwardSpeed
	float ___BackwardSpeed;
	// System.Single RPGMovement::StrafeSpeed
	float ___StrafeSpeed;
	// System.Single RPGMovement::RotateSpeed
	float ___RotateSpeed;
	// UnityEngine.CharacterController RPGMovement::m_CharacterController
	CharacterController_t216 * ___m_CharacterController;
	// UnityEngine.Vector3 RPGMovement::m_LastPosition
	Vector3_t31  ___m_LastPosition;
	// UnityEngine.Animator RPGMovement::m_Animator
	Animator_t168 * ___m_Animator;
	// PhotonView RPGMovement::m_PhotonView
	PhotonView_t170 * ___m_PhotonView;
	// PhotonTransformView RPGMovement::m_TransformView
	PhotonTransformView_t217 * ___m_TransformView;
	// System.Single RPGMovement::m_AnimatorSpeed
	float ___m_AnimatorSpeed;
	// UnityEngine.Vector3 RPGMovement::m_CurrentMovement
	Vector3_t31  ___m_CurrentMovement;
	// System.Single RPGMovement::m_CurrentTurnSpeed
	float ___m_CurrentTurnSpeed;
};
