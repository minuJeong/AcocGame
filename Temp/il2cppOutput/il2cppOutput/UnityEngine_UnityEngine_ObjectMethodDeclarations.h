#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Object
struct Object_t111;
struct Object_t111_marshaled;
// System.String
struct String_t;
// UnityEngine.Object[]
struct ObjectU5BU5D_t494;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// UnityEngine.HideFlags
#include "UnityEngine_UnityEngine_HideFlags.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Object::.ctor()
 void Object__ctor_m8598 (Object_t111 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::Internal_CloneSingle(UnityEngine.Object)
 Object_t111 * Object_Internal_CloneSingle_m8599 (Object_t * __this/* static, unused */, Object_t111 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion)
 Object_t111 * Object_Internal_InstantiateSingle_m8600 (Object_t * __this/* static, unused */, Object_t111 * ___data, Vector3_t31  ___pos, Quaternion_t110  ___rot, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::INTERNAL_CALL_Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3&,UnityEngine.Quaternion&)
 Object_t111 * Object_INTERNAL_CALL_Internal_InstantiateSingle_m8601 (Object_t * __this/* static, unused */, Object_t111 * ___data, Vector3_t31 * ___pos, Quaternion_t110 * ___rot, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
 void Object_Destroy_m8602 (Object_t * __this/* static, unused */, Object_t111 * ___obj, float ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
 void Object_Destroy_m596 (Object_t * __this/* static, unused */, Object_t111 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object,System.Boolean)
 void Object_DestroyImmediate_m8603 (Object_t * __this/* static, unused */, Object_t111 * ___obj, bool ___allowDestroyingAssets, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
 void Object_DestroyImmediate_m2590 (Object_t * __this/* static, unused */, Object_t111 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type)
 ObjectU5BU5D_t494* Object_FindObjectsOfType_m2525 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Object::get_name()
 String_t* Object_get_name_m2225 (Object_t111 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::set_name(System.String)
 void Object_set_name_m2367 (Object_t111 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
 void Object_DontDestroyOnLoad_m2230 (Object_t * __this/* static, unused */, Object_t111 * ___target, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
 void Object_set_hideFlags_m2623 (Object_t111 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DestroyObject(UnityEngine.Object,System.Single)
 void Object_DestroyObject_m8604 (Object_t * __this/* static, unused */, Object_t111 * ___obj, float ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DestroyObject(UnityEngine.Object)
 void Object_DestroyObject_m2715 (Object_t * __this/* static, unused */, Object_t111 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Object::ToString()
 String_t* Object_ToString_m651 (Object_t111 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::Equals(System.Object)
 bool Object_Equals_m649 (Object_t111 * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Object::GetHashCode()
 int32_t Object_GetHashCode_m650 (Object_t111 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::CompareBaseObjects(UnityEngine.Object,UnityEngine.Object)
 bool Object_CompareBaseObjects_m8605 (Object_t * __this/* static, unused */, Object_t111 * ___lhs, Object_t111 * ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::IsNativeObjectAlive(UnityEngine.Object)
 bool Object_IsNativeObjectAlive_m8606 (Object_t * __this/* static, unused */, Object_t111 * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Object::GetInstanceID()
 int32_t Object_GetInstanceID_m8607 (Object_t111 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.Object::GetCachedPtr()
 IntPtr_t39 Object_GetCachedPtr_m8608 (Object_t111 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion)
 Object_t111 * Object_Instantiate_m2520 (Object_t * __this/* static, unused */, Object_t111 * ___original, Vector3_t31  ___position, Quaternion_t110  ___rotation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::CheckNullArgument(System.Object,System.String)
 void Object_CheckNullArgument_m8609 (Object_t * __this/* static, unused */, Object_t * ___arg, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::FindObjectOfType(System.Type)
 Object_t111 * Object_FindObjectOfType_m8610 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
 bool Object_op_Implicit_m485 (Object_t * __this/* static, unused */, Object_t111 * ___exists, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
 bool Object_op_Equality_m631 (Object_t * __this/* static, unused */, Object_t111 * ___x, Object_t111 * ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
 bool Object_op_Inequality_m590 (Object_t * __this/* static, unused */, Object_t111 * ___x, Object_t111 * ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
void Object_t111_marshal(const Object_t111& unmarshaled, Object_t111_marshaled& marshaled);
void Object_t111_marshal_back(const Object_t111_marshaled& marshaled, Object_t111& unmarshaled);
void Object_t111_marshal_cleanup(Object_t111_marshaled& marshaled);
