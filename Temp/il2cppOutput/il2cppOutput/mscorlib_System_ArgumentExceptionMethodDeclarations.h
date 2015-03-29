#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ArgumentException
struct ArgumentException_t401;
// System.String
struct String_t;
// System.Exception
struct Exception_t107;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.ArgumentException::.ctor()
 void ArgumentException__ctor_m10148 (ArgumentException_t401 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String)
 void ArgumentException__ctor_m1970 (ArgumentException_t401 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
 void ArgumentException__ctor_m6717 (ArgumentException_t401 * __this, String_t* ___message, String_t* ___paramName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String,System.String,System.Exception)
 void ArgumentException__ctor_m13995 (ArgumentException_t401 * __this, String_t* ___message, String_t* ___paramName, Exception_t107 * ___innerException, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void ArgumentException__ctor_m13996 (ArgumentException_t401 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ArgumentException::get_ParamName()
 String_t* ArgumentException_get_ParamName_m13997 (ArgumentException_t401 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ArgumentException::get_Message()
 String_t* ArgumentException_get_Message_m13998 (ArgumentException_t401 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void ArgumentException_GetObjectData_m13999 (ArgumentException_t401 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
