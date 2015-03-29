#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Quaternion
struct Quaternion_t110;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
 void Quaternion__ctor_m8347 (Quaternion_t110 * __this, float ___x, float ___y, float ___z, float ___w, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
 Quaternion_t110  Quaternion_get_identity_m2199 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
 float Quaternion_Dot_m8348 (Object_t * __this/* static, unused */, Quaternion_t110  ___a, Quaternion_t110  ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
 Quaternion_t110  Quaternion_LookRotation_m2309 (Object_t * __this/* static, unused */, Vector3_t31  ___forward, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_LookRotation(UnityEngine.Vector3&,UnityEngine.Vector3&)
 Quaternion_t110  Quaternion_INTERNAL_CALL_LookRotation_m8349 (Object_t * __this/* static, unused */, Vector3_t31 * ___forward, Vector3_t31 * ___upwards, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
 Quaternion_t110  Quaternion_Slerp_m2363 (Object_t * __this/* static, unused */, Quaternion_t110  ___from, Quaternion_t110  ___to, float ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Slerp(UnityEngine.Quaternion&,UnityEngine.Quaternion&,System.Single)
 Quaternion_t110  Quaternion_INTERNAL_CALL_Slerp_m8350 (Object_t * __this/* static, unused */, Quaternion_t110 * ___from, Quaternion_t110 * ___to, float ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Lerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
 Quaternion_t110  Quaternion_Lerp_m2368 (Object_t * __this/* static, unused */, Quaternion_t110  ___from, Quaternion_t110  ___to, float ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Lerp(UnityEngine.Quaternion&,UnityEngine.Quaternion&,System.Single)
 Quaternion_t110  Quaternion_INTERNAL_CALL_Lerp_m8351 (Object_t * __this/* static, unused */, Quaternion_t110 * ___from, Quaternion_t110 * ___to, float ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::RotateTowards(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
 Quaternion_t110  Quaternion_RotateTowards_m2698 (Object_t * __this/* static, unused */, Quaternion_t110  ___from, Quaternion_t110  ___to, float ___maxDegreesDelta, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::UnclampedSlerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
 Quaternion_t110  Quaternion_UnclampedSlerp_m8352 (Object_t * __this/* static, unused */, Quaternion_t110  ___from, Quaternion_t110  ___to, float ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_UnclampedSlerp(UnityEngine.Quaternion&,UnityEngine.Quaternion&,System.Single)
 Quaternion_t110  Quaternion_INTERNAL_CALL_UnclampedSlerp_m8353 (Object_t * __this/* static, unused */, Quaternion_t110 * ___from, Quaternion_t110 * ___to, float ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
 Quaternion_t110  Quaternion_Inverse_m4454 (Object_t * __this/* static, unused */, Quaternion_t110  ___rotation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Inverse(UnityEngine.Quaternion&)
 Quaternion_t110  Quaternion_INTERNAL_CALL_Inverse_m8354 (Object_t * __this/* static, unused */, Quaternion_t110 * ___rotation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Quaternion::ToString()
 String_t* Quaternion_ToString_m8355 (Quaternion_t110 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Quaternion::Angle(UnityEngine.Quaternion,UnityEngine.Quaternion)
 float Quaternion_Angle_m2414 (Object_t * __this/* static, unused */, Quaternion_t110  ___a, Quaternion_t110  ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
 Vector3_t31  Quaternion_get_eulerAngles_m2353 (Quaternion_t110 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
 Quaternion_t110  Quaternion_Euler_m2306 (Object_t * __this/* static, unused */, float ___x, float ___y, float ___z, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
 Quaternion_t110  Quaternion_Euler_m573 (Object_t * __this/* static, unused */, Vector3_t31  ___euler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
 Vector3_t31  Quaternion_Internal_ToEulerRad_m8356 (Object_t * __this/* static, unused */, Quaternion_t110  ___rotation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::INTERNAL_CALL_Internal_ToEulerRad(UnityEngine.Quaternion&)
 Vector3_t31  Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m8357 (Object_t * __this/* static, unused */, Quaternion_t110 * ___rotation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
 Quaternion_t110  Quaternion_Internal_FromEulerRad_m8358 (Object_t * __this/* static, unused */, Vector3_t31  ___euler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Internal_FromEulerRad(UnityEngine.Vector3&)
 Quaternion_t110  Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m8359 (Object_t * __this/* static, unused */, Vector3_t31 * ___euler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Quaternion::GetHashCode()
 int32_t Quaternion_GetHashCode_m8360 (Quaternion_t110 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::Equals(System.Object)
 bool Quaternion_Equals_m8361 (Quaternion_t110 * __this, Object_t * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
 Quaternion_t110  Quaternion_op_Multiply_m2312 (Object_t * __this/* static, unused */, Quaternion_t110  ___lhs, Quaternion_t110  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
 Vector3_t31  Quaternion_op_Multiply_m2308 (Object_t * __this/* static, unused */, Quaternion_t110  ___rotation, Vector3_t31  ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::op_Inequality(UnityEngine.Quaternion,UnityEngine.Quaternion)
 bool Quaternion_op_Inequality_m2514 (Object_t * __this/* static, unused */, Quaternion_t110  ___lhs, Quaternion_t110  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
