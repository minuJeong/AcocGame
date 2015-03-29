#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Queue
struct Queue_t2758;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;

// System.Void System.Collections.Queue::.ctor()
 void Queue__ctor_m11711 (Queue_t2758 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Queue::.ctor(System.Int32)
 void Queue__ctor_m9858 (Queue_t2758 * __this, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Queue::.ctor(System.Int32,System.Single)
 void Queue__ctor_m11712 (Queue_t2758 * __this, int32_t ___capacity, float ___growFactor, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Queue::get_Count()
 int32_t Queue_get_Count_m11713 (Queue_t2758 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Queue::get_IsSynchronized()
 bool Queue_get_IsSynchronized_m11714 (Queue_t2758 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Queue::get_SyncRoot()
 Object_t * Queue_get_SyncRoot_m11715 (Queue_t2758 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Queue::CopyTo(System.Array,System.Int32)
 void Queue_CopyTo_m11716 (Queue_t2758 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Queue::GetEnumerator()
 Object_t * Queue_GetEnumerator_m11717 (Queue_t2758 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
