#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimationCurve
struct AnimationCurve_t342;
struct AnimationCurve_t342_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t524;

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
 void AnimationCurve__ctor_m2695 (AnimationCurve_t342 * __this, KeyframeU5BU5D_t524* ___keys, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
 void AnimationCurve__ctor_m8730 (AnimationCurve_t342 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
 void AnimationCurve_Cleanup_m8731 (AnimationCurve_t342 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
 void AnimationCurve_Finalize_m8732 (AnimationCurve_t342 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
 void AnimationCurve_Init_m8733 (AnimationCurve_t342 * __this, KeyframeU5BU5D_t524* ___keys, MethodInfo* method) IL2CPP_METHOD_ATTR;
void AnimationCurve_t342_marshal(const AnimationCurve_t342& unmarshaled, AnimationCurve_t342_marshaled& marshaled);
void AnimationCurve_t342_marshal_back(const AnimationCurve_t342_marshaled& marshaled, AnimationCurve_t342& unmarshaled);
void AnimationCurve_t342_marshal_cleanup(AnimationCurve_t342_marshaled& marshaled);
