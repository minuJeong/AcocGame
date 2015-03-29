#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Policy.Evidence/EvidenceEnumerator
struct EvidenceEnumerator_t3621;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;

// System.Void System.Security.Policy.Evidence/EvidenceEnumerator::.ctor(System.Collections.IEnumerator,System.Collections.IEnumerator)
 void EvidenceEnumerator__ctor_m13560 (EvidenceEnumerator_t3621 * __this, Object_t * ___hostenum, Object_t * ___assemblyenum, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.Evidence/EvidenceEnumerator::MoveNext()
 bool EvidenceEnumerator_MoveNext_m13561 (EvidenceEnumerator_t3621 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.Evidence/EvidenceEnumerator::Reset()
 void EvidenceEnumerator_Reset_m13562 (EvidenceEnumerator_t3621 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Policy.Evidence/EvidenceEnumerator::get_Current()
 Object_t * EvidenceEnumerator_get_Current_m13563 (EvidenceEnumerator_t3621 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
