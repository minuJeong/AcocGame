#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.MultiArrayFixupRecord
struct MultiArrayFixupRecord_t3543;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t3540;
// System.Int32[]
struct Int32U5BU5D_t257;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t3533;

// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Int32[],System.Runtime.Serialization.ObjectRecord)
 void MultiArrayFixupRecord__ctor_m13172 (MultiArrayFixupRecord_t3543 * __this, ObjectRecord_t3540 * ___objectToBeFixed, Int32U5BU5D_t257* ___indices, ObjectRecord_t3540 * ___objectRequired, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
 void MultiArrayFixupRecord_FixupImpl_m13173 (MultiArrayFixupRecord_t3543 * __this, ObjectManager_t3533 * ___manager, MethodInfo* method) IL2CPP_METHOD_ATTR;
