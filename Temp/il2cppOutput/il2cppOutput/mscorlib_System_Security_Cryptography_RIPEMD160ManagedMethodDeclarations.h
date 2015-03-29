#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RIPEMD160Managed
struct RIPEMD160Managed_t3593;
// System.Byte[]
struct ByteU5BU5D_t21;

// System.Void System.Security.Cryptography.RIPEMD160Managed::.ctor()
 void RIPEMD160Managed__ctor_m13379 (RIPEMD160Managed_t3593 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::Initialize()
 void RIPEMD160Managed_Initialize_m13380 (RIPEMD160Managed_t3593 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::HashCore(System.Byte[],System.Int32,System.Int32)
 void RIPEMD160Managed_HashCore_m13381 (RIPEMD160Managed_t3593 * __this, ByteU5BU5D_t21* ___rgb, int32_t ___ibStart, int32_t ___cbSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RIPEMD160Managed::HashFinal()
 ByteU5BU5D_t21* RIPEMD160Managed_HashFinal_m13382 (RIPEMD160Managed_t3593 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::Finalize()
 void RIPEMD160Managed_Finalize_m13383 (RIPEMD160Managed_t3593 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::ProcessBlock(System.Byte[],System.Int32)
 void RIPEMD160Managed_ProcessBlock_m13384 (RIPEMD160Managed_t3593 * __this, ByteU5BU5D_t21* ___buffer, int32_t ___offset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::Compress()
 void RIPEMD160Managed_Compress_m13385 (RIPEMD160Managed_t3593 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::CompressFinal(System.UInt64)
 void RIPEMD160Managed_CompressFinal_m13386 (RIPEMD160Managed_t3593 * __this, uint64_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RIPEMD160Managed::ROL(System.UInt32,System.Int32)
 uint32_t RIPEMD160Managed_ROL_m13387 (RIPEMD160Managed_t3593 * __this, uint32_t ___x, int32_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RIPEMD160Managed::F(System.UInt32,System.UInt32,System.UInt32)
 uint32_t RIPEMD160Managed_F_m13388 (RIPEMD160Managed_t3593 * __this, uint32_t ___x, uint32_t ___y, uint32_t ___z, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RIPEMD160Managed::G(System.UInt32,System.UInt32,System.UInt32)
 uint32_t RIPEMD160Managed_G_m13389 (RIPEMD160Managed_t3593 * __this, uint32_t ___x, uint32_t ___y, uint32_t ___z, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RIPEMD160Managed::H(System.UInt32,System.UInt32,System.UInt32)
 uint32_t RIPEMD160Managed_H_m13390 (RIPEMD160Managed_t3593 * __this, uint32_t ___x, uint32_t ___y, uint32_t ___z, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RIPEMD160Managed::I(System.UInt32,System.UInt32,System.UInt32)
 uint32_t RIPEMD160Managed_I_m13391 (RIPEMD160Managed_t3593 * __this, uint32_t ___x, uint32_t ___y, uint32_t ___z, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RIPEMD160Managed::J(System.UInt32,System.UInt32,System.UInt32)
 uint32_t RIPEMD160Managed_J_m13392 (RIPEMD160Managed_t3593 * __this, uint32_t ___x, uint32_t ___y, uint32_t ___z, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::FF(System.UInt32&,System.UInt32,System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.Int32)
 void RIPEMD160Managed_FF_m13393 (RIPEMD160Managed_t3593 * __this, uint32_t* ___a, uint32_t ___b, uint32_t* ___c, uint32_t ___d, uint32_t ___e, uint32_t ___x, int32_t ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::GG(System.UInt32&,System.UInt32,System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.Int32)
 void RIPEMD160Managed_GG_m13394 (RIPEMD160Managed_t3593 * __this, uint32_t* ___a, uint32_t ___b, uint32_t* ___c, uint32_t ___d, uint32_t ___e, uint32_t ___x, int32_t ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::HH(System.UInt32&,System.UInt32,System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.Int32)
 void RIPEMD160Managed_HH_m13395 (RIPEMD160Managed_t3593 * __this, uint32_t* ___a, uint32_t ___b, uint32_t* ___c, uint32_t ___d, uint32_t ___e, uint32_t ___x, int32_t ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::II(System.UInt32&,System.UInt32,System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.Int32)
 void RIPEMD160Managed_II_m13396 (RIPEMD160Managed_t3593 * __this, uint32_t* ___a, uint32_t ___b, uint32_t* ___c, uint32_t ___d, uint32_t ___e, uint32_t ___x, int32_t ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::JJ(System.UInt32&,System.UInt32,System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.Int32)
 void RIPEMD160Managed_JJ_m13397 (RIPEMD160Managed_t3593 * __this, uint32_t* ___a, uint32_t ___b, uint32_t* ___c, uint32_t ___d, uint32_t ___e, uint32_t ___x, int32_t ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::FFF(System.UInt32&,System.UInt32,System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.Int32)
 void RIPEMD160Managed_FFF_m13398 (RIPEMD160Managed_t3593 * __this, uint32_t* ___a, uint32_t ___b, uint32_t* ___c, uint32_t ___d, uint32_t ___e, uint32_t ___x, int32_t ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::GGG(System.UInt32&,System.UInt32,System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.Int32)
 void RIPEMD160Managed_GGG_m13399 (RIPEMD160Managed_t3593 * __this, uint32_t* ___a, uint32_t ___b, uint32_t* ___c, uint32_t ___d, uint32_t ___e, uint32_t ___x, int32_t ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::HHH(System.UInt32&,System.UInt32,System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.Int32)
 void RIPEMD160Managed_HHH_m13400 (RIPEMD160Managed_t3593 * __this, uint32_t* ___a, uint32_t ___b, uint32_t* ___c, uint32_t ___d, uint32_t ___e, uint32_t ___x, int32_t ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::III(System.UInt32&,System.UInt32,System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.Int32)
 void RIPEMD160Managed_III_m13401 (RIPEMD160Managed_t3593 * __this, uint32_t* ___a, uint32_t ___b, uint32_t* ___c, uint32_t ___d, uint32_t ___e, uint32_t ___x, int32_t ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::JJJ(System.UInt32&,System.UInt32,System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.Int32)
 void RIPEMD160Managed_JJJ_m13402 (RIPEMD160Managed_t3593 * __this, uint32_t* ___a, uint32_t ___b, uint32_t* ___c, uint32_t ___d, uint32_t ___e, uint32_t ___x, int32_t ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
