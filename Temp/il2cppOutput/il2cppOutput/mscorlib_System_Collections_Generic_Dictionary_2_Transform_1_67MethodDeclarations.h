#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,UnityEngine.EventSystems.PointerEventData>
struct Transform_1_t5294;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t549;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,UnityEngine.EventSystems.PointerEventData>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m24001 (Transform_1_t5294 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,UnityEngine.EventSystems.PointerEventData>::Invoke(TKey,TValue)
 PointerEventData_t549 * Transform_1_Invoke_m24002 (Transform_1_t5294 * __this, int32_t ___key, PointerEventData_t549 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,UnityEngine.EventSystems.PointerEventData>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m24003 (Transform_1_t5294 * __this, int32_t ___key, PointerEventData_t549 * ___value, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,UnityEngine.EventSystems.PointerEventData>::EndInvoke(System.IAsyncResult)
 PointerEventData_t549 * Transform_1_EndInvoke_m24004 (Transform_1_t5294 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
