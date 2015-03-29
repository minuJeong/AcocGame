#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Physics
struct Physics_t2558;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t775;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"

// System.Boolean UnityEngine.Physics::Internal_Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
 bool Physics_Internal_Raycast_m8669 (Object_t * __this/* static, unused */, Vector3_t31  ___origin, Vector3_t31  ___direction, RaycastHit_t397 * ___hitInfo, float ___maxDistance, int32_t ___layermask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32)
 bool Physics_INTERNAL_CALL_Internal_Raycast_m8670 (Object_t * __this/* static, unused */, Vector3_t31 * ___origin, Vector3_t31 * ___direction, RaycastHit_t397 * ___hitInfo, float ___maxDistance, int32_t ___layermask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
 bool Physics_Raycast_m8671 (Object_t * __this/* static, unused */, Vector3_t31  ___origin, Vector3_t31  ___direction, RaycastHit_t397 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
 bool Physics_Raycast_m2381 (Object_t * __this/* static, unused */, Ray_t396  ___ray, RaycastHit_t397 * ___hitInfo, float ___maxDistance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
 bool Physics_Raycast_m2783 (Object_t * __this/* static, unused */, Ray_t396  ___ray, RaycastHit_t397 * ___hitInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
 bool Physics_Raycast_m4245 (Object_t * __this/* static, unused */, Ray_t396  ___ray, RaycastHit_t397 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32)
 RaycastHitU5BU5D_t775* Physics_RaycastAll_m4132 (Object_t * __this/* static, unused */, Ray_t396  ___ray, float ___maxDistance, int32_t ___layerMask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32)
 RaycastHitU5BU5D_t775* Physics_RaycastAll_m8672 (Object_t * __this/* static, unused */, Vector3_t31  ___origin, Vector3_t31  ___direction, float ___maxDistance, int32_t ___layermask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32)
 RaycastHitU5BU5D_t775* Physics_INTERNAL_CALL_RaycastAll_m8673 (Object_t * __this/* static, unused */, Vector3_t31 * ___origin, Vector3_t31 * ___direction, float ___maxDistance, int32_t ___layermask, MethodInfo* method) IL2CPP_METHOD_ATTR;
