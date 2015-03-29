#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<PunTeams/Team,System.Collections.Generic.List`1<PhotonPlayer>,System.Collections.Generic.List`1<PhotonPlayer>>
struct Transform_1_t4539;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<PhotonPlayer>
struct List_1_t464;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// PunTeams/Team
#include "AssemblyU2DCSharp_PunTeams_Team.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<PunTeams/Team,System.Collections.Generic.List`1<PhotonPlayer>,System.Collections.Generic.List`1<PhotonPlayer>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m18733 (Transform_1_t4539 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<PunTeams/Team,System.Collections.Generic.List`1<PhotonPlayer>,System.Collections.Generic.List`1<PhotonPlayer>>::Invoke(TKey,TValue)
 List_1_t464 * Transform_1_Invoke_m18734 (Transform_1_t4539 * __this, uint8_t ___key, List_1_t464 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<PunTeams/Team,System.Collections.Generic.List`1<PhotonPlayer>,System.Collections.Generic.List`1<PhotonPlayer>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m18735 (Transform_1_t4539 * __this, uint8_t ___key, List_1_t464 * ___value, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<PunTeams/Team,System.Collections.Generic.List`1<PhotonPlayer>,System.Collections.Generic.List`1<PhotonPlayer>>::EndInvoke(System.IAsyncResult)
 List_1_t464 * Transform_1_EndInvoke_m18736 (Transform_1_t4539 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
