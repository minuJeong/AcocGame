#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.PathTooLongException
struct PathTooLongException_t3350;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.IO.PathTooLongException::.ctor()
 void PathTooLongException__ctor_m12168 (PathTooLongException_t3350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.PathTooLongException::.ctor(System.String)
 void PathTooLongException__ctor_m12169 (PathTooLongException_t3350 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.PathTooLongException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void PathTooLongException__ctor_m12170 (PathTooLongException_t3350 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
