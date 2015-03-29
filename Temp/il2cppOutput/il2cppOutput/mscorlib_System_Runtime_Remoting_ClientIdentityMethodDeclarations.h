﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.ClientIdentity
struct ClientIdentity_t3502;
// System.MarshalByRefObject
struct MarshalByRefObject_t3194;
// System.String
struct String_t;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t3499;
// System.Type
struct Type_t;

// System.Void System.Runtime.Remoting.ClientIdentity::.ctor(System.String,System.Runtime.Remoting.ObjRef)
 void ClientIdentity__ctor_m13036 (ClientIdentity_t3502 * __this, String_t* ___objectUri, ObjRef_t3499 * ___objRef, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MarshalByRefObject System.Runtime.Remoting.ClientIdentity::get_ClientProxy()
 MarshalByRefObject_t3194 * ClientIdentity_get_ClientProxy_m13037 (ClientIdentity_t3502 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ClientIdentity::set_ClientProxy(System.MarshalByRefObject)
 void ClientIdentity_set_ClientProxy_m13038 (ClientIdentity_t3502 * __this, MarshalByRefObject_t3194 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.ClientIdentity::CreateObjRef(System.Type)
 ObjRef_t3499 * ClientIdentity_CreateObjRef_m13039 (ClientIdentity_t3502 * __this, Type_t * ___requestedType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.ClientIdentity::get_TargetUri()
 String_t* ClientIdentity_get_TargetUri_m13040 (ClientIdentity_t3502 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
