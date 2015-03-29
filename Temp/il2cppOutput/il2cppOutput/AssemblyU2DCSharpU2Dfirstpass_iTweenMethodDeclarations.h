#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// iTween
struct iTween_t42;
// System.Collections.Hashtable
struct Hashtable_t48;
// UnityEngine.GameObject
struct GameObject_t47;
// UnityEngine.AudioClip
struct AudioClip_t59;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// UnityEngine.Transform[]
struct TransformU5BU5D_t61;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t32;
// UnityEngine.Texture2D
struct Texture2D_t62;
// UnityEngine.Transform
struct Transform_t56;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t5;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void iTween::.ctor(System.Collections.Hashtable)
 void iTween__ctor_m104 (iTween_t42 * __this, Hashtable_t48 * ___h, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::.cctor()
 void iTween__cctor_m105 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Init(UnityEngine.GameObject)
 void iTween_Init_m106 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::CameraFadeFrom(System.Single,System.Single)
 void iTween_CameraFadeFrom_m107 (Object_t * __this/* static, unused */, float ___amount, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::CameraFadeFrom(System.Collections.Hashtable)
 void iTween_CameraFadeFrom_m108 (Object_t * __this/* static, unused */, Hashtable_t48 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::CameraFadeTo(System.Single,System.Single)
 void iTween_CameraFadeTo_m109 (Object_t * __this/* static, unused */, float ___amount, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::CameraFadeTo(System.Collections.Hashtable)
 void iTween_CameraFadeTo_m110 (Object_t * __this/* static, unused */, Hashtable_t48 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ValueTo(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_ValueTo_m111 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, Hashtable_t48 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::FadeFrom(UnityEngine.GameObject,System.Single,System.Single)
 void iTween_FadeFrom_m112 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, float ___alpha, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::FadeFrom(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_FadeFrom_m113 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, Hashtable_t48 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::FadeTo(UnityEngine.GameObject,System.Single,System.Single)
 void iTween_FadeTo_m114 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, float ___alpha, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::FadeTo(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_FadeTo_m115 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, Hashtable_t48 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ColorFrom(UnityEngine.GameObject,UnityEngine.Color,System.Single)
 void iTween_ColorFrom_m116 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, Color_t30  ___color, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ColorFrom(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_ColorFrom_m117 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, Hashtable_t48 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ColorTo(UnityEngine.GameObject,UnityEngine.Color,System.Single)
 void iTween_ColorTo_m118 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, Color_t30  ___color, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ColorTo(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_ColorTo_m119 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, Hashtable_t48 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::AudioFrom(UnityEngine.GameObject,System.Single,System.Single,System.Single)
 void iTween_AudioFrom_m120 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, float ___volume, float ___pitch, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::AudioFrom(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_AudioFrom_m121 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, Hashtable_t48 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::AudioTo(UnityEngine.GameObject,System.Single,System.Single,System.Single)
 void iTween_AudioTo_m122 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, float ___volume, float ___pitch, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::AudioTo(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_AudioTo_m123 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, Hashtable_t48 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Stab(UnityEngine.GameObject,UnityEngine.AudioClip,System.Single)
 void iTween_Stab_m124 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, AudioClip_t59 * ___audioclip, float ___delay, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Stab(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_Stab_m125 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, Hashtable_t48 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::LookFrom(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
 void iTween_LookFrom_m126 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, Vector3_t31  ___looktarget, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::LookFrom(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_LookFrom_m127 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, Hashtable_t48 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::LookTo(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
 void iTween_LookTo_m128 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, Vector3_t31  ___looktarget, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::LookTo(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_LookTo_m129 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, Hashtable_t48 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::MoveTo(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
 void iTween_MoveTo_m130 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, Vector3_t31  ___position, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::MoveTo(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_MoveTo_m131 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, Hashtable_t48 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::MoveFrom(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
 void iTween_MoveFrom_m132 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, Vector3_t31  ___position, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::MoveFrom(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_MoveFrom_m133 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, Hashtable_t48 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::MoveAdd(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
 void iTween_MoveAdd_m134 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, Vector3_t31  ___amount, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::MoveAdd(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_MoveAdd_m135 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, Hashtable_t48 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::MoveBy(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
 void iTween_MoveBy_m136 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, Vector3_t31  ___amount, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::MoveBy(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_MoveBy_m137 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, Hashtable_t48 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ScaleTo(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
 void iTween_ScaleTo_m138 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, Vector3_t31  ___scale, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ScaleTo(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_ScaleTo_m139 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, Hashtable_t48 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ScaleFrom(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
 void iTween_ScaleFrom_m140 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, Vector3_t31  ___scale, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ScaleFrom(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_ScaleFrom_m141 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, Hashtable_t48 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ScaleAdd(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
 void iTween_ScaleAdd_m142 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, Vector3_t31  ___amount, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ScaleAdd(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_ScaleAdd_m143 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, Hashtable_t48 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ScaleBy(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
 void iTween_ScaleBy_m144 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, Vector3_t31  ___amount, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ScaleBy(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_ScaleBy_m145 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, Hashtable_t48 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RotateTo(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
 void iTween_RotateTo_m146 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, Vector3_t31  ___rotation, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RotateTo(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_RotateTo_m147 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, Hashtable_t48 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RotateFrom(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
 void iTween_RotateFrom_m148 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, Vector3_t31  ___rotation, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RotateFrom(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_RotateFrom_m149 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, Hashtable_t48 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RotateAdd(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
 void iTween_RotateAdd_m150 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, Vector3_t31  ___amount, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RotateAdd(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_RotateAdd_m151 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, Hashtable_t48 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RotateBy(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
 void iTween_RotateBy_m152 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, Vector3_t31  ___amount, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RotateBy(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_RotateBy_m153 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, Hashtable_t48 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ShakePosition(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
 void iTween_ShakePosition_m154 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, Vector3_t31  ___amount, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ShakePosition(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_ShakePosition_m155 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, Hashtable_t48 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ShakeScale(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
 void iTween_ShakeScale_m156 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, Vector3_t31  ___amount, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ShakeScale(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_ShakeScale_m157 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, Hashtable_t48 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ShakeRotation(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
 void iTween_ShakeRotation_m158 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, Vector3_t31  ___amount, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ShakeRotation(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_ShakeRotation_m159 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, Hashtable_t48 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::PunchPosition(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
 void iTween_PunchPosition_m160 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, Vector3_t31  ___amount, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::PunchPosition(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_PunchPosition_m161 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, Hashtable_t48 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::PunchRotation(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
 void iTween_PunchRotation_m162 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, Vector3_t31  ___amount, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::PunchRotation(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_PunchRotation_m163 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, Hashtable_t48 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::PunchScale(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
 void iTween_PunchScale_m164 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, Vector3_t31  ___amount, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::PunchScale(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_PunchScale_m165 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, Hashtable_t48 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateTargets()
 void iTween_GenerateTargets_m166 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateRectTargets()
 void iTween_GenerateRectTargets_m167 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateColorTargets()
 void iTween_GenerateColorTargets_m168 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateVector3Targets()
 void iTween_GenerateVector3Targets_m169 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateVector2Targets()
 void iTween_GenerateVector2Targets_m170 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateFloatTargets()
 void iTween_GenerateFloatTargets_m171 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateColorToTargets()
 void iTween_GenerateColorToTargets_m172 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateAudioToTargets()
 void iTween_GenerateAudioToTargets_m173 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateStabTargets()
 void iTween_GenerateStabTargets_m174 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateLookToTargets()
 void iTween_GenerateLookToTargets_m175 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateMoveToPathTargets()
 void iTween_GenerateMoveToPathTargets_m176 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateMoveToTargets()
 void iTween_GenerateMoveToTargets_m177 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateMoveByTargets()
 void iTween_GenerateMoveByTargets_m178 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateScaleToTargets()
 void iTween_GenerateScaleToTargets_m179 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateScaleByTargets()
 void iTween_GenerateScaleByTargets_m180 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateScaleAddTargets()
 void iTween_GenerateScaleAddTargets_m181 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateRotateToTargets()
 void iTween_GenerateRotateToTargets_m182 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateRotateAddTargets()
 void iTween_GenerateRotateAddTargets_m183 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateRotateByTargets()
 void iTween_GenerateRotateByTargets_m184 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateShakePositionTargets()
 void iTween_GenerateShakePositionTargets_m185 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateShakeScaleTargets()
 void iTween_GenerateShakeScaleTargets_m186 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateShakeRotationTargets()
 void iTween_GenerateShakeRotationTargets_m187 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GeneratePunchPositionTargets()
 void iTween_GeneratePunchPositionTargets_m188 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GeneratePunchRotationTargets()
 void iTween_GeneratePunchRotationTargets_m189 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GeneratePunchScaleTargets()
 void iTween_GeneratePunchScaleTargets_m190 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyRectTargets()
 void iTween_ApplyRectTargets_m191 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyColorTargets()
 void iTween_ApplyColorTargets_m192 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyVector3Targets()
 void iTween_ApplyVector3Targets_m193 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyVector2Targets()
 void iTween_ApplyVector2Targets_m194 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyFloatTargets()
 void iTween_ApplyFloatTargets_m195 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyColorToTargets()
 void iTween_ApplyColorToTargets_m196 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyAudioToTargets()
 void iTween_ApplyAudioToTargets_m197 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyStabTargets()
 void iTween_ApplyStabTargets_m198 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyMoveToPathTargets()
 void iTween_ApplyMoveToPathTargets_m199 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyMoveToTargets()
 void iTween_ApplyMoveToTargets_m200 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyMoveByTargets()
 void iTween_ApplyMoveByTargets_m201 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyScaleToTargets()
 void iTween_ApplyScaleToTargets_m202 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyLookToTargets()
 void iTween_ApplyLookToTargets_m203 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyRotateToTargets()
 void iTween_ApplyRotateToTargets_m204 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyRotateAddTargets()
 void iTween_ApplyRotateAddTargets_m205 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyShakePositionTargets()
 void iTween_ApplyShakePositionTargets_m206 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyShakeScaleTargets()
 void iTween_ApplyShakeScaleTargets_m207 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyShakeRotationTargets()
 void iTween_ApplyShakeRotationTargets_m208 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyPunchPositionTargets()
 void iTween_ApplyPunchPositionTargets_m209 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyPunchRotationTargets()
 void iTween_ApplyPunchRotationTargets_m210 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyPunchScaleTargets()
 void iTween_ApplyPunchScaleTargets_m211 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator iTween::TweenDelay()
 Object_t * iTween_TweenDelay_m212 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::TweenStart()
 void iTween_TweenStart_m213 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator iTween::TweenRestart()
 Object_t * iTween_TweenRestart_m214 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::TweenUpdate()
 void iTween_TweenUpdate_m215 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::TweenComplete()
 void iTween_TweenComplete_m216 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::TweenLoop()
 void iTween_TweenLoop_m217 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect iTween::RectUpdate(UnityEngine.Rect,UnityEngine.Rect,System.Single)
 Rect_t55  iTween_RectUpdate_m218 (Object_t * __this/* static, unused */, Rect_t55  ___currentValue, Rect_t55  ___targetValue, float ___speed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 iTween::Vector3Update(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
 Vector3_t31  iTween_Vector3Update_m219 (Object_t * __this/* static, unused */, Vector3_t31  ___currentValue, Vector3_t31  ___targetValue, float ___speed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 iTween::Vector2Update(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
 Vector2_t51  iTween_Vector2Update_m220 (Object_t * __this/* static, unused */, Vector2_t51  ___currentValue, Vector2_t51  ___targetValue, float ___speed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::FloatUpdate(System.Single,System.Single,System.Single)
 float iTween_FloatUpdate_m221 (Object_t * __this/* static, unused */, float ___currentValue, float ___targetValue, float ___speed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::FadeUpdate(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_FadeUpdate_m222 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, Hashtable_t48 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::FadeUpdate(UnityEngine.GameObject,System.Single,System.Single)
 void iTween_FadeUpdate_m223 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, float ___alpha, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ColorUpdate(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_ColorUpdate_m224 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, Hashtable_t48 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ColorUpdate(UnityEngine.GameObject,UnityEngine.Color,System.Single)
 void iTween_ColorUpdate_m225 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, Color_t30  ___color, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::AudioUpdate(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_AudioUpdate_m226 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, Hashtable_t48 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::AudioUpdate(UnityEngine.GameObject,System.Single,System.Single,System.Single)
 void iTween_AudioUpdate_m227 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, float ___volume, float ___pitch, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RotateUpdate(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_RotateUpdate_m228 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, Hashtable_t48 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RotateUpdate(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
 void iTween_RotateUpdate_m229 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, Vector3_t31  ___rotation, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ScaleUpdate(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_ScaleUpdate_m230 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, Hashtable_t48 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ScaleUpdate(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
 void iTween_ScaleUpdate_m231 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, Vector3_t31  ___scale, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::MoveUpdate(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_MoveUpdate_m232 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, Hashtable_t48 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::MoveUpdate(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
 void iTween_MoveUpdate_m233 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, Vector3_t31  ___position, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::LookUpdate(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_LookUpdate_m234 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, Hashtable_t48 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::LookUpdate(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
 void iTween_LookUpdate_m235 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, Vector3_t31  ___looktarget, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::PathLength(UnityEngine.Transform[])
 float iTween_PathLength_m236 (Object_t * __this/* static, unused */, TransformU5BU5D_t61* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::PathLength(UnityEngine.Vector3[])
 float iTween_PathLength_m237 (Object_t * __this/* static, unused */, Vector3U5BU5D_t32* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D iTween::CameraTexture(UnityEngine.Color)
 Texture2D_t62 * iTween_CameraTexture_m238 (Object_t * __this/* static, unused */, Color_t30  ___color, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::PutOnPath(UnityEngine.GameObject,UnityEngine.Vector3[],System.Single)
 void iTween_PutOnPath_m239 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, Vector3U5BU5D_t32* ___path, float ___percent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::PutOnPath(UnityEngine.Transform,UnityEngine.Vector3[],System.Single)
 void iTween_PutOnPath_m240 (Object_t * __this/* static, unused */, Transform_t56 * ___target, Vector3U5BU5D_t32* ___path, float ___percent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::PutOnPath(UnityEngine.GameObject,UnityEngine.Transform[],System.Single)
 void iTween_PutOnPath_m241 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, TransformU5BU5D_t61* ___path, float ___percent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::PutOnPath(UnityEngine.Transform,UnityEngine.Transform[],System.Single)
 void iTween_PutOnPath_m242 (Object_t * __this/* static, unused */, Transform_t56 * ___target, TransformU5BU5D_t61* ___path, float ___percent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 iTween::PointOnPath(UnityEngine.Transform[],System.Single)
 Vector3_t31  iTween_PointOnPath_m243 (Object_t * __this/* static, unused */, TransformU5BU5D_t61* ___path, float ___percent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLine(UnityEngine.Vector3[])
 void iTween_DrawLine_m244 (Object_t * __this/* static, unused */, Vector3U5BU5D_t32* ___line, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLine(UnityEngine.Vector3[],UnityEngine.Color)
 void iTween_DrawLine_m245 (Object_t * __this/* static, unused */, Vector3U5BU5D_t32* ___line, Color_t30  ___color, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLine(UnityEngine.Transform[])
 void iTween_DrawLine_m246 (Object_t * __this/* static, unused */, TransformU5BU5D_t61* ___line, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLine(UnityEngine.Transform[],UnityEngine.Color)
 void iTween_DrawLine_m247 (Object_t * __this/* static, unused */, TransformU5BU5D_t61* ___line, Color_t30  ___color, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLineGizmos(UnityEngine.Vector3[])
 void iTween_DrawLineGizmos_m248 (Object_t * __this/* static, unused */, Vector3U5BU5D_t32* ___line, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLineGizmos(UnityEngine.Vector3[],UnityEngine.Color)
 void iTween_DrawLineGizmos_m249 (Object_t * __this/* static, unused */, Vector3U5BU5D_t32* ___line, Color_t30  ___color, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLineGizmos(UnityEngine.Transform[])
 void iTween_DrawLineGizmos_m250 (Object_t * __this/* static, unused */, TransformU5BU5D_t61* ___line, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLineGizmos(UnityEngine.Transform[],UnityEngine.Color)
 void iTween_DrawLineGizmos_m251 (Object_t * __this/* static, unused */, TransformU5BU5D_t61* ___line, Color_t30  ___color, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLineHandles(UnityEngine.Vector3[])
 void iTween_DrawLineHandles_m252 (Object_t * __this/* static, unused */, Vector3U5BU5D_t32* ___line, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLineHandles(UnityEngine.Vector3[],UnityEngine.Color)
 void iTween_DrawLineHandles_m253 (Object_t * __this/* static, unused */, Vector3U5BU5D_t32* ___line, Color_t30  ___color, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLineHandles(UnityEngine.Transform[])
 void iTween_DrawLineHandles_m254 (Object_t * __this/* static, unused */, TransformU5BU5D_t61* ___line, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLineHandles(UnityEngine.Transform[],UnityEngine.Color)
 void iTween_DrawLineHandles_m255 (Object_t * __this/* static, unused */, TransformU5BU5D_t61* ___line, Color_t30  ___color, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 iTween::PointOnPath(UnityEngine.Vector3[],System.Single)
 Vector3_t31  iTween_PointOnPath_m256 (Object_t * __this/* static, unused */, Vector3U5BU5D_t32* ___path, float ___percent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPath(UnityEngine.Vector3[])
 void iTween_DrawPath_m257 (Object_t * __this/* static, unused */, Vector3U5BU5D_t32* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPath(UnityEngine.Vector3[],UnityEngine.Color)
 void iTween_DrawPath_m258 (Object_t * __this/* static, unused */, Vector3U5BU5D_t32* ___path, Color_t30  ___color, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPath(UnityEngine.Transform[])
 void iTween_DrawPath_m259 (Object_t * __this/* static, unused */, TransformU5BU5D_t61* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPath(UnityEngine.Transform[],UnityEngine.Color)
 void iTween_DrawPath_m260 (Object_t * __this/* static, unused */, TransformU5BU5D_t61* ___path, Color_t30  ___color, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPathGizmos(UnityEngine.Vector3[])
 void iTween_DrawPathGizmos_m261 (Object_t * __this/* static, unused */, Vector3U5BU5D_t32* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPathGizmos(UnityEngine.Vector3[],UnityEngine.Color)
 void iTween_DrawPathGizmos_m262 (Object_t * __this/* static, unused */, Vector3U5BU5D_t32* ___path, Color_t30  ___color, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPathGizmos(UnityEngine.Transform[])
 void iTween_DrawPathGizmos_m263 (Object_t * __this/* static, unused */, TransformU5BU5D_t61* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPathGizmos(UnityEngine.Transform[],UnityEngine.Color)
 void iTween_DrawPathGizmos_m264 (Object_t * __this/* static, unused */, TransformU5BU5D_t61* ___path, Color_t30  ___color, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPathHandles(UnityEngine.Vector3[])
 void iTween_DrawPathHandles_m265 (Object_t * __this/* static, unused */, Vector3U5BU5D_t32* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPathHandles(UnityEngine.Vector3[],UnityEngine.Color)
 void iTween_DrawPathHandles_m266 (Object_t * __this/* static, unused */, Vector3U5BU5D_t32* ___path, Color_t30  ___color, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPathHandles(UnityEngine.Transform[])
 void iTween_DrawPathHandles_m267 (Object_t * __this/* static, unused */, TransformU5BU5D_t61* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPathHandles(UnityEngine.Transform[],UnityEngine.Color)
 void iTween_DrawPathHandles_m268 (Object_t * __this/* static, unused */, TransformU5BU5D_t61* ___path, Color_t30  ___color, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::CameraFadeDepth(System.Int32)
 void iTween_CameraFadeDepth_m269 (Object_t * __this/* static, unused */, int32_t ___depth, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::CameraFadeDestroy()
 void iTween_CameraFadeDestroy_m270 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::CameraFadeSwap(UnityEngine.Texture2D)
 void iTween_CameraFadeSwap_m271 (Object_t * __this/* static, unused */, Texture2D_t62 * ___texture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject iTween::CameraFadeAdd(UnityEngine.Texture2D,System.Int32)
 GameObject_t47 * iTween_CameraFadeAdd_m272 (Object_t * __this/* static, unused */, Texture2D_t62 * ___texture, int32_t ___depth, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject iTween::CameraFadeAdd(UnityEngine.Texture2D)
 GameObject_t47 * iTween_CameraFadeAdd_m273 (Object_t * __this/* static, unused */, Texture2D_t62 * ___texture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject iTween::CameraFadeAdd()
 GameObject_t47 * iTween_CameraFadeAdd_m274 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Resume(UnityEngine.GameObject)
 void iTween_Resume_m275 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Resume(UnityEngine.GameObject,System.Boolean)
 void iTween_Resume_m276 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, bool ___includechildren, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Resume(UnityEngine.GameObject,System.String)
 void iTween_Resume_m277 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, String_t* ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Resume(UnityEngine.GameObject,System.String,System.Boolean)
 void iTween_Resume_m278 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, String_t* ___type, bool ___includechildren, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Resume()
 void iTween_Resume_m279 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Resume(System.String)
 void iTween_Resume_m280 (Object_t * __this/* static, unused */, String_t* ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Pause(UnityEngine.GameObject)
 void iTween_Pause_m281 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Pause(UnityEngine.GameObject,System.Boolean)
 void iTween_Pause_m282 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, bool ___includechildren, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Pause(UnityEngine.GameObject,System.String)
 void iTween_Pause_m283 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, String_t* ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Pause(UnityEngine.GameObject,System.String,System.Boolean)
 void iTween_Pause_m284 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, String_t* ___type, bool ___includechildren, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Pause()
 void iTween_Pause_m285 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Pause(System.String)
 void iTween_Pause_m286 (Object_t * __this/* static, unused */, String_t* ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 iTween::Count()
 int32_t iTween_Count_m287 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 iTween::Count(System.String)
 int32_t iTween_Count_m288 (Object_t * __this/* static, unused */, String_t* ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 iTween::Count(UnityEngine.GameObject)
 int32_t iTween_Count_m289 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 iTween::Count(UnityEngine.GameObject,System.String)
 int32_t iTween_Count_m290 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, String_t* ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Stop()
 void iTween_Stop_m291 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Stop(System.String)
 void iTween_Stop_m292 (Object_t * __this/* static, unused */, String_t* ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::StopByName(System.String)
 void iTween_StopByName_m293 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Stop(UnityEngine.GameObject)
 void iTween_Stop_m294 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Stop(UnityEngine.GameObject,System.Boolean)
 void iTween_Stop_m295 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, bool ___includechildren, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Stop(UnityEngine.GameObject,System.String)
 void iTween_Stop_m296 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, String_t* ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::StopByName(UnityEngine.GameObject,System.String)
 void iTween_StopByName_m297 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Stop(UnityEngine.GameObject,System.String,System.Boolean)
 void iTween_Stop_m298 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, String_t* ___type, bool ___includechildren, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::StopByName(UnityEngine.GameObject,System.String,System.Boolean)
 void iTween_StopByName_m299 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, String_t* ___name, bool ___includechildren, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable iTween::Hash(System.Object[])
 Hashtable_t48 * iTween_Hash_m300 (Object_t * __this/* static, unused */, ObjectU5BU5D_t5* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Awake()
 void iTween_Awake_m301 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator iTween::Start()
 Object_t * iTween_Start_m302 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Update()
 void iTween_Update_m303 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::FixedUpdate()
 void iTween_FixedUpdate_m304 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::LateUpdate()
 void iTween_LateUpdate_m305 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::OnEnable()
 void iTween_OnEnable_m306 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::OnDisable()
 void iTween_OnDisable_m307 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLineHelper(UnityEngine.Vector3[],UnityEngine.Color,System.String)
 void iTween_DrawLineHelper_m308 (Object_t * __this/* static, unused */, Vector3U5BU5D_t32* ___line, Color_t30  ___color, String_t* ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPathHelper(UnityEngine.Vector3[],UnityEngine.Color,System.String)
 void iTween_DrawPathHelper_m309 (Object_t * __this/* static, unused */, Vector3U5BU5D_t32* ___path, Color_t30  ___color, String_t* ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] iTween::PathControlPointGenerator(UnityEngine.Vector3[])
 Vector3U5BU5D_t32* iTween_PathControlPointGenerator_m310 (Object_t * __this/* static, unused */, Vector3U5BU5D_t32* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 iTween::Interp(UnityEngine.Vector3[],System.Single)
 Vector3_t31  iTween_Interp_m311 (Object_t * __this/* static, unused */, Vector3U5BU5D_t32* ___pts, float ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Launch(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_Launch_m312 (Object_t * __this/* static, unused */, GameObject_t47 * ___target, Hashtable_t48 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable iTween::CleanArgs(System.Collections.Hashtable)
 Hashtable_t48 * iTween_CleanArgs_m313 (Object_t * __this/* static, unused */, Hashtable_t48 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String iTween::GenerateID()
 String_t* iTween_GenerateID_m314 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RetrieveArgs()
 void iTween_RetrieveArgs_m315 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GetEasingFunction()
 void iTween_GetEasingFunction_m316 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::UpdatePercentage()
 void iTween_UpdatePercentage_m317 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::CallBack(System.String)
 void iTween_CallBack_m318 (iTween_t42 * __this, String_t* ___callbackType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Dispose()
 void iTween_Dispose_m319 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ConflictCheck()
 void iTween_ConflictCheck_m320 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::EnableKinematic()
 void iTween_EnableKinematic_m321 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DisableKinematic()
 void iTween_DisableKinematic_m322 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ResumeDelay()
 void iTween_ResumeDelay_m323 (iTween_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::linear(System.Single,System.Single,System.Single)
 float iTween_linear_m324 (iTween_t42 * __this, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::clerp(System.Single,System.Single,System.Single)
 float iTween_clerp_m325 (iTween_t42 * __this, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::spring(System.Single,System.Single,System.Single)
 float iTween_spring_m326 (iTween_t42 * __this, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInQuad(System.Single,System.Single,System.Single)
 float iTween_easeInQuad_m327 (iTween_t42 * __this, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeOutQuad(System.Single,System.Single,System.Single)
 float iTween_easeOutQuad_m328 (iTween_t42 * __this, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInOutQuad(System.Single,System.Single,System.Single)
 float iTween_easeInOutQuad_m329 (iTween_t42 * __this, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInCubic(System.Single,System.Single,System.Single)
 float iTween_easeInCubic_m330 (iTween_t42 * __this, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeOutCubic(System.Single,System.Single,System.Single)
 float iTween_easeOutCubic_m331 (iTween_t42 * __this, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInOutCubic(System.Single,System.Single,System.Single)
 float iTween_easeInOutCubic_m332 (iTween_t42 * __this, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInQuart(System.Single,System.Single,System.Single)
 float iTween_easeInQuart_m333 (iTween_t42 * __this, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeOutQuart(System.Single,System.Single,System.Single)
 float iTween_easeOutQuart_m334 (iTween_t42 * __this, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInOutQuart(System.Single,System.Single,System.Single)
 float iTween_easeInOutQuart_m335 (iTween_t42 * __this, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInQuint(System.Single,System.Single,System.Single)
 float iTween_easeInQuint_m336 (iTween_t42 * __this, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeOutQuint(System.Single,System.Single,System.Single)
 float iTween_easeOutQuint_m337 (iTween_t42 * __this, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInOutQuint(System.Single,System.Single,System.Single)
 float iTween_easeInOutQuint_m338 (iTween_t42 * __this, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInSine(System.Single,System.Single,System.Single)
 float iTween_easeInSine_m339 (iTween_t42 * __this, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeOutSine(System.Single,System.Single,System.Single)
 float iTween_easeOutSine_m340 (iTween_t42 * __this, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInOutSine(System.Single,System.Single,System.Single)
 float iTween_easeInOutSine_m341 (iTween_t42 * __this, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInExpo(System.Single,System.Single,System.Single)
 float iTween_easeInExpo_m342 (iTween_t42 * __this, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeOutExpo(System.Single,System.Single,System.Single)
 float iTween_easeOutExpo_m343 (iTween_t42 * __this, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInOutExpo(System.Single,System.Single,System.Single)
 float iTween_easeInOutExpo_m344 (iTween_t42 * __this, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInCirc(System.Single,System.Single,System.Single)
 float iTween_easeInCirc_m345 (iTween_t42 * __this, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeOutCirc(System.Single,System.Single,System.Single)
 float iTween_easeOutCirc_m346 (iTween_t42 * __this, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInOutCirc(System.Single,System.Single,System.Single)
 float iTween_easeInOutCirc_m347 (iTween_t42 * __this, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInBounce(System.Single,System.Single,System.Single)
 float iTween_easeInBounce_m348 (iTween_t42 * __this, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeOutBounce(System.Single,System.Single,System.Single)
 float iTween_easeOutBounce_m349 (iTween_t42 * __this, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInOutBounce(System.Single,System.Single,System.Single)
 float iTween_easeInOutBounce_m350 (iTween_t42 * __this, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInBack(System.Single,System.Single,System.Single)
 float iTween_easeInBack_m351 (iTween_t42 * __this, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeOutBack(System.Single,System.Single,System.Single)
 float iTween_easeOutBack_m352 (iTween_t42 * __this, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInOutBack(System.Single,System.Single,System.Single)
 float iTween_easeInOutBack_m353 (iTween_t42 * __this, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::punch(System.Single,System.Single)
 float iTween_punch_m354 (iTween_t42 * __this, float ___amplitude, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInElastic(System.Single,System.Single,System.Single)
 float iTween_easeInElastic_m355 (iTween_t42 * __this, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeOutElastic(System.Single,System.Single,System.Single)
 float iTween_easeOutElastic_m356 (iTween_t42 * __this, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInOutElastic(System.Single,System.Single,System.Single)
 float iTween_easeInOutElastic_m357 (iTween_t42 * __this, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
