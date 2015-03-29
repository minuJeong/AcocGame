#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.FixupRecord
struct FixupRecord_t3544;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t3540;
// System.Reflection.MemberInfo
struct MemberInfo_t484;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t3533;

// System.Void System.Runtime.Serialization.FixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Reflection.MemberInfo,System.Runtime.Serialization.ObjectRecord)
 void FixupRecord__ctor_m13174 (FixupRecord_t3544 * __this, ObjectRecord_t3540 * ___objectToBeFixed, MemberInfo_t484 * ___member, ObjectRecord_t3540 * ___objectRequired, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.FixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
 void FixupRecord_FixupImpl_m13175 (FixupRecord_t3544 * __this, ObjectManager_t3533 * ___manager, MethodInfo* method) IL2CPP_METHOD_ATTR;
