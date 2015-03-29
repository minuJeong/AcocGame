#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.PermissionSet
struct PermissionSet_t3383;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t21;

// System.Void System.Security.PermissionSet::.ctor()
 void PermissionSet__ctor_m13595 (PermissionSet_t3383 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::.ctor(System.String)
 void PermissionSet__ctor_m13596 (PermissionSet_t3383 * __this, String_t* ___xml, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::set_DeclarativeSecurity(System.Boolean)
 void PermissionSet_set_DeclarativeSecurity_m13597 (PermissionSet_t3383 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.PermissionSet::CreateFromBinaryFormat(System.Byte[])
 PermissionSet_t3383 * PermissionSet_CreateFromBinaryFormat_m13598 (Object_t * __this/* static, unused */, ByteU5BU5D_t21* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
