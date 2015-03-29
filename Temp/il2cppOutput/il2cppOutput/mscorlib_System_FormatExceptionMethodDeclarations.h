#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.FormatException
struct FormatException_t2830;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.FormatException::.ctor()
 void FormatException__ctor_m14405 (FormatException_t2830 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.FormatException::.ctor(System.String)
 void FormatException__ctor_m9864 (FormatException_t2830 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.FormatException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void FormatException__ctor_m9985 (FormatException_t2830 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
