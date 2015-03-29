#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PickupCamera
struct PickupCamera_t205;
// UnityEngine.Transform
struct Transform_t56;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void PickupCamera::.ctor()
 void PickupCamera__ctor_m989 (PickupCamera_t205 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupCamera::OnEnable()
 void PickupCamera_OnEnable_m990 (PickupCamera_t205 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupCamera::DebugDrawStuff()
 void PickupCamera_DebugDrawStuff_m991 (PickupCamera_t205 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PickupCamera::AngleDistance(System.Single,System.Single)
 float PickupCamera_AngleDistance_m992 (PickupCamera_t205 * __this, float ___a, float ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupCamera::Apply(UnityEngine.Transform,UnityEngine.Vector3)
 void PickupCamera_Apply_m993 (PickupCamera_t205 * __this, Transform_t56 * ___dummyTarget, Vector3_t31  ___dummyCenter, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupCamera::LateUpdate()
 void PickupCamera_LateUpdate_m994 (PickupCamera_t205 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupCamera::Cut(UnityEngine.Transform,UnityEngine.Vector3)
 void PickupCamera_Cut_m995 (PickupCamera_t205 * __this, Transform_t56 * ___dummyTarget, Vector3_t31  ___dummyCenter, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupCamera::SetUpRotation(UnityEngine.Vector3,UnityEngine.Vector3)
 void PickupCamera_SetUpRotation_m996 (PickupCamera_t205 * __this, Vector3_t31  ___centerPos, Vector3_t31  ___headPos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PickupCamera::GetCenterOffset()
 Vector3_t31  PickupCamera_GetCenterOffset_m997 (PickupCamera_t205 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
