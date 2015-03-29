#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AudioSource
struct AudioSource_t49;
// UnityEngine.AudioClip
struct AudioClip_t59;

// System.Single UnityEngine.AudioSource::get_volume()
 float AudioSource_get_volume_m513 (AudioSource_t49 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
 void AudioSource_set_volume_m515 (AudioSource_t49 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AudioSource::get_pitch()
 float AudioSource_get_pitch_m514 (AudioSource_t49 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_pitch(System.Single)
 void AudioSource_set_pitch_m516 (AudioSource_t49 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioClip UnityEngine.AudioSource::get_clip()
 AudioClip_t59 * AudioSource_get_clip_m553 (AudioSource_t49 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
 void AudioSource_set_clip_m552 (AudioSource_t49 * __this, AudioClip_t59 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Play(System.UInt64)
 void AudioSource_Play_m8707 (AudioSource_t49 * __this, uint64_t ___delay, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Play()
 void AudioSource_Play_m2374 (AudioSource_t49 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip,System.Single)
 void AudioSource_PlayOneShot_m8708 (AudioSource_t49 * __this, AudioClip_t59 * ___clip, float ___volumeScale, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
 void AudioSource_PlayOneShot_m581 (AudioSource_t49 * __this, AudioClip_t59 * ___clip, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_playOnAwake(System.Boolean)
 void AudioSource_set_playOnAwake_m551 (AudioSource_t49 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
