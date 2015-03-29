#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AsyncOperation
struct AsyncOperation_t2455;
struct AsyncOperation_t2455_marshaled;

// System.Void UnityEngine.AsyncOperation::.ctor()
 void AsyncOperation__ctor_m8518 (AsyncOperation_t2455 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
 void AsyncOperation_InternalDestroy_m8519 (AsyncOperation_t2455 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
 void AsyncOperation_Finalize_m8520 (AsyncOperation_t2455 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void AsyncOperation_t2455_marshal(const AsyncOperation_t2455& unmarshaled, AsyncOperation_t2455_marshaled& marshaled);
void AsyncOperation_t2455_marshal_back(const AsyncOperation_t2455_marshaled& marshaled, AsyncOperation_t2455& unmarshaled);
void AsyncOperation_t2455_marshal_cleanup(AsyncOperation_t2455_marshaled& marshaled);
