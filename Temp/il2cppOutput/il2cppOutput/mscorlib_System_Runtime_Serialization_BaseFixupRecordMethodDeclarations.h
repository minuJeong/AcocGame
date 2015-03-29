#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.BaseFixupRecord
struct BaseFixupRecord_t3541;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t3540;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t3533;

// System.Void System.Runtime.Serialization.BaseFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Runtime.Serialization.ObjectRecord)
 void BaseFixupRecord__ctor_m13168 (BaseFixupRecord_t3541 * __this, ObjectRecord_t3540 * ___objectToBeFixed, ObjectRecord_t3540 * ___objectRequired, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.BaseFixupRecord::DoFixup(System.Runtime.Serialization.ObjectManager,System.Boolean)
 bool BaseFixupRecord_DoFixup_m13169 (BaseFixupRecord_t3541 * __this, ObjectManager_t3533 * ___manager, bool ___strict, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.BaseFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
