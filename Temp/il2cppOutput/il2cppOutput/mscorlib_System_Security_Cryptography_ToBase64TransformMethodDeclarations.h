﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.ToBase64Transform
struct ToBase64Transform_t3612;
// System.Byte[]
struct ByteU5BU5D_t21;

// System.Void System.Security.Cryptography.ToBase64Transform::System.IDisposable.Dispose()
 void ToBase64Transform_System_IDisposable_Dispose_m13532 (ToBase64Transform_t3612 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.ToBase64Transform::Finalize()
 void ToBase64Transform_Finalize_m13533 (ToBase64Transform_t3612 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.ToBase64Transform::get_CanReuseTransform()
 bool ToBase64Transform_get_CanReuseTransform_m13534 (ToBase64Transform_t3612 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.ToBase64Transform::get_InputBlockSize()
 int32_t ToBase64Transform_get_InputBlockSize_m13535 (ToBase64Transform_t3612 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.ToBase64Transform::get_OutputBlockSize()
 int32_t ToBase64Transform_get_OutputBlockSize_m13536 (ToBase64Transform_t3612 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.ToBase64Transform::Dispose(System.Boolean)
 void ToBase64Transform_Dispose_m13537 (ToBase64Transform_t3612 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.ToBase64Transform::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t ToBase64Transform_TransformBlock_m13538 (ToBase64Transform_t3612 * __this, ByteU5BU5D_t21* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t21* ___outputBuffer, int32_t ___outputOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.ToBase64Transform::InternalTransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
 void ToBase64Transform_InternalTransformBlock_m13539 (Object_t * __this/* static, unused */, ByteU5BU5D_t21* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t21* ___outputBuffer, int32_t ___outputOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.ToBase64Transform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
 ByteU5BU5D_t21* ToBase64Transform_TransformFinalBlock_m13540 (ToBase64Transform_t3612 * __this, ByteU5BU5D_t21* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.ToBase64Transform::InternalTransformFinalBlock(System.Byte[],System.Int32,System.Int32)
 ByteU5BU5D_t21* ToBase64Transform_InternalTransformFinalBlock_m13541 (Object_t * __this/* static, unused */, ByteU5BU5D_t21* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
