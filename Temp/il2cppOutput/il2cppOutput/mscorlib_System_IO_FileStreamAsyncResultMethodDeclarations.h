#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.FileStreamAsyncResult
struct FileStreamAsyncResult_t3346;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;

// System.Void System.IO.FileStreamAsyncResult::.ctor(System.AsyncCallback,System.Object)
 void FileStreamAsyncResult__ctor_m12104 (FileStreamAsyncResult_t3346 * __this, AsyncCallback_t35 * ___cb, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStreamAsyncResult::CBWrapper(System.IAsyncResult)
 void FileStreamAsyncResult_CBWrapper_m12105 (Object_t * __this/* static, unused */, Object_t * ___ares, MethodInfo* method) IL2CPP_METHOD_ATTR;
