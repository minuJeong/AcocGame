﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Messaging.Header
struct Header_t3481;
// System.String
struct String_t;
// System.Object
struct Object_t;

// System.Void System.Runtime.Remoting.Messaging.Header::.ctor(System.String,System.Object)
 void Header__ctor_m12908 (Header_t3481 * __this, String_t* ____Name, Object_t * ____Value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.Header::.ctor(System.String,System.Object,System.Boolean)
 void Header__ctor_m12909 (Header_t3481 * __this, String_t* ____Name, Object_t * ____Value, bool ____MustUnderstand, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.Header::.ctor(System.String,System.Object,System.Boolean,System.String)
 void Header__ctor_m12910 (Header_t3481 * __this, String_t* ____Name, Object_t * ____Value, bool ____MustUnderstand, String_t* ____HeaderNamespace, MethodInfo* method) IL2CPP_METHOD_ATTR;