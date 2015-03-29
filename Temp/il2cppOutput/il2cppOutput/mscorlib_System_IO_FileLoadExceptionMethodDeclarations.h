#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.FileLoadException
struct FileLoadException_t3338;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.IO.FileLoadException::.ctor()
 void FileLoadException__ctor_m12046 (FileLoadException_t3338 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileLoadException::.ctor(System.String)
 void FileLoadException__ctor_m12047 (FileLoadException_t3338 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileLoadException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void FileLoadException__ctor_m12048 (FileLoadException_t3338 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileLoadException::get_Message()
 String_t* FileLoadException_get_Message_m12049 (FileLoadException_t3338 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileLoadException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void FileLoadException_GetObjectData_m12050 (FileLoadException_t3338 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileLoadException::ToString()
 String_t* FileLoadException_ToString_m12051 (FileLoadException_t3338 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
