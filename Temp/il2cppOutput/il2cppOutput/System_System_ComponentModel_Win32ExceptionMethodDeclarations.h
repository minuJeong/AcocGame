#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ComponentModel.Win32Exception
struct Win32Exception_t2753;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2615;
// System.String
struct String_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.ComponentModel.Win32Exception::.ctor()
 void Win32Exception__ctor_m9269 (Win32Exception_t2753 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Win32Exception::.ctor(System.Int32)
 void Win32Exception__ctor_m9270 (Win32Exception_t2753 * __this, int32_t ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Win32Exception::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Win32Exception__ctor_m9271 (Win32Exception_t2753 * __this, SerializationInfo_t2615 * ___info, StreamingContext_t2616  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Win32Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Win32Exception_GetObjectData_m9272 (Win32Exception_t2753 * __this, SerializationInfo_t2615 * ___info, StreamingContext_t2616  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.Win32Exception::W32ErrorMessage(System.Int32)
 String_t* Win32Exception_W32ErrorMessage_m9273 (Object_t * __this/* static, unused */, int32_t ___error_code, MethodInfo* method) IL2CPP_METHOD_ATTR;
