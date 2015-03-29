#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Transform
struct Transform_t56;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UnityEngine.Space
#include "UnityEngine_UnityEngine_Space.h"

// System.Void UnityEngine.Transform::INTERNAL_get_position(UnityEngine.Vector3&)
 void Transform_INTERNAL_get_position_m8627 (Transform_t56 * __this, Vector3_t31 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_position(UnityEngine.Vector3&)
 void Transform_INTERNAL_set_position_m8628 (Transform_t56 * __this, Vector3_t31 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
 Vector3_t31  Transform_get_position_m526 (Transform_t56 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
 void Transform_set_position_m532 (Transform_t56 * __this, Vector3_t31  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_localPosition(UnityEngine.Vector3&)
 void Transform_INTERNAL_get_localPosition_m8629 (Transform_t56 * __this, Vector3_t31 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_localPosition(UnityEngine.Vector3&)
 void Transform_INTERNAL_set_localPosition_m8630 (Transform_t56 * __this, Vector3_t31 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
 Vector3_t31  Transform_get_localPosition_m530 (Transform_t56 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
 void Transform_set_localPosition_m531 (Transform_t56 * __this, Vector3_t31  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
 Vector3_t31  Transform_get_eulerAngles_m517 (Transform_t56 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
 void Transform_set_eulerAngles_m525 (Transform_t56 * __this, Vector3_t31  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_localEulerAngles(UnityEngine.Vector3&)
 void Transform_INTERNAL_get_localEulerAngles_m8631 (Transform_t56 * __this, Vector3_t31 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_localEulerAngles(UnityEngine.Vector3&)
 void Transform_INTERNAL_set_localEulerAngles_m8632 (Transform_t56 * __this, Vector3_t31 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_localEulerAngles()
 Vector3_t31  Transform_get_localEulerAngles_m534 (Transform_t56 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
 void Transform_set_localEulerAngles_m535 (Transform_t56 * __this, Vector3_t31  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
 Vector3_t31  Transform_get_right_m2356 (Transform_t56 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
 Vector3_t31  Transform_get_up_m2359 (Transform_t56 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
 Vector3_t31  Transform_get_forward_m2349 (Transform_t56 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_rotation(UnityEngine.Quaternion&)
 void Transform_INTERNAL_get_rotation_m8633 (Transform_t56 * __this, Quaternion_t110 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_rotation(UnityEngine.Quaternion&)
 void Transform_INTERNAL_set_rotation_m8634 (Transform_t56 * __this, Quaternion_t110 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
 Quaternion_t110  Transform_get_rotation_m2317 (Transform_t56 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
 void Transform_set_rotation_m575 (Transform_t56 * __this, Quaternion_t110  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_localRotation(UnityEngine.Quaternion&)
 void Transform_INTERNAL_get_localRotation_m8635 (Transform_t56 * __this, Quaternion_t110 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_localRotation(UnityEngine.Quaternion&)
 void Transform_INTERNAL_set_localRotation_m8636 (Transform_t56 * __this, Quaternion_t110 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
 Quaternion_t110  Transform_get_localRotation_m2360 (Transform_t56 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
 void Transform_set_localRotation_m574 (Transform_t56 * __this, Quaternion_t110  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_localScale(UnityEngine.Vector3&)
 void Transform_INTERNAL_get_localScale_m8637 (Transform_t56 * __this, Vector3_t31 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_localScale(UnityEngine.Vector3&)
 void Transform_INTERNAL_set_localScale_m8638 (Transform_t56 * __this, Vector3_t31 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
 Vector3_t31  Transform_get_localScale_m528 (Transform_t56 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
 void Transform_set_localScale_m533 (Transform_t56 * __this, Vector3_t31  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
 Transform_t56 * Transform_get_parent_m2346 (Transform_t56 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
 void Transform_set_parent_m2699 (Transform_t56 * __this, Transform_t56 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::get_parentInternal()
 Transform_t56 * Transform_get_parentInternal_m8639 (Transform_t56 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_parentInternal(UnityEngine.Transform)
 void Transform_set_parentInternal_m8640 (Transform_t56 * __this, Transform_t56 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
 void Transform_SetParent_m2760 (Transform_t56 * __this, Transform_t56 * ___parent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
 void Transform_SetParent_m8641 (Transform_t56 * __this, Transform_t56 * ___parent, bool ___worldPositionStays, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_worldToLocalMatrix(UnityEngine.Matrix4x4&)
 void Transform_INTERNAL_get_worldToLocalMatrix_m8642 (Transform_t56 * __this, Matrix4x4_t815 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_worldToLocalMatrix()
 Matrix4x4_t815  Transform_get_worldToLocalMatrix_m4430 (Transform_t56 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3,UnityEngine.Space)
 void Transform_Translate_m557 (Transform_t56 * __this, Vector3_t31  ___translation, int32_t ___relativeTo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,UnityEngine.Space)
 void Transform_Rotate_m577 (Transform_t56 * __this, Vector3_t31  ___eulerAngles, int32_t ___relativeTo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
 void Transform_Rotate_m2352 (Transform_t56 * __this, float ___xAngle, float ___yAngle, float ___zAngle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single,UnityEngine.Space)
 void Transform_Rotate_m8643 (Transform_t56 * __this, float ___xAngle, float ___yAngle, float ___zAngle, int32_t ___relativeTo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform)
 void Transform_LookAt_m2272 (Transform_t56 * __this, Transform_t56 * ___target, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform,UnityEngine.Vector3)
 void Transform_LookAt_m520 (Transform_t56 * __this, Transform_t56 * ___target, Vector3_t31  ___worldUp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3,UnityEngine.Vector3)
 void Transform_LookAt_m521 (Transform_t56 * __this, Vector3_t31  ___worldPosition, Vector3_t31  ___worldUp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_CALL_LookAt(UnityEngine.Transform,UnityEngine.Vector3&,UnityEngine.Vector3&)
 void Transform_INTERNAL_CALL_LookAt_m8644 (Object_t * __this/* static, unused */, Transform_t56 * ___self, Vector3_t31 * ___worldPosition, Vector3_t31 * ___worldUp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
 Vector3_t31  Transform_TransformDirection_m2318 (Transform_t56 * __this, Vector3_t31  ___direction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_TransformDirection(UnityEngine.Transform,UnityEngine.Vector3&)
 Vector3_t31  Transform_INTERNAL_CALL_TransformDirection_m8645 (Object_t * __this/* static, unused */, Transform_t56 * ___self, Vector3_t31 * ___direction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
 Vector3_t31  Transform_TransformPoint_m4453 (Transform_t56 * __this, Vector3_t31  ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_TransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)
 Vector3_t31  Transform_INTERNAL_CALL_TransformPoint_m8646 (Object_t * __this/* static, unused */, Transform_t56 * ___self, Vector3_t31 * ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
 Vector3_t31  Transform_InverseTransformPoint_m4340 (Transform_t56 * __this, Vector3_t31  ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_InverseTransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)
 Vector3_t31  Transform_INTERNAL_CALL_InverseTransformPoint_m8647 (Object_t * __this/* static, unused */, Transform_t56 * ___self, Vector3_t31 * ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::get_root()
 Transform_t56 * Transform_get_root_m2378 (Transform_t56 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Transform::get_childCount()
 int32_t Transform_get_childCount_m4544 (Transform_t56 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::SetAsFirstSibling()
 void Transform_SetAsFirstSibling_m4366 (Transform_t56 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
 Transform_t56 * Transform_Find_m8648 (Transform_t56 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::FindChild(System.String)
 Transform_t56 * Transform_FindChild_m2751 (Transform_t56 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
 Object_t * Transform_GetEnumerator_m493 (Transform_t56 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
 Transform_t56 * Transform_GetChild_m2348 (Transform_t56 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
