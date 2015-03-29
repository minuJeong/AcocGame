#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CacheIndex
struct CacheIndex_t2535;
struct CacheIndex_t2535_marshaled;

void CacheIndex_t2535_marshal(const CacheIndex_t2535& unmarshaled, CacheIndex_t2535_marshaled& marshaled);
void CacheIndex_t2535_marshal_back(const CacheIndex_t2535_marshaled& marshaled, CacheIndex_t2535& unmarshaled);
void CacheIndex_t2535_marshal_cleanup(CacheIndex_t2535_marshaled& marshaled);
