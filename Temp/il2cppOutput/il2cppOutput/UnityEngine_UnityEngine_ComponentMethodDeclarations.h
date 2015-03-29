#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Component
struct Component_t105;
// UnityEngine.Transform
struct Transform_t56;
// UnityEngine.GameObject
struct GameObject_t47;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t313;
// System.String
struct String_t;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"

// System.Void UnityEngine.Component::.ctor()
 void Component__ctor_m8611 (Component_t105 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
 Transform_t56 * Component_get_transform_m617 (Component_t105 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
 GameObject_t47 * Component_get_gameObject_m496 (Component_t105 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponent(System.Type)
 Component_t105 * Component_GetComponent_m4541 (Component_t105 * __this, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponentFastPath(System.Type,System.IntPtr)
 void Component_GetComponentFastPath_m8612 (Component_t105 * __this, Type_t * ___type, IntPtr_t39 ___oneFurtherThanResultValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponentInChildren(System.Type)
 Component_t105 * Component_GetComponentInChildren_m8613 (Component_t105 * __this, Type_t * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Object)
 void Component_GetComponentsForListInternal_m8614 (Component_t105 * __this, Type_t * ___searchType, Object_t * ___resultList, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponents(System.Type,System.Collections.Generic.List`1<UnityEngine.Component>)
 void Component_GetComponents_m4199 (Component_t105 * __this, Type_t * ___type, List_1_t313 * ___results, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Component::CompareTag(System.String)
 bool Component_CompareTag_m2786 (Component_t105 * __this, String_t* ___tag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
 void Component_SendMessage_m8615 (Component_t105 * __this, String_t* ___methodName, Object_t * ___value, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::SendMessage(System.String,System.Object)
 void Component_SendMessage_m2717 (Component_t105 * __this, String_t* ___methodName, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::SendMessage(System.String,UnityEngine.SendMessageOptions)
 void Component_SendMessage_m2329 (Component_t105 * __this, String_t* ___methodName, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
