#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ExitGames.Client.Photon.SerializeMethod
struct SerializeMethod_t2383;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t21;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void ExitGames.Client.Photon.SerializeMethod::.ctor(System.Object,System.IntPtr)
 void SerializeMethod__ctor_m7466 (SerializeMethod_t2383 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ExitGames.Client.Photon.SerializeMethod::Invoke(System.Object)
 ByteU5BU5D_t21* SerializeMethod_Invoke_m7467 (SerializeMethod_t2383 * __this, Object_t * ___customObject, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult ExitGames.Client.Photon.SerializeMethod::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
 Object_t * SerializeMethod_BeginInvoke_m7468 (SerializeMethod_t2383 * __this, Object_t * ___customObject, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ExitGames.Client.Photon.SerializeMethod::EndInvoke(System.IAsyncResult)
 ByteU5BU5D_t21* SerializeMethod_EndInvoke_m7469 (SerializeMethod_t2383 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
