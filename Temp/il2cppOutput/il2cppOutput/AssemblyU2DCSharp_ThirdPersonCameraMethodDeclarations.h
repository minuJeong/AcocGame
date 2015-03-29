#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ThirdPersonCamera
struct ThirdPersonCamera_t226;
// UnityEngine.Transform
struct Transform_t56;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void ThirdPersonCamera::.ctor()
 void ThirdPersonCamera__ctor_m1064 (ThirdPersonCamera_t226 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::OnEnable()
 void ThirdPersonCamera_OnEnable_m1065 (ThirdPersonCamera_t226 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::DebugDrawStuff()
 void ThirdPersonCamera_DebugDrawStuff_m1066 (ThirdPersonCamera_t226 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ThirdPersonCamera::AngleDistance(System.Single,System.Single)
 float ThirdPersonCamera_AngleDistance_m1067 (ThirdPersonCamera_t226 * __this, float ___a, float ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::Apply(UnityEngine.Transform,UnityEngine.Vector3)
 void ThirdPersonCamera_Apply_m1068 (ThirdPersonCamera_t226 * __this, Transform_t56 * ___dummyTarget, Vector3_t31  ___dummyCenter, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::LateUpdate()
 void ThirdPersonCamera_LateUpdate_m1069 (ThirdPersonCamera_t226 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::Cut(UnityEngine.Transform,UnityEngine.Vector3)
 void ThirdPersonCamera_Cut_m1070 (ThirdPersonCamera_t226 * __this, Transform_t56 * ___dummyTarget, Vector3_t31  ___dummyCenter, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::SetUpRotation(UnityEngine.Vector3,UnityEngine.Vector3)
 void ThirdPersonCamera_SetUpRotation_m1071 (ThirdPersonCamera_t226 * __this, Vector3_t31  ___centerPos, Vector3_t31  ___headPos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ThirdPersonCamera::GetCenterOffset()
 Vector3_t31  ThirdPersonCamera_GetCenterOffset_m1072 (ThirdPersonCamera_t226 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
