#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<LitJson.PropertyMetadata>
struct Comparison_1_t5990;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// LitJson.PropertyMetadata
#include "LitJson_LitJson_PropertyMetadata.h"

// System.Void System.Comparison`1<LitJson.PropertyMetadata>::.ctor(System.Object,System.IntPtr)
 void Comparison_1__ctor_m29589 (Comparison_1_t5990 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<LitJson.PropertyMetadata>::Invoke(T,T)
 int32_t Comparison_1_Invoke_m29590 (Comparison_1_t5990 * __this, PropertyMetadata_t894  ___x, PropertyMetadata_t894  ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Comparison`1<LitJson.PropertyMetadata>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
 Object_t * Comparison_1_BeginInvoke_m29591 (Comparison_1_t5990 * __this, PropertyMetadata_t894  ___x, PropertyMetadata_t894  ___y, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<LitJson.PropertyMetadata>::EndInvoke(System.IAsyncResult)
 int32_t Comparison_1_EndInvoke_m29592 (Comparison_1_t5990 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
