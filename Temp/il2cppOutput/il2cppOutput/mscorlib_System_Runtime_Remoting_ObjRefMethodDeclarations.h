#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.ObjRef
struct ObjRef_t3499;
// System.Runtime.Remoting.IChannelInfo
struct IChannelInfo_t3509;
// System.Runtime.Remoting.IEnvoyInfo
struct IEnvoyInfo_t3511;
// System.Runtime.Remoting.IRemotingTypeInfo
struct IRemotingTypeInfo_t3510;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Remoting.ObjRef::.ctor()
 void ObjRef__ctor_m13041 (ObjRef_t3499 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ObjRef::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void ObjRef__ctor_m13042 (ObjRef_t3499 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ObjRef::.cctor()
 void ObjRef__cctor_m13043 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.ObjRef::get_IsReferenceToWellKnow()
 bool ObjRef_get_IsReferenceToWellKnow_m13044 (ObjRef_t3499 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.IChannelInfo System.Runtime.Remoting.ObjRef::get_ChannelInfo()
 Object_t * ObjRef_get_ChannelInfo_m13045 (ObjRef_t3499 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.IEnvoyInfo System.Runtime.Remoting.ObjRef::get_EnvoyInfo()
 Object_t * ObjRef_get_EnvoyInfo_m13046 (ObjRef_t3499 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ObjRef::set_EnvoyInfo(System.Runtime.Remoting.IEnvoyInfo)
 void ObjRef_set_EnvoyInfo_m13047 (ObjRef_t3499 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.IRemotingTypeInfo System.Runtime.Remoting.ObjRef::get_TypeInfo()
 Object_t * ObjRef_get_TypeInfo_m13048 (ObjRef_t3499 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ObjRef::set_TypeInfo(System.Runtime.Remoting.IRemotingTypeInfo)
 void ObjRef_set_TypeInfo_m13049 (ObjRef_t3499 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.ObjRef::get_URI()
 String_t* ObjRef_get_URI_m13050 (ObjRef_t3499 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ObjRef::set_URI(System.String)
 void ObjRef_set_URI_m13051 (ObjRef_t3499 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ObjRef::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void ObjRef_GetObjectData_m13052 (ObjRef_t3499 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.ObjRef::GetRealObject(System.Runtime.Serialization.StreamingContext)
 Object_t * ObjRef_GetRealObject_m13053 (ObjRef_t3499 * __this, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ObjRef::UpdateChannelInfo()
 void ObjRef_UpdateChannelInfo_m13054 (ObjRef_t3499 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.ObjRef::get_ServerType()
 Type_t * ObjRef_get_ServerType_m13055 (ObjRef_t3499 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
