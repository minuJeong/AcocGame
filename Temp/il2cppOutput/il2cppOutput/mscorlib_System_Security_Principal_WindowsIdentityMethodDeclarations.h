#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Principal.WindowsIdentity
struct WindowsIdentity_t3625;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Security.Principal.WindowsIdentity::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void WindowsIdentity__ctor_m13582 (WindowsIdentity_t3625 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Principal.WindowsIdentity::.cctor()
 void WindowsIdentity__cctor_m13583 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Principal.WindowsIdentity::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
 void WindowsIdentity_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m13584 (WindowsIdentity_t3625 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Principal.WindowsIdentity::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void WindowsIdentity_System_Runtime_Serialization_ISerializable_GetObjectData_m13585 (WindowsIdentity_t3625 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Principal.WindowsIdentity::Dispose()
 void WindowsIdentity_Dispose_m13586 (WindowsIdentity_t3625 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Security.Principal.WindowsIdentity::GetCurrentToken()
 IntPtr_t39 WindowsIdentity_GetCurrentToken_m13587 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Principal.WindowsIdentity::GetTokenName(System.IntPtr)
 String_t* WindowsIdentity_GetTokenName_m13588 (Object_t * __this/* static, unused */, IntPtr_t39 ___token, MethodInfo* method) IL2CPP_METHOD_ATTR;
