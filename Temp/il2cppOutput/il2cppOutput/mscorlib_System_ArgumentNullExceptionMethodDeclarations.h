#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ArgumentNullException
struct ArgumentNullException_t403;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.ArgumentNullException::.ctor()
 void ArgumentNullException__ctor_m6305 (ArgumentNullException_t403 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentNullException::.ctor(System.String)
 void ArgumentNullException__ctor_m4725 (ArgumentNullException_t403 * __this, String_t* ___paramName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentNullException::.ctor(System.String,System.String)
 void ArgumentNullException__ctor_m1985 (ArgumentNullException_t403 * __this, String_t* ___paramName, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentNullException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void ArgumentNullException__ctor_m14000 (ArgumentNullException_t403 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
