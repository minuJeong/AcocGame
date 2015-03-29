#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ExitGames.Client.Photon.DeserializeMethod
struct DeserializeMethod_t2384;
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

// System.Void ExitGames.Client.Photon.DeserializeMethod::.ctor(System.Object,System.IntPtr)
 void DeserializeMethod__ctor_m7471 (DeserializeMethod_t2384 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ExitGames.Client.Photon.DeserializeMethod::Invoke(System.Byte[])
 Object_t * DeserializeMethod_Invoke_m7472 (DeserializeMethod_t2384 * __this, ByteU5BU5D_t21* ___serializedCustomObject, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult ExitGames.Client.Photon.DeserializeMethod::BeginInvoke(System.Byte[],System.AsyncCallback,System.Object)
 Object_t * DeserializeMethod_BeginInvoke_m7473 (DeserializeMethod_t2384 * __this, ByteU5BU5D_t21* ___serializedCustomObject, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ExitGames.Client.Photon.DeserializeMethod::EndInvoke(System.IAsyncResult)
 Object_t * DeserializeMethod_EndInvoke_m7474 (DeserializeMethod_t2384 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
