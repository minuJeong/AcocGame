#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t2615;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContextStates
#include "mscorlib_System_Runtime_Serialization_StreamingContextStates.h"

// System.Void System.Runtime.Serialization.StreamingContext::.ctor(System.Runtime.Serialization.StreamingContextStates)
 void StreamingContext__ctor_m13228 (StreamingContext_t2615 * __this, int32_t ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.StreamingContext::.ctor(System.Runtime.Serialization.StreamingContextStates,System.Object)
 void StreamingContext__ctor_m13229 (StreamingContext_t2615 * __this, int32_t ___state, Object_t * ___additional, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::get_State()
 int32_t StreamingContext_get_State_m13230 (StreamingContext_t2615 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.StreamingContext::Equals(System.Object)
 bool StreamingContext_Equals_m13231 (StreamingContext_t2615 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Serialization.StreamingContext::GetHashCode()
 int32_t StreamingContext_GetHashCode_m13232 (StreamingContext_t2615 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
