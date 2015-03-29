#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate
struct IntegerMillisecondsDelegate_t2381;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate::.ctor(System.Object,System.IntPtr)
 void IntegerMillisecondsDelegate__ctor_m7570 (IntegerMillisecondsDelegate_t2381 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate::Invoke()
 int32_t IntegerMillisecondsDelegate_Invoke_m7571 (IntegerMillisecondsDelegate_t2381 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * IntegerMillisecondsDelegate_BeginInvoke_m7572 (IntegerMillisecondsDelegate_t2381 * __this, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate::EndInvoke(System.IAsyncResult)
 int32_t IntegerMillisecondsDelegate_EndInvoke_m7573 (IntegerMillisecondsDelegate_t2381 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
