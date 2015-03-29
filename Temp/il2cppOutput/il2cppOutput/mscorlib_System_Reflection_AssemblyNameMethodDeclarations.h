#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.AssemblyName
struct AssemblyName_t1420;
// System.String
struct String_t;
// System.Version
struct Version_t1097;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Byte[]
struct ByteU5BU5D_t21;
// System.Object
struct Object_t;
// System.Reflection.AssemblyNameFlags
#include "mscorlib_System_Reflection_AssemblyNameFlags.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.AssemblyName::.ctor()
 void AssemblyName__ctor_m12546 (AssemblyName_t1420 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::.ctor(System.String)
 void AssemblyName__ctor_m6456 (AssemblyName_t1420 * __this, String_t* ___assemblyName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void AssemblyName__ctor_m12547 (AssemblyName_t1420 * __this, SerializationInfo_t2614 * ___si, StreamingContext_t2615  ___sc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.AssemblyName::ParseName(System.Reflection.AssemblyName,System.String)
 bool AssemblyName_ParseName_m12548 (Object_t * __this/* static, unused */, AssemblyName_t1420 * ___aname, String_t* ___assemblyName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.AssemblyName::get_Name()
 String_t* AssemblyName_get_Name_m12549 (AssemblyName_t1420 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyNameFlags System.Reflection.AssemblyName::get_Flags()
 int32_t AssemblyName_get_Flags_m12550 (AssemblyName_t1420 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.AssemblyName::get_FullName()
 String_t* AssemblyName_get_FullName_m12551 (AssemblyName_t1420 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Reflection.AssemblyName::get_Version()
 Version_t1097 * AssemblyName_get_Version_m6457 (AssemblyName_t1420 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::set_Version(System.Version)
 void AssemblyName_set_Version_m12552 (AssemblyName_t1420 * __this, Version_t1097 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.AssemblyName::ToString()
 String_t* AssemblyName_ToString_m12553 (AssemblyName_t1420 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.AssemblyName::get_IsPublicKeyValid()
 bool AssemblyName_get_IsPublicKeyValid_m12554 (AssemblyName_t1420 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Reflection.AssemblyName::InternalGetPublicKeyToken()
 ByteU5BU5D_t21* AssemblyName_InternalGetPublicKeyToken_m12555 (AssemblyName_t1420 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Reflection.AssemblyName::ComputePublicKeyToken()
 ByteU5BU5D_t21* AssemblyName_ComputePublicKeyToken_m12556 (AssemblyName_t1420 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::SetPublicKey(System.Byte[])
 void AssemblyName_SetPublicKey_m12557 (AssemblyName_t1420 * __this, ByteU5BU5D_t21* ___publicKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::SetPublicKeyToken(System.Byte[])
 void AssemblyName_SetPublicKeyToken_m12558 (AssemblyName_t1420 * __this, ByteU5BU5D_t21* ___publicKeyToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void AssemblyName_GetObjectData_m12559 (AssemblyName_t1420 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::OnDeserialization(System.Object)
 void AssemblyName_OnDeserialization_m12560 (AssemblyName_t1420 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
