#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Animation
struct Animation_t208;
// UnityEngine.AnimationState
struct AnimationState_t459;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// UnityEngine.PlayMode
#include "UnityEngine_UnityEngine_PlayMode.h"

// UnityEngine.AnimationState UnityEngine.Animation::get_Item(System.String)
 AnimationState_t459 * Animation_get_Item_m2323 (Animation_t208 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::CrossFade(System.String,System.Single,UnityEngine.PlayMode)
 void Animation_CrossFade_m8738 (Animation_t208 * __this, String_t* ___animation, float ___fadeLength, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::CrossFade(System.String)
 void Animation_CrossFade_m2326 (Animation_t208 * __this, String_t* ___animation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Animation::GetEnumerator()
 Object_t * Animation_GetEnumerator_m8739 (Animation_t208 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationState UnityEngine.Animation::GetState(System.String)
 AnimationState_t459 * Animation_GetState_m8740 (Animation_t208 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationState UnityEngine.Animation::GetStateAtIndex(System.Int32)
 AnimationState_t459 * Animation_GetStateAtIndex_m8741 (Animation_t208 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animation::GetStateCount()
 int32_t Animation_GetStateCount_m8742 (Animation_t208 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
