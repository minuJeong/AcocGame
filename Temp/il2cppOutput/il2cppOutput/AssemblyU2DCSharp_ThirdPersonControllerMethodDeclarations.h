#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ThirdPersonController
struct ThirdPersonController_t225;
// UnityEngine.ControllerColliderHit
struct ControllerColliderHit_t211;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void ThirdPersonController::.ctor()
 void ThirdPersonController__ctor_m1073 (ThirdPersonController_t225 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonController::Awake()
 void ThirdPersonController_Awake_m1074 (ThirdPersonController_t225 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonController::UpdateSmoothedMovementDirection()
 void ThirdPersonController_UpdateSmoothedMovementDirection_m1075 (ThirdPersonController_t225 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonController::ApplyJumping()
 void ThirdPersonController_ApplyJumping_m1076 (ThirdPersonController_t225 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonController::ApplyGravity()
 void ThirdPersonController_ApplyGravity_m1077 (ThirdPersonController_t225 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ThirdPersonController::CalculateJumpVerticalSpeed(System.Single)
 float ThirdPersonController_CalculateJumpVerticalSpeed_m1078 (ThirdPersonController_t225 * __this, float ___targetJumpHeight, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonController::DidJump()
 void ThirdPersonController_DidJump_m1079 (ThirdPersonController_t225 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonController::Update()
 void ThirdPersonController_Update_m1080 (ThirdPersonController_t225 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonController::OnControllerColliderHit(UnityEngine.ControllerColliderHit)
 void ThirdPersonController_OnControllerColliderHit_m1081 (ThirdPersonController_t225 * __this, ControllerColliderHit_t211 * ___hit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ThirdPersonController::GetSpeed()
 float ThirdPersonController_GetSpeed_m1082 (ThirdPersonController_t225 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ThirdPersonController::IsJumping()
 bool ThirdPersonController_IsJumping_m1083 (ThirdPersonController_t225 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ThirdPersonController::IsGrounded()
 bool ThirdPersonController_IsGrounded_m1084 (ThirdPersonController_t225 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ThirdPersonController::GetDirection()
 Vector3_t31  ThirdPersonController_GetDirection_m1085 (ThirdPersonController_t225 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ThirdPersonController::IsMovingBackwards()
 bool ThirdPersonController_IsMovingBackwards_m1086 (ThirdPersonController_t225 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ThirdPersonController::GetLockCameraTimer()
 float ThirdPersonController_GetLockCameraTimer_m1087 (ThirdPersonController_t225 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ThirdPersonController::IsMoving()
 bool ThirdPersonController_IsMoving_m1088 (ThirdPersonController_t225 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ThirdPersonController::HasJumpReachedApex()
 bool ThirdPersonController_HasJumpReachedApex_m1089 (ThirdPersonController_t225 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ThirdPersonController::IsGroundedWithTimeout()
 bool ThirdPersonController_IsGroundedWithTimeout_m1090 (ThirdPersonController_t225 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonController::Reset()
 void ThirdPersonController_Reset_m1091 (ThirdPersonController_t225 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
