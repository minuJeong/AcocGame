#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AudioClip
struct AudioClip_t59;
// System.Single[]
struct SingleU5BU5D_t53;

// System.Single UnityEngine.AudioClip::get_length()
 float AudioClip_get_length_m554 (AudioClip_t59 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioClip::InvokePCMReaderCallback_Internal(System.Single[])
 void AudioClip_InvokePCMReaderCallback_Internal_m8705 (AudioClip_t59 * __this, SingleU5BU5D_t53* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioClip::InvokePCMSetPositionCallback_Internal(System.Int32)
 void AudioClip_InvokePCMSetPositionCallback_Internal_m8706 (AudioClip_t59 * __this, int32_t ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
