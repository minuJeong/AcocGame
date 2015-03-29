#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MissingFieldException
struct MissingFieldException_t3715;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MissingFieldException::.ctor()
 void MissingFieldException__ctor_m14454 (MissingFieldException_t3715 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MissingFieldException::.ctor(System.String)
 void MissingFieldException__ctor_m14455 (MissingFieldException_t3715 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MissingFieldException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void MissingFieldException__ctor_m14456 (MissingFieldException_t3715 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MissingFieldException::get_Message()
 String_t* MissingFieldException_get_Message_m14457 (MissingFieldException_t3715 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
