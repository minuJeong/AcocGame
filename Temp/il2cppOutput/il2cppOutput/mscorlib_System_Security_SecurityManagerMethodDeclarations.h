#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.SecurityManager
struct SecurityManager_t3632;
// System.Security.PermissionSet
struct PermissionSet_t3383;
// System.Byte[]
struct ByteU5BU5D_t21;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Security.SecurityManager::.cctor()
 void SecurityManager__cctor_m13643 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::get_SecurityEnabled()
 bool SecurityManager_get_SecurityEnabled_m13644 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.SecurityManager::Decode(System.IntPtr,System.Int32)
 PermissionSet_t3383 * SecurityManager_Decode_m13645 (Object_t * __this/* static, unused */, IntPtr_t39 ___permissions, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.SecurityManager::Decode(System.Byte[])
 PermissionSet_t3383 * SecurityManager_Decode_m13646 (Object_t * __this/* static, unused */, ByteU5BU5D_t21* ___encodedPermissions, MethodInfo* method) IL2CPP_METHOD_ATTR;
