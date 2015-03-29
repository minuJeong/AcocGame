#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ExitGames.Client.Photon.SerializeStreamMethod
struct SerializeStreamMethod_t468;
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

// System.Void ExitGames.Client.Photon.SerializeStreamMethod::.ctor(System.Object,System.IntPtr)
 void SerializeStreamMethod__ctor_m2399 (SerializeStreamMethod_t468 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 ExitGames.Client.Photon.SerializeStreamMethod::Invoke(System.IO.MemoryStream,System.Object)
 int16_t SerializeStreamMethod_Invoke_m7468 (SerializeStreamMethod_t468 * __this, MemoryStream_t242 * ___outStream, Object_t * ___customObject, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult ExitGames.Client.Photon.SerializeStreamMethod::BeginInvoke(System.IO.MemoryStream,System.Object,System.AsyncCallback,System.Object)
 Object_t * SerializeStreamMethod_BeginInvoke_m7469 (SerializeStreamMethod_t468 * __this, MemoryStream_t242 * ___outStream, Object_t * ___customObject, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 ExitGames.Client.Photon.SerializeStreamMethod::EndInvoke(System.IAsyncResult)
 int16_t SerializeStreamMethod_EndInvoke_m7470 (SerializeStreamMethod_t468 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
