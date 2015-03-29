#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,ExitGames.Client.Photon.CustomType,System.Collections.Generic.KeyValuePair`2<System.Byte,ExitGames.Client.Photon.CustomType>>
struct Transform_1_t11436;
// System.Object
struct Object_t;
// ExitGames.Client.Photon.CustomType
struct CustomType_t2394;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Byte,ExitGames.Client.Photon.CustomType>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_122.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,ExitGames.Client.Photon.CustomType,System.Collections.Generic.KeyValuePair`2<System.Byte,ExitGames.Client.Photon.CustomType>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m84389 (Transform_1_t11436 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,ExitGames.Client.Photon.CustomType,System.Collections.Generic.KeyValuePair`2<System.Byte,ExitGames.Client.Photon.CustomType>>::Invoke(TKey,TValue)
 KeyValuePair_2_t11428  Transform_1_Invoke_m84390 (Transform_1_t11436 * __this, uint8_t ___key, CustomType_t2394 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,ExitGames.Client.Photon.CustomType,System.Collections.Generic.KeyValuePair`2<System.Byte,ExitGames.Client.Photon.CustomType>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m84391 (Transform_1_t11436 * __this, uint8_t ___key, CustomType_t2394 * ___value, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,ExitGames.Client.Photon.CustomType,System.Collections.Generic.KeyValuePair`2<System.Byte,ExitGames.Client.Photon.CustomType>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t11428  Transform_1_EndInvoke_m84392 (Transform_1_t11436 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
