#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.CompressedStack
struct CompressedStack_t3626;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Threading.CompressedStack::.ctor(System.Int32)
 void CompressedStack__ctor_m13880 (CompressedStack_t3626 * __this, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.CompressedStack::.ctor(System.Threading.CompressedStack)
 void CompressedStack__ctor_m13881 (CompressedStack_t3626 * __this, CompressedStack_t3626 * ___cs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CompressedStack System.Threading.CompressedStack::CreateCopy()
 CompressedStack_t3626 * CompressedStack_CreateCopy_m13882 (CompressedStack_t3626 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CompressedStack System.Threading.CompressedStack::Capture()
 CompressedStack_t3626 * CompressedStack_Capture_m13883 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.CompressedStack::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void CompressedStack_GetObjectData_m13884 (CompressedStack_t3626 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.CompressedStack::IsEmpty()
 bool CompressedStack_IsEmpty_m13885 (CompressedStack_t3626 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
