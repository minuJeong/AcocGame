#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Rigidbody
struct Rigidbody_t104;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.ForceMode
#include "UnityEngine_UnityEngine_ForceMode.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"

// System.Void UnityEngine.Rigidbody::INTERNAL_get_velocity(UnityEngine.Vector3&)
 void Rigidbody_INTERNAL_get_velocity_m8674 (Rigidbody_t104 * __this, Vector3_t31 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_set_velocity(UnityEngine.Vector3&)
 void Rigidbody_INTERNAL_set_velocity_m8675 (Rigidbody_t104 * __this, Vector3_t31 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
 Vector3_t31  Rigidbody_get_velocity_m2651 (Rigidbody_t104 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
 void Rigidbody_set_velocity_m2648 (Rigidbody_t104 * __this, Vector3_t31  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_get_angularVelocity(UnityEngine.Vector3&)
 void Rigidbody_INTERNAL_get_angularVelocity_m8676 (Rigidbody_t104 * __this, Vector3_t31 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_set_angularVelocity(UnityEngine.Vector3&)
 void Rigidbody_INTERNAL_set_angularVelocity_m8677 (Rigidbody_t104 * __this, Vector3_t31 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_angularVelocity()
 Vector3_t31  Rigidbody_get_angularVelocity_m2652 (Rigidbody_t104 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_angularVelocity(UnityEngine.Vector3)
 void Rigidbody_set_angularVelocity_m2649 (Rigidbody_t104 * __this, Vector3_t31  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
 void Rigidbody_set_isKinematic_m2216 (Rigidbody_t104 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
 void Rigidbody_AddForce_m2712 (Rigidbody_t104 * __this, Vector3_t31  ___force, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddForce(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)
 void Rigidbody_INTERNAL_CALL_AddForce_m8678 (Object_t * __this/* static, unused */, Rigidbody_t104 * ___self, Vector3_t31 * ___force, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::MovePosition(UnityEngine.Vector3)
 void Rigidbody_MovePosition_m572 (Rigidbody_t104 * __this, Vector3_t31  ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_MovePosition(UnityEngine.Rigidbody,UnityEngine.Vector3&)
 void Rigidbody_INTERNAL_CALL_MovePosition_m8679 (Object_t * __this/* static, unused */, Rigidbody_t104 * ___self, Vector3_t31 * ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::MoveRotation(UnityEngine.Quaternion)
 void Rigidbody_MoveRotation_m576 (Rigidbody_t104 * __this, Quaternion_t110  ___rot, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_MoveRotation(UnityEngine.Rigidbody,UnityEngine.Quaternion&)
 void Rigidbody_INTERNAL_CALL_MoveRotation_m8680 (Object_t * __this/* static, unused */, Rigidbody_t104 * ___self, Quaternion_t110 * ___rot, MethodInfo* method) IL2CPP_METHOD_ATTR;
