#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Mutex
struct Mutex_t3464;
// System.String
struct String_t;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Threading.Mutex::.ctor(System.Boolean)
 void Mutex__ctor_m13905 (Mutex_t3464 * __this, bool ___initiallyOwned, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Threading.Mutex::CreateMutex_internal(System.Boolean,System.String,System.Boolean&)
 IntPtr_t39 Mutex_CreateMutex_internal_m13906 (Object_t * __this/* static, unused */, bool ___initiallyOwned, String_t* ___name, bool* ___created, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Mutex::ReleaseMutex_internal(System.IntPtr)
 bool Mutex_ReleaseMutex_internal_m13907 (Object_t * __this/* static, unused */, IntPtr_t39 ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Mutex::ReleaseMutex()
 void Mutex_ReleaseMutex_m13908 (Mutex_t3464 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
