#pragma once
#include <stdint.h>
// UnityEngine.AnimationClip
struct AnimationClip_t207;
// UnityEngine.Animation
struct Animation_t208;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// CharacterState
#include "AssemblyU2DCSharp_CharacterState.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.CollisionFlags
#include "UnityEngine_UnityEngine_CollisionFlags.h"
// ThirdPersonController
struct ThirdPersonController_t225  : public MonoBehaviour_t58
{
	// UnityEngine.AnimationClip ThirdPersonController::idleAnimation
	AnimationClip_t207 * ___idleAnimation;
	// UnityEngine.AnimationClip ThirdPersonController::walkAnimation
	AnimationClip_t207 * ___walkAnimation;
	// UnityEngine.AnimationClip ThirdPersonController::runAnimation
	AnimationClip_t207 * ___runAnimation;
	// UnityEngine.AnimationClip ThirdPersonController::jumpPoseAnimation
	AnimationClip_t207 * ___jumpPoseAnimation;
	// System.Single ThirdPersonController::walkMaxAnimationSpeed
	float ___walkMaxAnimationSpeed;
	// System.Single ThirdPersonController::trotMaxAnimationSpeed
	float ___trotMaxAnimationSpeed;
	// System.Single ThirdPersonController::runMaxAnimationSpeed
	float ___runMaxAnimationSpeed;
	// System.Single ThirdPersonController::jumpAnimationSpeed
	float ___jumpAnimationSpeed;
	// System.Single ThirdPersonController::landAnimationSpeed
	float ___landAnimationSpeed;
	// UnityEngine.Animation ThirdPersonController::_animation
	Animation_t208 * ____animation;
	// CharacterState ThirdPersonController::_characterState
	int32_t ____characterState;
	// System.Single ThirdPersonController::walkSpeed
	float ___walkSpeed;
	// System.Single ThirdPersonController::trotSpeed
	float ___trotSpeed;
	// System.Single ThirdPersonController::runSpeed
	float ___runSpeed;
	// System.Single ThirdPersonController::inAirControlAcceleration
	float ___inAirControlAcceleration;
	// System.Single ThirdPersonController::jumpHeight
	float ___jumpHeight;
	// System.Single ThirdPersonController::gravity
	float ___gravity;
	// System.Single ThirdPersonController::speedSmoothing
	float ___speedSmoothing;
	// System.Single ThirdPersonController::rotateSpeed
	float ___rotateSpeed;
	// System.Single ThirdPersonController::trotAfterSeconds
	float ___trotAfterSeconds;
	// System.Boolean ThirdPersonController::canJump
	bool ___canJump;
	// System.Single ThirdPersonController::jumpRepeatTime
	float ___jumpRepeatTime;
	// System.Single ThirdPersonController::jumpTimeout
	float ___jumpTimeout;
	// System.Single ThirdPersonController::groundedTimeout
	float ___groundedTimeout;
	// System.Single ThirdPersonController::lockCameraTimer
	float ___lockCameraTimer;
	// UnityEngine.Vector3 ThirdPersonController::moveDirection
	Vector3_t31  ___moveDirection;
	// System.Single ThirdPersonController::verticalSpeed
	float ___verticalSpeed;
	// System.Single ThirdPersonController::moveSpeed
	float ___moveSpeed;
	// UnityEngine.CollisionFlags ThirdPersonController::collisionFlags
	int32_t ___collisionFlags;
	// System.Boolean ThirdPersonController::jumping
	bool ___jumping;
	// System.Boolean ThirdPersonController::jumpingReachedApex
	bool ___jumpingReachedApex;
	// System.Boolean ThirdPersonController::movingBack
	bool ___movingBack;
	// System.Boolean ThirdPersonController::isMoving
	bool ___isMoving;
	// System.Single ThirdPersonController::walkTimeStart
	float ___walkTimeStart;
	// System.Single ThirdPersonController::lastJumpButtonTime
	float ___lastJumpButtonTime;
	// System.Single ThirdPersonController::lastJumpTime
	float ___lastJumpTime;
	// UnityEngine.Vector3 ThirdPersonController::inAirVelocity
	Vector3_t31  ___inAirVelocity;
	// System.Single ThirdPersonController::lastGroundedTime
	float ___lastGroundedTime;
	// System.Boolean ThirdPersonController::isControllable
	bool ___isControllable;
	// UnityEngine.Vector3 ThirdPersonController::lastPos
	Vector3_t31  ___lastPos;
	// UnityEngine.Vector3 ThirdPersonController::velocity
	Vector3_t31  ___velocity;
};
