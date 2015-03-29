#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UnityException
struct UnityException_t800;
// System.String
struct String_t;
// System.Exception
struct Exception_t107;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void UnityEngine.UnityException::.ctor()
 void UnityException__ctor_m8955 (UnityException_t800 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UnityException::.ctor(System.String)
 void UnityException__ctor_m8956 (UnityException_t800 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UnityException::.ctor(System.String,System.Exception)
 void UnityException__ctor_m8957 (UnityException_t800 * __this, String_t* ___message, Exception_t107 * ___innerException, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UnityException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void UnityException__ctor_m8958 (UnityException_t800 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
