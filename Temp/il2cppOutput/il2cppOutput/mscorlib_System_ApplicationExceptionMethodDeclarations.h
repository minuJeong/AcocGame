#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ApplicationException
struct ApplicationException_t893;
// System.String
struct String_t;
// System.Exception
struct Exception_t107;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.ApplicationException::.ctor()
 void ApplicationException__ctor_m5164 (ApplicationException_t893 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ApplicationException::.ctor(System.String)
 void ApplicationException__ctor_m5165 (ApplicationException_t893 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ApplicationException::.ctor(System.String,System.Exception)
 void ApplicationException__ctor_m5166 (ApplicationException_t893 * __this, String_t* ___message, Exception_t107 * ___innerException, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ApplicationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void ApplicationException__ctor_m13992 (ApplicationException_t893 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
