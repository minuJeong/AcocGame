#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Bounds
struct Bounds_t458;
// System.Object
struct Object_t;
// System.String
struct String_t;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"

// System.Void UnityEngine.Bounds::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
 void Bounds__ctor_m4429 (Bounds_t458 * __this, Vector3_t31  ___center, Vector3_t31  ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Bounds::GetHashCode()
 int32_t Bounds_GetHashCode_m8403 (Bounds_t458 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::Equals(System.Object)
 bool Bounds_Equals_m8404 (Bounds_t458 * __this, Object_t * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
 Vector3_t31  Bounds_get_center_m2300 (Bounds_t458 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::set_center(UnityEngine.Vector3)
 void Bounds_set_center_m4431 (Bounds_t458 * __this, Vector3_t31  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
 Vector3_t31  Bounds_get_size_m4420 (Bounds_t458 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::set_size(UnityEngine.Vector3)
 void Bounds_set_size_m4430 (Bounds_t458 * __this, Vector3_t31  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_extents()
 Vector3_t31  Bounds_get_extents_m8405 (Bounds_t458 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::set_extents(UnityEngine.Vector3)
 void Bounds_set_extents_m8406 (Bounds_t458 * __this, Vector3_t31  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_min()
 Vector3_t31  Bounds_get_min_m4421 (Bounds_t458 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::set_min(UnityEngine.Vector3)
 void Bounds_set_min_m8407 (Bounds_t458 * __this, Vector3_t31  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_max()
 Vector3_t31  Bounds_get_max_m2301 (Bounds_t458 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::set_max(UnityEngine.Vector3)
 void Bounds_set_max_m8408 (Bounds_t458 * __this, Vector3_t31  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::SetMinMax(UnityEngine.Vector3,UnityEngine.Vector3)
 void Bounds_SetMinMax_m8409 (Bounds_t458 * __this, Vector3_t31  ___min, Vector3_t31  ___max, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::Encapsulate(UnityEngine.Vector3)
 void Bounds_Encapsulate_m4437 (Bounds_t458 * __this, Vector3_t31  ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::Encapsulate(UnityEngine.Bounds)
 void Bounds_Encapsulate_m8410 (Bounds_t458 * __this, Bounds_t458  ___bounds, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::Expand(System.Single)
 void Bounds_Expand_m8411 (Bounds_t458 * __this, float ___amount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::Expand(UnityEngine.Vector3)
 void Bounds_Expand_m8412 (Bounds_t458 * __this, Vector3_t31  ___amount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::Intersects(UnityEngine.Bounds)
 bool Bounds_Intersects_m8413 (Bounds_t458 * __this, Bounds_t458  ___bounds, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::Internal_Contains(UnityEngine.Bounds,UnityEngine.Vector3)
 bool Bounds_Internal_Contains_m8414 (Object_t * __this/* static, unused */, Bounds_t458  ___m, Vector3_t31  ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::INTERNAL_CALL_Internal_Contains(UnityEngine.Bounds&,UnityEngine.Vector3&)
 bool Bounds_INTERNAL_CALL_Internal_Contains_m8415 (Object_t * __this/* static, unused */, Bounds_t458 * ___m, Vector3_t31 * ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::Contains(UnityEngine.Vector3)
 bool Bounds_Contains_m8416 (Bounds_t458 * __this, Vector3_t31  ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Bounds::Internal_SqrDistance(UnityEngine.Bounds,UnityEngine.Vector3)
 float Bounds_Internal_SqrDistance_m8417 (Object_t * __this/* static, unused */, Bounds_t458  ___m, Vector3_t31  ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Bounds::INTERNAL_CALL_Internal_SqrDistance(UnityEngine.Bounds&,UnityEngine.Vector3&)
 float Bounds_INTERNAL_CALL_Internal_SqrDistance_m8418 (Object_t * __this/* static, unused */, Bounds_t458 * ___m, Vector3_t31 * ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Bounds::SqrDistance(UnityEngine.Vector3)
 float Bounds_SqrDistance_m8419 (Bounds_t458 * __this, Vector3_t31  ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::Internal_IntersectRay(UnityEngine.Ray&,UnityEngine.Bounds&,System.Single&)
 bool Bounds_Internal_IntersectRay_m8420 (Object_t * __this/* static, unused */, Ray_t396 * ___ray, Bounds_t458 * ___bounds, float* ___distance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::INTERNAL_CALL_Internal_IntersectRay(UnityEngine.Ray&,UnityEngine.Bounds&,System.Single&)
 bool Bounds_INTERNAL_CALL_Internal_IntersectRay_m8421 (Object_t * __this/* static, unused */, Ray_t396 * ___ray, Bounds_t458 * ___bounds, float* ___distance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::IntersectRay(UnityEngine.Ray)
 bool Bounds_IntersectRay_m8422 (Bounds_t458 * __this, Ray_t396  ___ray, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::IntersectRay(UnityEngine.Ray,System.Single&)
 bool Bounds_IntersectRay_m8423 (Bounds_t458 * __this, Ray_t396  ___ray, float* ___distance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::Internal_GetClosestPoint(UnityEngine.Bounds&,UnityEngine.Vector3&)
 Vector3_t31  Bounds_Internal_GetClosestPoint_m8424 (Object_t * __this/* static, unused */, Bounds_t458 * ___bounds, Vector3_t31 * ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::INTERNAL_CALL_Internal_GetClosestPoint(UnityEngine.Bounds&,UnityEngine.Vector3&)
 Vector3_t31  Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m8425 (Object_t * __this/* static, unused */, Bounds_t458 * ___bounds, Vector3_t31 * ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::ClosestPoint(UnityEngine.Vector3)
 Vector3_t31  Bounds_ClosestPoint_m8426 (Bounds_t458 * __this, Vector3_t31  ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Bounds::ToString()
 String_t* Bounds_ToString_m8427 (Bounds_t458 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Bounds::ToString(System.String)
 String_t* Bounds_ToString_m8428 (Bounds_t458 * __this, String_t* ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::op_Equality(UnityEngine.Bounds,UnityEngine.Bounds)
 bool Bounds_op_Equality_m8429 (Object_t * __this/* static, unused */, Bounds_t458  ___lhs, Bounds_t458  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::op_Inequality(UnityEngine.Bounds,UnityEngine.Bounds)
 bool Bounds_op_Inequality_m4424 (Object_t * __this/* static, unused */, Bounds_t458  ___lhs, Bounds_t458  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
