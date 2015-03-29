#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PickupController
struct PickupController_t203;
// PhotonStream
struct PhotonStream_t209;
// PhotonMessageInfo
struct PhotonMessageInfo_t210;
// UnityEngine.ControllerColliderHit
struct ControllerColliderHit_t211;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void PickupController::.ctor()
 void PickupController__ctor_m998 (PickupController_t203 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupController::Awake()
 void PickupController_Awake_m999 (PickupController_t203 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupController::Update()
 void PickupController_Update_m1000 (PickupController_t203 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupController::OnPhotonSerializeView(PhotonStream,PhotonMessageInfo)
 void PickupController_OnPhotonSerializeView_m1001 (PickupController_t203 * __this, PhotonStream_t209 * ___stream, PhotonMessageInfo_t210 * ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupController::UpdateSmoothedMovementDirection()
 void PickupController_UpdateSmoothedMovementDirection_m1002 (PickupController_t203 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupController::ApplyJumping()
 void PickupController_ApplyJumping_m1003 (PickupController_t203 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupController::ApplyGravity()
 void PickupController_ApplyGravity_m1004 (PickupController_t203 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PickupController::CalculateJumpVerticalSpeed(System.Single)
 float PickupController_CalculateJumpVerticalSpeed_m1005 (PickupController_t203 * __this, float ___targetJumpHeight, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupController::DidJump()
 void PickupController_DidJump_m1006 (PickupController_t203 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupController::OnControllerColliderHit(UnityEngine.ControllerColliderHit)
 void PickupController_OnControllerColliderHit_m1007 (PickupController_t203 * __this, ControllerColliderHit_t211 * ___hit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PickupController::GetSpeed()
 float PickupController_GetSpeed_m1008 (PickupController_t203 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PickupController::IsJumping()
 bool PickupController_IsJumping_m1009 (PickupController_t203 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PickupController::IsGrounded()
 bool PickupController_IsGrounded_m1010 (PickupController_t203 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PickupController::GetDirection()
 Vector3_t31  PickupController_GetDirection_m1011 (PickupController_t203 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PickupController::IsMovingBackwards()
 bool PickupController_IsMovingBackwards_m1012 (PickupController_t203 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PickupController::GetLockCameraTimer()
 float PickupController_GetLockCameraTimer_m1013 (PickupController_t203 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PickupController::IsMoving()
 bool PickupController_IsMoving_m1014 (PickupController_t203 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PickupController::HasJumpReachedApex()
 bool PickupController_HasJumpReachedApex_m1015 (PickupController_t203 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PickupController::IsGroundedWithTimeout()
 bool PickupController_IsGroundedWithTimeout_m1016 (PickupController_t203 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupController::Reset()
 void PickupController_Reset_m1017 (PickupController_t203 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
