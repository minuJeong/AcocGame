#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.FixupRecord
struct FixupRecord_t3543;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t3539;
// System.Reflection.MemberInfo
struct MemberInfo_t484;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t3532;

// System.Void System.Runtime.Serialization.FixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Reflection.MemberInfo,System.Runtime.Serialization.ObjectRecord)
 void FixupRecord__ctor_m13171 (FixupRecord_t3543 * __this, ObjectRecord_t3539 * ___objectToBeFixed, MemberInfo_t484 * ___member, ObjectRecord_t3539 * ___objectRequired, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.FixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
 void FixupRecord_FixupImpl_m13172 (FixupRecord_t3543 * __this, ObjectManager_t3532 * ___manager, MethodInfo* method) IL2CPP_METHOD_ATTR;
