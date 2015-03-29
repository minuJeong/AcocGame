#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,RoomInfo,System.Collections.Generic.KeyValuePair`2<System.String,RoomInfo>>
struct Transform_1_t4756;
// System.Object
struct Object_t;
// System.String
struct String_t;
// RoomInfo
struct RoomInfo_t281;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,RoomInfo>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_17.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,RoomInfo,System.Collections.Generic.KeyValuePair`2<System.String,RoomInfo>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m20097 (Transform_1_t4756 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,RoomInfo,System.Collections.Generic.KeyValuePair`2<System.String,RoomInfo>>::Invoke(TKey,TValue)
 KeyValuePair_2_t4747  Transform_1_Invoke_m20098 (Transform_1_t4756 * __this, String_t* ___key, RoomInfo_t281 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,RoomInfo,System.Collections.Generic.KeyValuePair`2<System.String,RoomInfo>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m20099 (Transform_1_t4756 * __this, String_t* ___key, RoomInfo_t281 * ___value, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,RoomInfo,System.Collections.Generic.KeyValuePair`2<System.String,RoomInfo>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t4747  Transform_1_EndInvoke_m20100 (Transform_1_t4756 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
