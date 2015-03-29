#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.ArrayFixupRecord
struct ArrayFixupRecord_t3542;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t3540;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t3533;

// System.Void System.Runtime.Serialization.ArrayFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Int32,System.Runtime.Serialization.ObjectRecord)
 void ArrayFixupRecord__ctor_m13170 (ArrayFixupRecord_t3542 * __this, ObjectRecord_t3540 * ___objectToBeFixed, int32_t ___index, ObjectRecord_t3540 * ___objectRequired, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ArrayFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
 void ArrayFixupRecord_FixupImpl_m13171 (ArrayFixupRecord_t3542 * __this, ObjectManager_t3533 * ___manager, MethodInfo* method) IL2CPP_METHOD_ATTR;
