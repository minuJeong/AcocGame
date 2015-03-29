#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t3533;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t3492;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t3540;
// System.Object
struct Object_t;
// System.Runtime.Serialization.BaseFixupRecord
struct BaseFixupRecord_t3541;
// System.Int32[]
struct Int32U5BU5D_t257;
// System.String
struct String_t;
// System.Reflection.MemberInfo
struct MemberInfo_t484;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2615;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Serialization.ObjectManager::.ctor(System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext)
 void ObjectManager__ctor_m13154 (ObjectManager_t3533 * __this, Object_t * ___selector, StreamingContext_t2616  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::DoFixups()
 void ObjectManager_DoFixups_m13155 (ObjectManager_t3533 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.ObjectManager::GetObjectRecord(System.Int64)
 ObjectRecord_t3540 * ObjectManager_GetObjectRecord_m13156 (ObjectManager_t3533 * __this, int64_t ___objectID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.ObjectManager::GetObject(System.Int64)
 Object_t * ObjectManager_GetObject_m13157 (ObjectManager_t3533 * __this, int64_t ___objectID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RaiseDeserializationEvent()
 void ObjectManager_RaiseDeserializationEvent_m13158 (ObjectManager_t3533 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RaiseOnDeserializingEvent(System.Object)
 void ObjectManager_RaiseOnDeserializingEvent_m13159 (ObjectManager_t3533 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RaiseOnDeserializedEvent(System.Object)
 void ObjectManager_RaiseOnDeserializedEvent_m13160 (ObjectManager_t3533 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::AddFixup(System.Runtime.Serialization.BaseFixupRecord)
 void ObjectManager_AddFixup_m13161 (ObjectManager_t3533 * __this, BaseFixupRecord_t3541 * ___record, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RecordArrayElementFixup(System.Int64,System.Int32,System.Int64)
 void ObjectManager_RecordArrayElementFixup_m13162 (ObjectManager_t3533 * __this, int64_t ___arrayToBeFixed, int32_t ___index, int64_t ___objectRequired, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RecordArrayElementFixup(System.Int64,System.Int32[],System.Int64)
 void ObjectManager_RecordArrayElementFixup_m13163 (ObjectManager_t3533 * __this, int64_t ___arrayToBeFixed, Int32U5BU5D_t257* ___indices, int64_t ___objectRequired, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RecordDelayedFixup(System.Int64,System.String,System.Int64)
 void ObjectManager_RecordDelayedFixup_m13164 (ObjectManager_t3533 * __this, int64_t ___objectToBeFixed, String_t* ___memberName, int64_t ___objectRequired, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RecordFixup(System.Int64,System.Reflection.MemberInfo,System.Int64)
 void ObjectManager_RecordFixup_m13165 (ObjectManager_t3533 * __this, int64_t ___objectToBeFixed, MemberInfo_t484 * ___member, int64_t ___objectRequired, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RegisterObjectInternal(System.Object,System.Runtime.Serialization.ObjectRecord)
 void ObjectManager_RegisterObjectInternal_m13166 (ObjectManager_t3533 * __this, Object_t * ___obj, ObjectRecord_t3540 * ___record, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RegisterObject(System.Object,System.Int64,System.Runtime.Serialization.SerializationInfo,System.Int64,System.Reflection.MemberInfo,System.Int32[])
 void ObjectManager_RegisterObject_m13167 (ObjectManager_t3533 * __this, Object_t * ___obj, int64_t ___objectID, SerializationInfo_t2615 * ___info, int64_t ___idOfContainingObj, MemberInfo_t484 * ___member, Int32U5BU5D_t257* ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
