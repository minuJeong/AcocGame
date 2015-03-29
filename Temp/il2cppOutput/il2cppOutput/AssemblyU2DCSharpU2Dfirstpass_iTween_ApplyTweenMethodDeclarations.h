#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// iTween/ApplyTween
struct ApplyTween_t41;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void iTween/ApplyTween::.ctor(System.Object,System.IntPtr)
 void ApplyTween__ctor_m82 (ApplyTween_t41 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween/ApplyTween::Invoke()
 void ApplyTween_Invoke_m83 (ApplyTween_t41 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult iTween/ApplyTween::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * ApplyTween_BeginInvoke_m84 (ApplyTween_t41 * __this, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween/ApplyTween::EndInvoke(System.IAsyncResult)
 void ApplyTween_EndInvoke_m85 (ApplyTween_t41 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
