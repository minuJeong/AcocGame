#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.ScriptableObject
struct ScriptableObject_t151;
struct ScriptableObject_t151_marshaled;
// System.String
struct String_t;
// System.Type
struct Type_t;

// System.Void UnityEngine.ScriptableObject::.ctor()
 void ScriptableObject__ctor_m2108 (ScriptableObject_t151 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ScriptableObject::Internal_CreateScriptableObject(UnityEngine.ScriptableObject)
 void ScriptableObject_Internal_CreateScriptableObject_m7898 (Object_t * __this/* static, unused */, ScriptableObject_t151 * ___self, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.String)
 ScriptableObject_t151 * ScriptableObject_CreateInstance_m7899 (Object_t * __this/* static, unused */, String_t* ___className, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.Type)
 ScriptableObject_t151 * ScriptableObject_CreateInstance_m7900 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstanceFromType(System.Type)
 ScriptableObject_t151 * ScriptableObject_CreateInstanceFromType_m7901 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
void ScriptableObject_t151_marshal(const ScriptableObject_t151& unmarshaled, ScriptableObject_t151_marshaled& marshaled);
void ScriptableObject_t151_marshal_back(const ScriptableObject_t151_marshaled& marshaled, ScriptableObject_t151& unmarshaled);
void ScriptableObject_t151_marshal_cleanup(ScriptableObject_t151_marshaled& marshaled);
