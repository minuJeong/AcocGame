#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimatorTransitionInfo
struct AnimatorTransitionInfo_t2571;
struct AnimatorTransitionInfo_t2571_marshaled;
// System.String
struct String_t;

// System.Boolean UnityEngine.AnimatorTransitionInfo::IsName(System.String)
 bool AnimatorTransitionInfo_IsName_m8751 (AnimatorTransitionInfo_t2571 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimatorTransitionInfo::IsUserName(System.String)
 bool AnimatorTransitionInfo_IsUserName_m8752 (AnimatorTransitionInfo_t2571 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_fullPathHash()
 int32_t AnimatorTransitionInfo_get_fullPathHash_m8753 (AnimatorTransitionInfo_t2571 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_nameHash()
 int32_t AnimatorTransitionInfo_get_nameHash_m8754 (AnimatorTransitionInfo_t2571 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_userNameHash()
 int32_t AnimatorTransitionInfo_get_userNameHash_m8755 (AnimatorTransitionInfo_t2571 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AnimatorTransitionInfo::get_normalizedTime()
 float AnimatorTransitionInfo_get_normalizedTime_m8756 (AnimatorTransitionInfo_t2571 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_anyState()
 bool AnimatorTransitionInfo_get_anyState_m8757 (AnimatorTransitionInfo_t2571 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_entry()
 bool AnimatorTransitionInfo_get_entry_m8758 (AnimatorTransitionInfo_t2571 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_exit()
 bool AnimatorTransitionInfo_get_exit_m8759 (AnimatorTransitionInfo_t2571 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void AnimatorTransitionInfo_t2571_marshal(const AnimatorTransitionInfo_t2571& unmarshaled, AnimatorTransitionInfo_t2571_marshaled& marshaled);
void AnimatorTransitionInfo_t2571_marshal_back(const AnimatorTransitionInfo_t2571_marshaled& marshaled, AnimatorTransitionInfo_t2571& unmarshaled);
void AnimatorTransitionInfo_t2571_marshal_cleanup(AnimatorTransitionInfo_t2571_marshaled& marshaled);
