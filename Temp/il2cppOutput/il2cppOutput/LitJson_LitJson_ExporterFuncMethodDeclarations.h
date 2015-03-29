#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// LitJson.ExporterFunc
struct ExporterFunc_t898;
// System.Object
struct Object_t;
// LitJson.JsonWriter
struct JsonWriter_t885;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void LitJson.ExporterFunc::.ctor(System.Object,System.IntPtr)
 void ExporterFunc__ctor_m4928 (ExporterFunc_t898 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.ExporterFunc::Invoke(System.Object,LitJson.JsonWriter)
 void ExporterFunc_Invoke_m4929 (ExporterFunc_t898 * __this, Object_t * ___obj, JsonWriter_t885 * ___writer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult LitJson.ExporterFunc::BeginInvoke(System.Object,LitJson.JsonWriter,System.AsyncCallback,System.Object)
 Object_t * ExporterFunc_BeginInvoke_m4930 (ExporterFunc_t898 * __this, Object_t * ___obj, JsonWriter_t885 * ___writer, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.ExporterFunc::EndInvoke(System.IAsyncResult)
 void ExporterFunc_EndInvoke_m4931 (ExporterFunc_t898 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
