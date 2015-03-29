#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WaitForSeconds
struct WaitForSeconds_t86;
struct WaitForSeconds_t86_marshaled;

// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
 void WaitForSeconds__ctor_m478 (WaitForSeconds_t86 * __this, float ___seconds, MethodInfo* method) IL2CPP_METHOD_ATTR;
void WaitForSeconds_t86_marshal(const WaitForSeconds_t86& unmarshaled, WaitForSeconds_t86_marshaled& marshaled);
void WaitForSeconds_t86_marshal_back(const WaitForSeconds_t86_marshaled& marshaled, WaitForSeconds_t86& unmarshaled);
void WaitForSeconds_t86_marshal_cleanup(WaitForSeconds_t86_marshaled& marshaled);
