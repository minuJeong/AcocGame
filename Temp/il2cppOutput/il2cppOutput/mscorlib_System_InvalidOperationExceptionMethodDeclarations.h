#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.InvalidOperationException
struct InvalidOperationException_t935;
// System.String
struct String_t;
// System.Exception
struct Exception_t107;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.InvalidOperationException::.ctor()
 void InvalidOperationException__ctor_m9927 (InvalidOperationException_t935 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidOperationException::.ctor(System.String)
 void InvalidOperationException__ctor_m5142 (InvalidOperationException_t935 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidOperationException::.ctor(System.String,System.Exception)
 void InvalidOperationException__ctor_m14442 (InvalidOperationException_t935 * __this, String_t* ___message, Exception_t107 * ___innerException, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidOperationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void InvalidOperationException__ctor_m14443 (InvalidOperationException_t935 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
