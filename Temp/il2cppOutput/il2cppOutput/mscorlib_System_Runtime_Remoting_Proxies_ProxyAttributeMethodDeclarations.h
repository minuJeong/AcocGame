#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Proxies.ProxyAttribute
struct ProxyAttribute_t3497;
// System.MarshalByRefObject
struct MarshalByRefObject_t3194;
// System.Type
struct Type_t;
// System.Runtime.Remoting.Proxies.RealProxy
struct RealProxy_t3498;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t3499;
// System.Object
struct Object_t;
// System.Runtime.Remoting.Contexts.Context
struct Context_t3452;
// System.Runtime.Remoting.Activation.IConstructionCallMessage
struct IConstructionCallMessage_t3451;

// System.MarshalByRefObject System.Runtime.Remoting.Proxies.ProxyAttribute::CreateInstance(System.Type)
 MarshalByRefObject_t3194 * ProxyAttribute_CreateInstance_m13005 (ProxyAttribute_t3497 * __this, Type_t * ___serverType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Proxies.RealProxy System.Runtime.Remoting.Proxies.ProxyAttribute::CreateProxy(System.Runtime.Remoting.ObjRef,System.Type,System.Object,System.Runtime.Remoting.Contexts.Context)
 RealProxy_t3498 * ProxyAttribute_CreateProxy_m13006 (ProxyAttribute_t3497 * __this, ObjRef_t3499 * ___objRef, Type_t * ___serverType, Object_t * ___serverObject, Context_t3452 * ___serverContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Proxies.ProxyAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
 void ProxyAttribute_GetPropertiesForNewContext_m13007 (ProxyAttribute_t3497 * __this, Object_t * ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Proxies.ProxyAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
 bool ProxyAttribute_IsContextOK_m13008 (ProxyAttribute_t3497 * __this, Context_t3452 * ___ctx, Object_t * ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
