#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MissingMemberException
struct MissingMemberException_t3716;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MissingMemberException::.ctor()
 void MissingMemberException__ctor_m14458 (MissingMemberException_t3716 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MissingMemberException::.ctor(System.String)
 void MissingMemberException__ctor_m14459 (MissingMemberException_t3716 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MissingMemberException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void MissingMemberException__ctor_m14460 (MissingMemberException_t3716 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MissingMemberException::.ctor(System.String,System.String)
 void MissingMemberException__ctor_m14461 (MissingMemberException_t3716 * __this, String_t* ___className, String_t* ___memberName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MissingMemberException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void MissingMemberException_GetObjectData_m14462 (MissingMemberException_t3716 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MissingMemberException::get_Message()
 String_t* MissingMemberException_get_Message_m14463 (MissingMemberException_t3716 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
