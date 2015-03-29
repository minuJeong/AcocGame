#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.CompressedStack
struct CompressedStack_t3627;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2615;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Threading.CompressedStack::.ctor(System.Int32)
 void CompressedStack__ctor_m13883 (CompressedStack_t3627 * __this, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.CompressedStack::.ctor(System.Threading.CompressedStack)
 void CompressedStack__ctor_m13884 (CompressedStack_t3627 * __this, CompressedStack_t3627 * ___cs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CompressedStack System.Threading.CompressedStack::CreateCopy()
 CompressedStack_t3627 * CompressedStack_CreateCopy_m13885 (CompressedStack_t3627 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CompressedStack System.Threading.CompressedStack::Capture()
 CompressedStack_t3627 * CompressedStack_Capture_m13886 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.CompressedStack::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void CompressedStack_GetObjectData_m13887 (CompressedStack_t3627 * __this, SerializationInfo_t2615 * ___info, StreamingContext_t2616  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.CompressedStack::IsEmpty()
 bool CompressedStack_IsEmpty_m13888 (CompressedStack_t3627 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
