#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.InvalidCastException
struct InvalidCastException_t939;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2615;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.InvalidCastException::.ctor()
 void InvalidCastException__ctor_m14443 (InvalidCastException_t939 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidCastException::.ctor(System.String)
 void InvalidCastException__ctor_m5163 (InvalidCastException_t939 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidCastException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void InvalidCastException__ctor_m14444 (InvalidCastException_t939 * __this, SerializationInfo_t2615 * ___info, StreamingContext_t2616  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
