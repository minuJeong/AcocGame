#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t3193;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Runtime.Remoting.Contexts.Context
struct Context_t3452;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t3499;

// System.Void System.Runtime.Remoting.ServerIdentity::.ctor(System.String,System.Runtime.Remoting.Contexts.Context,System.Type)
 void ServerIdentity__ctor_m13085 (ServerIdentity_t3193 * __this, String_t* ___objectUri, Context_t3452 * ___context, Type_t * ___objectType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.ServerIdentity::get_ObjectType()
 Type_t * ServerIdentity_get_ObjectType_m13086 (ServerIdentity_t3193 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.ServerIdentity::CreateObjRef(System.Type)
 ObjRef_t3499 * ServerIdentity_CreateObjRef_m13087 (ServerIdentity_t3193 * __this, Type_t * ___requestedType, MethodInfo* method) IL2CPP_METHOD_ATTR;
