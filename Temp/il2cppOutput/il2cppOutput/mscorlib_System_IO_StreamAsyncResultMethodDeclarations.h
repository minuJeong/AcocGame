#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.StreamAsyncResult
struct StreamAsyncResult_t3352;
// System.Exception
struct Exception_t107;
// System.Object
struct Object_t;

// System.Void System.IO.StreamAsyncResult::.ctor(System.Object)
 void StreamAsyncResult__ctor_m12190 (StreamAsyncResult_t3352 * __this, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamAsyncResult::SetComplete(System.Exception)
 void StreamAsyncResult_SetComplete_m12191 (StreamAsyncResult_t3352 * __this, Exception_t107 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamAsyncResult::SetComplete(System.Exception,System.Int32)
 void StreamAsyncResult_SetComplete_m12192 (StreamAsyncResult_t3352 * __this, Exception_t107 * ___e, int32_t ___nbytes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.IO.StreamAsyncResult::get_Exception()
 Exception_t107 * StreamAsyncResult_get_Exception_m12193 (StreamAsyncResult_t3352 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamAsyncResult::get_NBytes()
 int32_t StreamAsyncResult_get_NBytes_m12194 (StreamAsyncResult_t3352 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.StreamAsyncResult::get_Done()
 bool StreamAsyncResult_get_Done_m12195 (StreamAsyncResult_t3352 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamAsyncResult::set_Done(System.Boolean)
 void StreamAsyncResult_set_Done_m12196 (StreamAsyncResult_t3352 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
