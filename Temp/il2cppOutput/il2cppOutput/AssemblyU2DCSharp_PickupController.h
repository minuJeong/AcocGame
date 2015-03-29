#pragma once
#include <stdint.h>
// UnityEngine.AnimationClip
struct AnimationClip_t207;
// UnityEngine.Animation
struct Animation_t208;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PickupCharacterState
#include "AssemblyU2DCSharp_PickupCharacterState.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.CollisionFlags
#include "UnityEngine_UnityEngine_CollisionFlags.h"
// PickupController
struct PickupController_t203  : public MonoBehaviour_t58
{
	// UnityEngine.AnimationClip PickupController::idleAnimation
	AnimationClip_t207 * ___idleAnimation;
	// UnityEngine.AnimationClip PickupController::walkAnimation
	AnimationClip_t207 * ___walkAnimation;
	// UnityEngine.AnimationClip PickupController::runAnimation
	AnimationClip_t207 * ___runAnimation;
	// UnityEngine.AnimationClip PickupController::jumpPoseAnimation
	AnimationClip_t207 * ___jumpPoseAnimation;
	// System.Single PickupController::walkMaxAnimationSpeed
	float ___walkMaxAnimationSpeed;
	// System.Single PickupController::trotMaxAnimationSpeed
	float ___trotMaxAnimationSpeed;
	// System.Single PickupController::runMaxAnimationSpeed
	float ___runMaxAnimationSpeed;
	// System.Single PickupController::jumpAnimationSpeed
	float ___jumpAnimationSpeed;
	// System.Single PickupController::landAnimationSpeed
	float ___landAnimationSpeed;
	// UnityEngine.Animation PickupController::_animation
	Animation_t208 * ____animation;
	// PickupCharacterState PickupController::_characterState
	int32_t ____characterState;
	// System.Single PickupController::walkSpeed
	float ___walkSpeed;
	// System.Single PickupController::trotSpeed
	float ___trotSpeed;
	// System.Single PickupController::runSpeed
	float ___runSpeed;
	// System.Single PickupController::inAirControlAcceleration
	float ___inAirControlAcceleration;
	// System.Single PickupController::jumpHeight
	float ___jumpHeight;
	// System.Single PickupController::gravity
	float ___gravity;
	// System.Single PickupController::speedSmoothing
	float ___speedSmoothing;
	// System.Single PickupController::rotateSpeed
	float ___rotateSpeed;
	// System.Single PickupController::trotAfterSeconds
	float ___trotAfterSeconds;
	// System.Boolean PickupController::canJump
	bool ___canJump;
	// System.Single PickupController::jumpRepeatTime
	float ___jumpRepeatTime;
	// System.Single PickupController::jumpTimeout
	float ___jumpTimeout;
	// System.Single PickupController::groundedTimeout
	float ___groundedTimeout;
	// System.Single PickupController::lockCameraTimer
	float ___lockCameraTimer;
	// UnityEngine.Vector3 PickupController::moveDirection
	Vector3_t31  ___moveDirection;
	// System.Single PickupController::verticalSpeed
	float ___verticalSpeed;
	// System.Single PickupController::moveSpeed
	float ___moveSpeed;
	// UnityEngine.CollisionFlags PickupController::collisionFlags
	int32_t ___collisionFlags;
	// System.Boolean PickupController::jumping
	bool ___jumping;
	// System.Boolean PickupController::jumpingReachedApex
	bool ___jumpingReachedApex;
	// System.Boolean PickupController::movingBack
	bool ___movingBack;
	// System.Boolean PickupController::isMoving
	bool ___isMoving;
	// System.Single PickupController::walkTimeStart
	float ___walkTimeStart;
	// System.Single PickupController::lastJumpButtonTime
	float ___lastJumpButtonTime;
	// System.Single PickupController::lastJumpTime
	float ___lastJumpTime;
	// UnityEngine.Vector3 PickupController::inAirVelocity
	Vector3_t31  ___inAirVelocity;
	// System.Single PickupController::lastGroundedTime
	float ___lastGroundedTime;
	// UnityEngine.Vector3 PickupController::velocity
	Vector3_t31  ___velocity;
	// UnityEngine.Vector3 PickupController::lastPos
	Vector3_t31  ___lastPos;
	// UnityEngine.Vector3 PickupController::remotePosition
	Vector3_t31  ___remotePosition;
	// System.Boolean PickupController::isControllable
	bool ___isControllable;
	// System.Boolean PickupController::DoRotate
	bool ___DoRotate;
	// System.Single PickupController::RemoteSmoothing
	float ___RemoteSmoothing;
	// System.Boolean PickupController::AssignAsTagObject
	bool ___AssignAsTagObject;
};
