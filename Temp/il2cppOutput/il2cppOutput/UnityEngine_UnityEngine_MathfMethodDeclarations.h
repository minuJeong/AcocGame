#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Mathf
struct Mathf_t82;

// System.Void UnityEngine.Mathf::.cctor()
 void Mathf__cctor_m8439 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Sin(System.Single)
 float Mathf_Sin_m640 (Object_t * __this/* static, unused */, float ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Cos(System.Single)
 float Mathf_Cos_m642 (Object_t * __this/* static, unused */, float ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Asin(System.Single)
 float Mathf_Asin_m644 (Object_t * __this/* static, unused */, float ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Acos(System.Single)
 float Mathf_Acos_m8440 (Object_t * __this/* static, unused */, float ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Sqrt(System.Single)
 float Mathf_Sqrt_m643 (Object_t * __this/* static, unused */, float ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Abs(System.Single)
 float Mathf_Abs_m579 (Object_t * __this/* static, unused */, float ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
 float Mathf_Min_m570 (Object_t * __this/* static, unused */, float ___a, float ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
 int32_t Mathf_Min_m462 (Object_t * __this/* static, unused */, int32_t ___a, int32_t ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
 float Mathf_Max_m4456 (Object_t * __this/* static, unused */, float ___a, float ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
 int32_t Mathf_Max_m2362 (Object_t * __this/* static, unused */, int32_t ___a, int32_t ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Pow(System.Single,System.Single)
 float Mathf_Pow_m641 (Object_t * __this/* static, unused */, float ___f, float ___p, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Log(System.Single,System.Single)
 float Mathf_Log_m4503 (Object_t * __this/* static, unused */, float ___f, float ___p, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Floor(System.Single)
 float Mathf_Floor_m2762 (Object_t * __this/* static, unused */, float ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Round(System.Single)
 float Mathf_Round_m4404 (Object_t * __this/* static, unused */, float ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::CeilToInt(System.Single)
 int32_t Mathf_CeilToInt_m4514 (Object_t * __this/* static, unused */, float ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
 int32_t Mathf_FloorToInt_m461 (Object_t * __this/* static, unused */, float ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
 int32_t Mathf_RoundToInt_m4279 (Object_t * __this/* static, unused */, float ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Sign(System.Single)
 float Mathf_Sign_m4426 (Object_t * __this/* static, unused */, float ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
 float Mathf_Clamp_m569 (Object_t * __this/* static, unused */, float ___value, float ___min, float ___max, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
 int32_t Mathf_Clamp_m4182 (Object_t * __this/* static, unused */, int32_t ___value, int32_t ___min, int32_t ___max, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
 float Mathf_Clamp01_m639 (Object_t * __this/* static, unused */, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
 float Mathf_Lerp_m638 (Object_t * __this/* static, unused */, float ___from, float ___to, float ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::MoveTowards(System.Single,System.Single,System.Single)
 float Mathf_MoveTowards_m2357 (Object_t * __this/* static, unused */, float ___current, float ___target, float ___maxDelta, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
 bool Mathf_Approximately_m4100 (Object_t * __this/* static, unused */, float ___a, float ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::SmoothDamp(System.Single,System.Single,System.Single&,System.Single)
 float Mathf_SmoothDamp_m587 (Object_t * __this/* static, unused */, float ___current, float ___target, float* ___currentVelocity, float ___smoothTime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::SmoothDamp(System.Single,System.Single,System.Single&,System.Single,System.Single,System.Single)
 float Mathf_SmoothDamp_m4421 (Object_t * __this/* static, unused */, float ___current, float ___target, float* ___currentVelocity, float ___smoothTime, float ___maxSpeed, float ___deltaTime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::SmoothDampAngle(System.Single,System.Single,System.Single&,System.Single,System.Single)
 float Mathf_SmoothDampAngle_m2305 (Object_t * __this/* static, unused */, float ___current, float ___target, float* ___currentVelocity, float ___smoothTime, float ___maxSpeed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::SmoothDampAngle(System.Single,System.Single,System.Single&,System.Single)
 float Mathf_SmoothDampAngle_m588 (Object_t * __this/* static, unused */, float ___current, float ___target, float* ___currentVelocity, float ___smoothTime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::SmoothDampAngle(System.Single,System.Single,System.Single&,System.Single,System.Single,System.Single)
 float Mathf_SmoothDampAngle_m8441 (Object_t * __this/* static, unused */, float ___current, float ___target, float* ___currentVelocity, float ___smoothTime, float ___maxSpeed, float ___deltaTime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Repeat(System.Single,System.Single)
 float Mathf_Repeat_m2303 (Object_t * __this/* static, unused */, float ___t, float ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::InverseLerp(System.Single,System.Single,System.Single)
 float Mathf_InverseLerp_m4299 (Object_t * __this/* static, unused */, float ___from, float ___to, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::DeltaAngle(System.Single,System.Single)
 float Mathf_DeltaAngle_m8442 (Object_t * __this/* static, unused */, float ___current, float ___target, MethodInfo* method) IL2CPP_METHOD_ATTR;
