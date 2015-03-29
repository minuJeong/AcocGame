#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MemberAccessException
struct MemberAccessException_t3709;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MemberAccessException::.ctor()
 void MemberAccessException__ctor_m14449 (MemberAccessException_t3709 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MemberAccessException::.ctor(System.String)
 void MemberAccessException__ctor_m14450 (MemberAccessException_t3709 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MemberAccessException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void MemberAccessException__ctor_m14451 (MemberAccessException_t3709 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
