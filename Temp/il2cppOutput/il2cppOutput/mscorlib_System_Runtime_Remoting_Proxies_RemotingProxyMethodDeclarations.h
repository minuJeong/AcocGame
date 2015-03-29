#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Proxies.RemotingProxy
struct RemotingProxy_t3503;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Runtime.Remoting.ClientIdentity
struct ClientIdentity_t3502;
// System.Object[]
struct ObjectU5BU5D_t5;

// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::.ctor(System.Type,System.Runtime.Remoting.ClientIdentity)
 void RemotingProxy__ctor_m13017 (RemotingProxy_t3503 * __this, Type_t * ___type, ClientIdentity_t3502 * ___identity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::.ctor(System.Type,System.String,System.Object[])
 void RemotingProxy__ctor_m13018 (RemotingProxy_t3503 * __this, Type_t * ___type, String_t* ___activationUrl, ObjectU5BU5D_t5* ___activationAttributes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::.cctor()
 void RemotingProxy__cctor_m13019 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Proxies.RemotingProxy::get_TypeName()
 String_t* RemotingProxy_get_TypeName_m13020 (RemotingProxy_t3503 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::Finalize()
 void RemotingProxy_Finalize_m13021 (RemotingProxy_t3503 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
