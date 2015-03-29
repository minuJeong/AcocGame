#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Extensions
struct Extensions_t253;
// PhotonView[]
struct PhotonViewU5BU5D_t254;
// UnityEngine.GameObject
struct GameObject_t47;
// PhotonView
struct PhotonView_t170;
// System.Collections.IDictionary
struct IDictionary_t255;
// System.String
struct String_t;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t256;
// System.Int32[]
struct Int32U5BU5D_t257;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"

// PhotonView[] Extensions::GetPhotonViewsInChildren(UnityEngine.GameObject)
 PhotonViewU5BU5D_t254* Extensions_GetPhotonViewsInChildren_m1172 (Object_t * __this/* static, unused */, GameObject_t47 * ___go, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonView Extensions::GetPhotonView(UnityEngine.GameObject)
 PhotonView_t170 * Extensions_GetPhotonView_m1173 (Object_t * __this/* static, unused */, GameObject_t47 * ___go, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Extensions::AlmostEquals(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
 bool Extensions_AlmostEquals_m1174 (Object_t * __this/* static, unused */, Vector3_t31  ___target, Vector3_t31  ___second, float ___sqrMagnitudePrecision, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Extensions::AlmostEquals(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
 bool Extensions_AlmostEquals_m1175 (Object_t * __this/* static, unused */, Vector2_t51  ___target, Vector2_t51  ___second, float ___sqrMagnitudePrecision, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Extensions::AlmostEquals(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
 bool Extensions_AlmostEquals_m1176 (Object_t * __this/* static, unused */, Quaternion_t110  ___target, Quaternion_t110  ___second, float ___maxAngle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Extensions::AlmostEquals(System.Single,System.Single,System.Single)
 bool Extensions_AlmostEquals_m1177 (Object_t * __this/* static, unused */, float ___target, float ___second, float ___floatDiff, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Extensions::Merge(System.Collections.IDictionary,System.Collections.IDictionary)
 void Extensions_Merge_m1178 (Object_t * __this/* static, unused */, Object_t * ___target, Object_t * ___addHash, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Extensions::MergeStringKeys(System.Collections.IDictionary,System.Collections.IDictionary)
 void Extensions_MergeStringKeys_m1179 (Object_t * __this/* static, unused */, Object_t * ___target, Object_t * ___addHash, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Extensions::ToStringFull(System.Collections.IDictionary)
 String_t* Extensions_ToStringFull_m1180 (Object_t * __this/* static, unused */, Object_t * ___origin, MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable Extensions::StripToStringKeys(System.Collections.IDictionary)
 Hashtable_t256 * Extensions_StripToStringKeys_m1181 (Object_t * __this/* static, unused */, Object_t * ___original, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Extensions::StripKeysWithNullValues(System.Collections.IDictionary)
 void Extensions_StripKeysWithNullValues_m1182 (Object_t * __this/* static, unused */, Object_t * ___original, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Extensions::Contains(System.Int32[],System.Int32)
 bool Extensions_Contains_m1183 (Object_t * __this/* static, unused */, Int32U5BU5D_t257* ___target, int32_t ___nr, MethodInfo* method) IL2CPP_METHOD_ATTR;
