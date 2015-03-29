#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.DirectoryInfo
struct DirectoryInfo_t3330;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.IO.DirectoryInfo::.ctor(System.String)
 void DirectoryInfo__ctor_m12028 (DirectoryInfo_t3330 * __this, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.DirectoryInfo::.ctor(System.String,System.Boolean)
 void DirectoryInfo__ctor_m12029 (DirectoryInfo_t3330 * __this, String_t* ___path, bool ___simpleOriginalPath, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.DirectoryInfo::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void DirectoryInfo__ctor_m12030 (DirectoryInfo_t3330 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.DirectoryInfo::Initialize()
 void DirectoryInfo_Initialize_m12031 (DirectoryInfo_t3330 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.DirectoryInfo::get_Exists()
 bool DirectoryInfo_get_Exists_m12032 (DirectoryInfo_t3330 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.DirectoryInfo System.IO.DirectoryInfo::get_Parent()
 DirectoryInfo_t3330 * DirectoryInfo_get_Parent_m12033 (DirectoryInfo_t3330 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.DirectoryInfo::Create()
 void DirectoryInfo_Create_m12034 (DirectoryInfo_t3330 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.DirectoryInfo::ToString()
 String_t* DirectoryInfo_ToString_m12035 (DirectoryInfo_t3330 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
