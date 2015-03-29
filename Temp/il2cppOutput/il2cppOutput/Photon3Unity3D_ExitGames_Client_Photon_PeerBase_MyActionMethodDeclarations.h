#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ExitGames.Client.Photon.PeerBase/MyAction
struct MyAction_t2354;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void ExitGames.Client.Photon.PeerBase/MyAction::.ctor(System.Object,System.IntPtr)
 void MyAction__ctor_m7265 (MyAction_t2354 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase/MyAction::Invoke()
 void MyAction_Invoke_m7266 (MyAction_t2354 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult ExitGames.Client.Photon.PeerBase/MyAction::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * MyAction_BeginInvoke_m7267 (MyAction_t2354 * __this, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase/MyAction::EndInvoke(System.IAsyncResult)
 void MyAction_EndInvoke_m7268 (MyAction_t2354 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
