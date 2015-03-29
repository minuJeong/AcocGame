#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.FieldAccessException
struct FieldAccessException_t3708;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.FieldAccessException::.ctor()
 void FieldAccessException__ctor_m14402 (FieldAccessException_t3708 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.FieldAccessException::.ctor(System.String)
 void FieldAccessException__ctor_m14403 (FieldAccessException_t3708 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.FieldAccessException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void FieldAccessException__ctor_m14404 (FieldAccessException_t3708 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
