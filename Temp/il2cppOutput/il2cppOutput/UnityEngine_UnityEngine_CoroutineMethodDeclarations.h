#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t91;
struct Coroutine_t91_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
 void Coroutine__ctor_m7893 (Coroutine_t91 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
 void Coroutine_ReleaseCoroutine_m7894 (Coroutine_t91 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
 void Coroutine_Finalize_m7895 (Coroutine_t91 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void Coroutine_t91_marshal(const Coroutine_t91& unmarshaled, Coroutine_t91_marshaled& marshaled);
void Coroutine_t91_marshal_back(const Coroutine_t91_marshaled& marshaled, Coroutine_t91& unmarshaled);
void Coroutine_t91_marshal_cleanup(Coroutine_t91_marshaled& marshaled);
