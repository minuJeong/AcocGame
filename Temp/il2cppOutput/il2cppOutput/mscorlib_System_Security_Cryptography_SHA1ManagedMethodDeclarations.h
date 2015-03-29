#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.SHA1Managed
struct SHA1Managed_t3602;
// System.Byte[]
struct ByteU5BU5D_t21;

// System.Void System.Security.Cryptography.SHA1Managed::.ctor()
 void SHA1Managed__ctor_m13468 (SHA1Managed_t3602 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1Managed::HashCore(System.Byte[],System.Int32,System.Int32)
 void SHA1Managed_HashCore_m13469 (SHA1Managed_t3602 * __this, ByteU5BU5D_t21* ___rgb, int32_t ___ibStart, int32_t ___cbSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.SHA1Managed::HashFinal()
 ByteU5BU5D_t21* SHA1Managed_HashFinal_m13470 (SHA1Managed_t3602 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1Managed::Initialize()
 void SHA1Managed_Initialize_m13471 (SHA1Managed_t3602 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
