#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t2562;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::.ctor(System.Object,System.IntPtr)
 void PCMSetPositionCallback__ctor_m8698 (PCMSetPositionCallback_t2562 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::Invoke(System.Int32)
 void PCMSetPositionCallback_Invoke_m8699 (PCMSetPositionCallback_t2562 * __this, int32_t ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UnityEngine.AudioClip/PCMSetPositionCallback::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
 Object_t * PCMSetPositionCallback_BeginInvoke_m8700 (PCMSetPositionCallback_t2562 * __this, int32_t ___position, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::EndInvoke(System.IAsyncResult)
 void PCMSetPositionCallback_EndInvoke_m8701 (PCMSetPositionCallback_t2562 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
