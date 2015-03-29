#pragma once
#include <stdint.h>
// UnityEngine.Animator
struct Animator_t168;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t169;
// PhotonView
struct PhotonView_t170;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// JumpAndRunMovement
struct JumpAndRunMovement_t171  : public MonoBehaviour_t58
{
	// System.Single JumpAndRunMovement::Speed
	float ___Speed;
	// System.Single JumpAndRunMovement::JumpForce
	float ___JumpForce;
	// UnityEngine.Animator JumpAndRunMovement::m_Animator
	Animator_t168 * ___m_Animator;
	// UnityEngine.Rigidbody2D JumpAndRunMovement::m_Body
	Rigidbody2D_t169 * ___m_Body;
	// PhotonView JumpAndRunMovement::m_PhotonView
	PhotonView_t170 * ___m_PhotonView;
	// System.Boolean JumpAndRunMovement::m_IsGrounded
	bool ___m_IsGrounded;
};
