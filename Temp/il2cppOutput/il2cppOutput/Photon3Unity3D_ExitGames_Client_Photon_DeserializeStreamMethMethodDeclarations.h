#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ExitGames.Client.Photon.DeserializeStreamMethod
struct DeserializeStreamMethod_t469;
// System.Object
struct Object_t;
// System.IO.MemoryStream
struct MemoryStream_t242;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void ExitGames.Client.Photon.DeserializeStreamMethod::.ctor(System.Object,System.IntPtr)
 void DeserializeStreamMethod__ctor_m2400 (DeserializeStreamMethod_t469 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ExitGames.Client.Photon.DeserializeStreamMethod::Invoke(System.IO.MemoryStream,System.Int16)
 Object_t * DeserializeStreamMethod_Invoke_m7477 (DeserializeStreamMethod_t469 * __this, MemoryStream_t242 * ___inStream, int16_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult ExitGames.Client.Photon.DeserializeStreamMethod::BeginInvoke(System.IO.MemoryStream,System.Int16,System.AsyncCallback,System.Object)
 Object_t * DeserializeStreamMethod_BeginInvoke_m7478 (DeserializeStreamMethod_t469 * __this, MemoryStream_t242 * ___inStream, int16_t ___length, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ExitGames.Client.Photon.DeserializeStreamMethod::EndInvoke(System.IAsyncResult)
 Object_t * DeserializeStreamMethod_EndInvoke_m7479 (DeserializeStreamMethod_t469 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
