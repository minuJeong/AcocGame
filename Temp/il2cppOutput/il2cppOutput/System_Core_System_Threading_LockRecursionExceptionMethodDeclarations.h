#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.LockRecursionException
struct LockRecursionException_t2934;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2615;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Threading.LockRecursionException::.ctor()
 void LockRecursionException__ctor_m10127 (LockRecursionException_t2934 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.LockRecursionException::.ctor(System.String)
 void LockRecursionException__ctor_m10128 (LockRecursionException_t2934 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.LockRecursionException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void LockRecursionException__ctor_m10129 (LockRecursionException_t2934 * __this, SerializationInfo_t2615 * ___info, StreamingContext_t2616  ___sc, MethodInfo* method) IL2CPP_METHOD_ATTR;
