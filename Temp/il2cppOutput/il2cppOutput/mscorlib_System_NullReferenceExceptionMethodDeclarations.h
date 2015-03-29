#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.NullReferenceException
struct NullReferenceException_t425;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.NullReferenceException::.ctor()
 void NullReferenceException__ctor_m14546 (NullReferenceException_t425 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NullReferenceException::.ctor(System.String)
 void NullReferenceException__ctor_m2102 (NullReferenceException_t425 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NullReferenceException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void NullReferenceException__ctor_m14547 (NullReferenceException_t425 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
