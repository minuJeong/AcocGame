#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<LitJson.PropertyMetadata>
struct Predicate_1_t5989;
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

// System.Void System.Predicate`1<LitJson.PropertyMetadata>::.ctor(System.Object,System.IntPtr)
 void Predicate_1__ctor_m29579 (Predicate_1_t5989 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<LitJson.PropertyMetadata>::Invoke(T)
 bool Predicate_1_Invoke_m29580 (Predicate_1_t5989 * __this, PropertyMetadata_t894  ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Predicate`1<LitJson.PropertyMetadata>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Predicate_1_BeginInvoke_m29581 (Predicate_1_t5989 * __this, PropertyMetadata_t894  ___obj, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<LitJson.PropertyMetadata>::EndInvoke(System.IAsyncResult)
 bool Predicate_1_EndInvoke_m29582 (Predicate_1_t5989 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
