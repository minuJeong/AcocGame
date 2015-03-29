#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.PlayerPrefs
struct PlayerPrefs_t2554;
// System.String
struct String_t;

// System.Boolean UnityEngine.PlayerPrefs::TrySetSetString(System.String,System.String)
 bool PlayerPrefs_TrySetSetString_m8652 (Object_t * __this/* static, unused */, String_t* ___key, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
 void PlayerPrefs_SetString_m2255 (Object_t * __this/* static, unused */, String_t* ___key, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.PlayerPrefs::GetString(System.String,System.String)
 String_t* PlayerPrefs_GetString_m2588 (Object_t * __this/* static, unused */, String_t* ___key, String_t* ___defaultValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
 String_t* PlayerPrefs_GetString_m2254 (Object_t * __this/* static, unused */, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.PlayerPrefs::DeleteKey(System.String)
 void PlayerPrefs_DeleteKey_m2589 (Object_t * __this/* static, unused */, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.PlayerPrefs::Save()
 void PlayerPrefs_Save_m6912 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
