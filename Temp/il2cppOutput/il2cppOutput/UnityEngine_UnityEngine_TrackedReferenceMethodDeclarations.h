#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.TrackedReference
struct TrackedReference_t2570;
struct TrackedReference_t2570_marshaled;
// System.Object
struct Object_t;

// System.Boolean UnityEngine.TrackedReference::Equals(System.Object)
 bool TrackedReference_Equals_m8982 (TrackedReference_t2570 * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TrackedReference::GetHashCode()
 int32_t TrackedReference_GetHashCode_m8983 (TrackedReference_t2570 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TrackedReference::op_Equality(UnityEngine.TrackedReference,UnityEngine.TrackedReference)
 bool TrackedReference_op_Equality_m8984 (Object_t * __this/* static, unused */, TrackedReference_t2570 * ___x, TrackedReference_t2570 * ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
void TrackedReference_t2570_marshal(const TrackedReference_t2570& unmarshaled, TrackedReference_t2570_marshaled& marshaled);
void TrackedReference_t2570_marshal_back(const TrackedReference_t2570_marshaled& marshaled, TrackedReference_t2570& unmarshaled);
void TrackedReference_t2570_marshal_cleanup(TrackedReference_t2570_marshaled& marshaled);
