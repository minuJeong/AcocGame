#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t3539;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t3532;
// System.Reflection.MemberInfo
struct MemberInfo_t484;
// System.Object
struct Object_t;
// System.Int32[]
struct Int32U5BU5D_t257;
// System.String
struct String_t;
// System.Runtime.Serialization.BaseFixupRecord
struct BaseFixupRecord_t3540;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t3491;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Serialization.ObjectRecord::.ctor()
 void ObjectRecord__ctor_m13175 (ObjectRecord_t3539 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectRecord::SetMemberValue(System.Runtime.Serialization.ObjectManager,System.Reflection.MemberInfo,System.Object)
 void ObjectRecord_SetMemberValue_m13176 (ObjectRecord_t3539 * __this, ObjectManager_t3532 * ___manager, MemberInfo_t484 * ___member, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectRecord::SetArrayValue(System.Runtime.Serialization.ObjectManager,System.Object,System.Int32[])
 void ObjectRecord_SetArrayValue_m13177 (ObjectRecord_t3539 * __this, ObjectManager_t3532 * ___manager, Object_t * ___value, Int32U5BU5D_t257* ___indices, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectRecord::SetMemberValue(System.Runtime.Serialization.ObjectManager,System.String,System.Object)
 void ObjectRecord_SetMemberValue_m13178 (ObjectRecord_t3539 * __this, ObjectManager_t3532 * ___manager, String_t* ___memberName, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.ObjectRecord::get_IsInstanceReady()
 bool ObjectRecord_get_IsInstanceReady_m13179 (ObjectRecord_t3539 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.ObjectRecord::get_IsUnsolvedObjectReference()
 bool ObjectRecord_get_IsUnsolvedObjectReference_m13180 (ObjectRecord_t3539 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.ObjectRecord::get_IsRegistered()
 bool ObjectRecord_get_IsRegistered_m13181 (ObjectRecord_t3539 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.ObjectRecord::DoFixups(System.Boolean,System.Runtime.Serialization.ObjectManager,System.Boolean)
 bool ObjectRecord_DoFixups_m13182 (ObjectRecord_t3539 * __this, bool ___asContainer, ObjectManager_t3532 * ___manager, bool ___strict, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectRecord::RemoveFixup(System.Runtime.Serialization.BaseFixupRecord,System.Boolean)
 void ObjectRecord_RemoveFixup_m13183 (ObjectRecord_t3539 * __this, BaseFixupRecord_t3540 * ___fixupToRemove, bool ___asContainer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectRecord::UnchainFixup(System.Runtime.Serialization.BaseFixupRecord,System.Runtime.Serialization.BaseFixupRecord,System.Boolean)
 void ObjectRecord_UnchainFixup_m13184 (ObjectRecord_t3539 * __this, BaseFixupRecord_t3540 * ___fixup, BaseFixupRecord_t3540 * ___prevFixup, bool ___asContainer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectRecord::ChainFixup(System.Runtime.Serialization.BaseFixupRecord,System.Boolean)
 void ObjectRecord_ChainFixup_m13185 (ObjectRecord_t3539 * __this, BaseFixupRecord_t3540 * ___fixup, bool ___asContainer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.ObjectRecord::LoadData(System.Runtime.Serialization.ObjectManager,System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext)
 bool ObjectRecord_LoadData_m13186 (ObjectRecord_t3539 * __this, ObjectManager_t3532 * ___manager, Object_t * ___selector, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.ObjectRecord::get_HasPendingFixups()
 bool ObjectRecord_get_HasPendingFixups_m13187 (ObjectRecord_t3539 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
