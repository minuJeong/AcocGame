#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.SHA1Internal
struct SHA1Internal_t3600;
// System.Byte[]
struct ByteU5BU5D_t21;
// System.UInt32[]
struct UInt32U5BU5D_t2344;

// System.Void System.Security.Cryptography.SHA1Internal::.ctor()
 void SHA1Internal__ctor_m13453 (SHA1Internal_t3600 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1Internal::HashCore(System.Byte[],System.Int32,System.Int32)
 void SHA1Internal_HashCore_m13454 (SHA1Internal_t3600 * __this, ByteU5BU5D_t21* ___rgb, int32_t ___ibStart, int32_t ___cbSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.SHA1Internal::HashFinal()
 ByteU5BU5D_t21* SHA1Internal_HashFinal_m13455 (SHA1Internal_t3600 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1Internal::Initialize()
 void SHA1Internal_Initialize_m13456 (SHA1Internal_t3600 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1Internal::ProcessBlock(System.Byte[],System.UInt32)
 void SHA1Internal_ProcessBlock_m13457 (SHA1Internal_t3600 * __this, ByteU5BU5D_t21* ___inputBuffer, uint32_t ___inputOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1Internal::InitialiseBuff(System.UInt32[],System.Byte[],System.UInt32)
 void SHA1Internal_InitialiseBuff_m13458 (Object_t * __this/* static, unused */, UInt32U5BU5D_t2344* ___buff, ByteU5BU5D_t21* ___input, uint32_t ___inputOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1Internal::FillBuff(System.UInt32[])
 void SHA1Internal_FillBuff_m13459 (Object_t * __this/* static, unused */, UInt32U5BU5D_t2344* ___buff, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1Internal::ProcessFinalBlock(System.Byte[],System.Int32,System.Int32)
 void SHA1Internal_ProcessFinalBlock_m13460 (SHA1Internal_t3600 * __this, ByteU5BU5D_t21* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1Internal::AddLength(System.UInt64,System.Byte[],System.Int32)
 void SHA1Internal_AddLength_m13461 (SHA1Internal_t3600 * __this, uint64_t ___length, ByteU5BU5D_t21* ___buffer, int32_t ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
