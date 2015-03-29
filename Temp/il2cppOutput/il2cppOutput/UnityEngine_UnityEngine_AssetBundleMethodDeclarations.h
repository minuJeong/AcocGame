#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AssetBundle
struct AssetBundle_t414;
// UnityEngine.Object
struct Object_t111;
struct Object_t111_marshaled;
// System.String
struct String_t;
// System.Type
struct Type_t;
// UnityEngine.Object[]
struct ObjectU5BU5D_t494;

// UnityEngine.Object UnityEngine.AssetBundle::get_mainAsset()
 Object_t111 * AssetBundle_get_mainAsset_m2051 (AssetBundle_t414 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.AssetBundle::LoadAsset(System.String,System.Type)
 Object_t111 * AssetBundle_LoadAsset_m7887 (AssetBundle_t414 * __this, String_t* ___name, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.AssetBundle::LoadAsset_Internal(System.String,System.Type)
 Object_t111 * AssetBundle_LoadAsset_Internal_m7888 (AssetBundle_t414 * __this, String_t* ___name, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object[] UnityEngine.AssetBundle::LoadAssetWithSubAssets_Internal(System.String,System.Type)
 ObjectU5BU5D_t494* AssetBundle_LoadAssetWithSubAssets_Internal_m7889 (AssetBundle_t414 * __this, String_t* ___name, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AssetBundle::Unload(System.Boolean)
 void AssetBundle_Unload_m2052 (AssetBundle_t414 * __this, bool ___unloadAllLoadedObjects, MethodInfo* method) IL2CPP_METHOD_ATTR;
