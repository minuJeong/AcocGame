﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Permissions.SecurityPermission
struct SecurityPermission_t3613;
// System.Security.IPermission
struct IPermission_t3615;
// System.Security.SecurityElement
struct SecurityElement_t3165;
// System.Security.Permissions.SecurityPermissionFlag
#include "mscorlib_System_Security_Permissions_SecurityPermissionFlag.h"

// System.Void System.Security.Permissions.SecurityPermission::.ctor(System.Security.Permissions.SecurityPermissionFlag)
 void SecurityPermission__ctor_m13546 (SecurityPermission_t3613 * __this, int32_t ___flag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.SecurityPermission::set_Flags(System.Security.Permissions.SecurityPermissionFlag)
 void SecurityPermission_set_Flags_m13547 (SecurityPermission_t3613 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.SecurityPermission::IsUnrestricted()
 bool SecurityPermission_IsUnrestricted_m13548 (SecurityPermission_t3613 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.SecurityPermission::IsSubsetOf(System.Security.IPermission)
 bool SecurityPermission_IsSubsetOf_m13549 (SecurityPermission_t3613 * __this, Object_t * ___target, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.SecurityPermission::ToXml()
 SecurityElement_t3165 * SecurityPermission_ToXml_m13550 (SecurityPermission_t3613 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.SecurityPermission::IsEmpty()
 bool SecurityPermission_IsEmpty_m13551 (SecurityPermission_t3613 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.SecurityPermission System.Security.Permissions.SecurityPermission::Cast(System.Security.IPermission)
 SecurityPermission_t3613 * SecurityPermission_Cast_m13552 (SecurityPermission_t3613 * __this, Object_t * ___target, MethodInfo* method) IL2CPP_METHOD_ATTR;