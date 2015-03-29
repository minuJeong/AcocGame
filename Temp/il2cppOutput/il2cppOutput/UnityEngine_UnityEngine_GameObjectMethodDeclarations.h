#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GameObject
struct GameObject_t47;
// UnityEngine.Transform
struct Transform_t56;
// System.String
struct String_t;
// UnityEngine.Component
struct Component_t105;
// System.Type
struct Type_t;
// System.Array
struct Array_t;
// System.Object
struct Object_t;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t197;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"

// System.Void UnityEngine.GameObject::.ctor(System.String)
 void GameObject__ctor_m598 (GameObject_t47 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::.ctor()
 void GameObject__ctor_m2621 (GameObject_t47 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::GetComponent(System.Type)
 Component_t105 * GameObject_GetComponent_m8618 (GameObject_t47 * __this, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::GetComponentFastPath(System.Type,System.IntPtr)
 void GameObject_GetComponentFastPath_m8619 (GameObject_t47 * __this, Type_t * ___type, IntPtr_t39 ___oneFurtherThanResultValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::GetComponentInChildren(System.Type)
 Component_t105 * GameObject_GetComponentInChildren_m8620 (GameObject_t47 * __this, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::GetComponentInParent(System.Type)
 Component_t105 * GameObject_GetComponentInParent_m8621 (GameObject_t47 * __this, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)
 Array_t * GameObject_GetComponentsInternal_m8622 (GameObject_t47 * __this, Type_t * ___type, bool ___useSearchTypeAsArrayReturnType, bool ___recursive, bool ___includeInactive, bool ___reverse, Object_t * ___resultList, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
 Transform_t56 * GameObject_get_transform_m492 (GameObject_t47 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GameObject::get_layer()
 int32_t GameObject_get_layer_m4369 (GameObject_t47 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
 void GameObject_set_layer_m4370 (GameObject_t47 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
 void GameObject_SetActive_m2227 (GameObject_t47 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
 bool GameObject_get_activeInHierarchy_m2427 (GameObject_t47 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::set_tag(System.String)
 void GameObject_set_tag_m2333 (GameObject_t47 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
 GameObject_t47 * GameObject_FindGameObjectWithTag_m2759 (Object_t * __this/* static, unused */, String_t* ___tag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.GameObject::FindWithTag(System.String)
 GameObject_t47 * GameObject_FindWithTag_m2788 (Object_t * __this/* static, unused */, String_t* ___tag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
 GameObjectU5BU5D_t197* GameObject_FindGameObjectsWithTag_m2279 (Object_t * __this/* static, unused */, String_t* ___tag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
 void GameObject_SendMessage_m634 (GameObject_t47 * __this, String_t* ___methodName, Object_t * ___value, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SendMessage(System.String)
 void GameObject_SendMessage_m2261 (GameObject_t47 * __this, String_t* ___methodName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SendMessage(System.String,UnityEngine.SendMessageOptions)
 void GameObject_SendMessage_m2708 (GameObject_t47 * __this, String_t* ___methodName, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::Internal_AddComponentWithType(System.Type)
 Component_t105 * GameObject_Internal_AddComponentWithType_m8623 (GameObject_t47 * __this, Type_t * ___componentType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::AddComponent(System.Type)
 Component_t105 * GameObject_AddComponent_m8624 (GameObject_t47 * __this, Type_t * ___componentType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::Internal_CreateGameObject(UnityEngine.GameObject,System.String)
 void GameObject_Internal_CreateGameObject_m8625 (Object_t * __this/* static, unused */, GameObject_t47 * ___mono, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
 GameObject_t47 * GameObject_Find_m2744 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
