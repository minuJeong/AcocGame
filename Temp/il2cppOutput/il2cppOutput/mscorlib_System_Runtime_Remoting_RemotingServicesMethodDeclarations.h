#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.RemotingServices
struct RemotingServices_t3515;
// System.Reflection.MethodBase
struct MethodBase_t424;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t3499;
// System.Runtime.Remoting.Proxies.RealProxy
struct RealProxy_t3498;
// System.Runtime.Remoting.Messaging.IMethodMessage
struct IMethodMessage_t3486;
// System.Type[]
struct TypeU5BU5D_t291;
// System.Runtime.Remoting.ActivatedClientTypeEntry
struct ActivatedClientTypeEntry_t3505;
// System.Object[]
struct ObjectU5BU5D_t5;
// System.Runtime.Remoting.Identity
struct Identity_t3501;
// System.Runtime.Remoting.ClientIdentity
struct ClientIdentity_t3502;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t3193;
// System.Runtime.Remoting.WellKnownObjectMode
#include "mscorlib_System_Runtime_Remoting_WellKnownObjectMode.h"

// System.Void System.Runtime.Remoting.RemotingServices::.cctor()
 void RemotingServices__cctor_m13063 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::GetVirtualMethod(System.Type,System.Reflection.MethodBase)
 MethodBase_t424 * RemotingServices_GetVirtualMethod_m13064 (Object_t * __this/* static, unused */, Type_t * ___type, MethodBase_t424 * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.RemotingServices::IsTransparentProxy(System.Object)
 bool RemotingServices_IsTransparentProxy_m13065 (Object_t * __this/* static, unused */, Object_t * ___proxy, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.RemotingServices::GetServerTypeForUri(System.String)
 Type_t * RemotingServices_GetServerTypeForUri_m13066 (Object_t * __this/* static, unused */, String_t* ___URI, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::Unmarshal(System.Runtime.Remoting.ObjRef)
 Object_t * RemotingServices_Unmarshal_m13067 (Object_t * __this/* static, unused */, ObjRef_t3499 * ___objectRef, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::Unmarshal(System.Runtime.Remoting.ObjRef,System.Boolean)
 Object_t * RemotingServices_Unmarshal_m13068 (Object_t * __this/* static, unused */, ObjRef_t3499 * ___objectRef, bool ___fRefine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Proxies.RealProxy System.Runtime.Remoting.RemotingServices::GetRealProxy(System.Object)
 RealProxy_t3498 * RemotingServices_GetRealProxy_m13069 (Object_t * __this/* static, unused */, Object_t * ___proxy, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::GetMethodBaseFromMethodMessage(System.Runtime.Remoting.Messaging.IMethodMessage)
 MethodBase_t424 * RemotingServices_GetMethodBaseFromMethodMessage_m13070 (Object_t * __this/* static, unused */, Object_t * ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::GetMethodBaseFromName(System.Type,System.String,System.Type[])
 MethodBase_t424 * RemotingServices_GetMethodBaseFromName_m13071 (Object_t * __this/* static, unused */, Type_t * ___type, String_t* ___methodName, TypeU5BU5D_t291* ___signature, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::FindInterfaceMethod(System.Type,System.String,System.Type[])
 MethodBase_t424 * RemotingServices_FindInterfaceMethod_m13072 (Object_t * __this/* static, unused */, Type_t * ___type, String_t* ___methodName, TypeU5BU5D_t291* ___signature, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::CreateClientProxy(System.Runtime.Remoting.ActivatedClientTypeEntry,System.Object[])
 Object_t * RemotingServices_CreateClientProxy_m13073 (Object_t * __this/* static, unused */, ActivatedClientTypeEntry_t3505 * ___entry, ObjectU5BU5D_t5* ___activationAttributes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::CreateClientProxyForContextBound(System.Type,System.Object[])
 Object_t * RemotingServices_CreateClientProxyForContextBound_m13074 (Object_t * __this/* static, unused */, Type_t * ___type, ObjectU5BU5D_t5* ___activationAttributes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Identity System.Runtime.Remoting.RemotingServices::GetIdentityForUri(System.String)
 Identity_t3501 * RemotingServices_GetIdentityForUri_m13075 (Object_t * __this/* static, unused */, String_t* ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.RemotingServices::RemoveAppNameFromUri(System.String)
 String_t* RemotingServices_RemoveAppNameFromUri_m13076 (Object_t * __this/* static, unused */, String_t* ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ClientIdentity System.Runtime.Remoting.RemotingServices::GetOrCreateClientIdentity(System.Runtime.Remoting.ObjRef,System.Type,System.Object&)
 ClientIdentity_t3502 * RemotingServices_GetOrCreateClientIdentity_m13077 (Object_t * __this/* static, unused */, ObjRef_t3499 * ___objRef, Type_t * ___proxyType, Object_t ** ___clientProxy, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ServerIdentity System.Runtime.Remoting.RemotingServices::CreateWellKnownServerIdentity(System.Type,System.String,System.Runtime.Remoting.WellKnownObjectMode)
 ServerIdentity_t3193 * RemotingServices_CreateWellKnownServerIdentity_m13078 (Object_t * __this/* static, unused */, Type_t * ___objectType, String_t* ___objectUri, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingServices::RegisterServerIdentity(System.Runtime.Remoting.ServerIdentity)
 void RemotingServices_RegisterServerIdentity_m13079 (Object_t * __this/* static, unused */, ServerIdentity_t3193 * ___identity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::GetProxyForRemoteObject(System.Runtime.Remoting.ObjRef,System.Type)
 Object_t * RemotingServices_GetProxyForRemoteObject_m13080 (Object_t * __this/* static, unused */, ObjRef_t3499 * ___objref, Type_t * ___classToProxy, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::GetRemoteObject(System.Runtime.Remoting.ObjRef,System.Type)
 Object_t * RemotingServices_GetRemoteObject_m13081 (Object_t * __this/* static, unused */, ObjRef_t3499 * ___objRef, Type_t * ___proxyType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingServices::RegisterInternalChannels()
 void RemotingServices_RegisterInternalChannels_m13082 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingServices::DisposeIdentity(System.Runtime.Remoting.Identity)
 void RemotingServices_DisposeIdentity_m13083 (Object_t * __this/* static, unused */, Identity_t3501 * ___ident, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.RemotingServices::GetNormalizedUri(System.String)
 String_t* RemotingServices_GetNormalizedUri_m13084 (Object_t * __this/* static, unused */, String_t* ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
