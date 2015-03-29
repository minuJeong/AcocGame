﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.HMAC
struct HMAC_t3577;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t21;
// Mono.Security.Cryptography.BlockProcessor
struct BlockProcessor_t3237;

// System.Void System.Security.Cryptography.HMAC::.ctor()
 void HMAC__ctor_m13297 (HMAC_t3577 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.HMAC::get_BlockSizeValue()
 int32_t HMAC_get_BlockSizeValue_m13298 (HMAC_t3577 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::set_BlockSizeValue(System.Int32)
 void HMAC_set_BlockSizeValue_m13299 (HMAC_t3577 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::set_HashName(System.String)
 void HMAC_set_HashName_m13300 (HMAC_t3577 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.HMAC::get_Key()
 ByteU5BU5D_t21* HMAC_get_Key_m13301 (HMAC_t3577 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::set_Key(System.Byte[])
 void HMAC_set_Key_m13302 (HMAC_t3577 * __this, ByteU5BU5D_t21* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Cryptography.BlockProcessor System.Security.Cryptography.HMAC::get_Block()
 BlockProcessor_t3237 * HMAC_get_Block_m13303 (HMAC_t3577 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.HMAC::KeySetup(System.Byte[],System.Byte)
 ByteU5BU5D_t21* HMAC_KeySetup_m13304 (HMAC_t3577 * __this, ByteU5BU5D_t21* ___key, uint8_t ___padding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::Dispose(System.Boolean)
 void HMAC_Dispose_m13305 (HMAC_t3577 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::HashCore(System.Byte[],System.Int32,System.Int32)
 void HMAC_HashCore_m13306 (HMAC_t3577 * __this, ByteU5BU5D_t21* ___rgb, int32_t ___ib, int32_t ___cb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.HMAC::HashFinal()
 ByteU5BU5D_t21* HMAC_HashFinal_m13307 (HMAC_t3577 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::Initialize()
 void HMAC_Initialize_m13308 (HMAC_t3577 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
