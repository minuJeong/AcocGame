#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.ThreadPool
struct ThreadPool_t3667;
// System.Threading.WaitCallback
struct WaitCallback_t2183;
// System.Object
struct Object_t;

// System.Boolean System.Threading.ThreadPool::QueueUserWorkItem(System.Threading.WaitCallback)
 bool ThreadPool_QueueUserWorkItem_m6972 (Object_t * __this/* static, unused */, WaitCallback_t2183 * ___callBack, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ThreadPool::QueueUserWorkItem(System.Threading.WaitCallback,System.Object)
 bool ThreadPool_QueueUserWorkItem_m13945 (Object_t * __this/* static, unused */, WaitCallback_t2183 * ___callBack, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
