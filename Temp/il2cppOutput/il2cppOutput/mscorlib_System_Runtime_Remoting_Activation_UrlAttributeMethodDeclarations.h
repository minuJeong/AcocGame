﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Activation.UrlAttribute
struct UrlAttribute_t3450;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Runtime.Remoting.Activation.IConstructionCallMessage
struct IConstructionCallMessage_t3452;
// System.Runtime.Remoting.Contexts.Context
struct Context_t3453;

// System.String System.Runtime.Remoting.Activation.UrlAttribute::get_UrlValue()
 String_t* UrlAttribute_get_UrlValue_m12826 (UrlAttribute_t3450 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Activation.UrlAttribute::Equals(System.Object)
 bool UrlAttribute_Equals_m12827 (UrlAttribute_t3450 * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Remoting.Activation.UrlAttribute::GetHashCode()
 int32_t UrlAttribute_GetHashCode_m12828 (UrlAttribute_t3450 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Activation.UrlAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
 void UrlAttribute_GetPropertiesForNewContext_m12829 (UrlAttribute_t3450 * __this, Object_t * ___ctorMsg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Activation.UrlAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
 bool UrlAttribute_IsContextOK_m12830 (UrlAttribute_t3450 * __this, Context_t3453 * ___ctx, Object_t * ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
