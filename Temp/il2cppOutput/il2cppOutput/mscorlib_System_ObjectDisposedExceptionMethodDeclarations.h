#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ObjectDisposedException
struct ObjectDisposedException_t2450;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2615;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.ObjectDisposedException::.ctor(System.String)
 void ObjectDisposedException__ctor_m10390 (ObjectDisposedException_t2450 * __this, String_t* ___objectName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ObjectDisposedException::.ctor(System.String,System.String)
 void ObjectDisposedException__ctor_m14649 (ObjectDisposedException_t2450 * __this, String_t* ___objectName, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ObjectDisposedException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void ObjectDisposedException__ctor_m14650 (ObjectDisposedException_t2450 * __this, SerializationInfo_t2615 * ___info, StreamingContext_t2616  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ObjectDisposedException::get_Message()
 String_t* ObjectDisposedException_get_Message_m14651 (ObjectDisposedException_t2450 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ObjectDisposedException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void ObjectDisposedException_GetObjectData_m14652 (ObjectDisposedException_t2450 * __this, SerializationInfo_t2615 * ___info, StreamingContext_t2616  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
