#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t7046;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t88;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Object[]
struct ObjectU5BU5D_t5;
// System.Collections.Generic.Queue`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_Queue_1_Enumerator_gen_1.h"

// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
 void Queue_1__ctor_m37743_gshared (Queue_1_t7046 * __this, MethodInfo* method);
#define Queue_1__ctor_m37743(__this, method) (void)Queue_1__ctor_m37743_gshared((Queue_1_t7046 *)__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor(System.Int32)
 void Queue_1__ctor_m37745_gshared (Queue_1_t7046 * __this, int32_t ___count, MethodInfo* method);
#define Queue_1__ctor_m37745(__this, ___count, method) (void)Queue_1__ctor_m37745_gshared((Queue_1_t7046 *)__this, (int32_t)___count, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void Queue_1_System_Collections_ICollection_CopyTo_m37747_gshared (Queue_1_t7046 * __this, Array_t * ___array, int32_t ___idx, MethodInfo* method);
#define Queue_1_System_Collections_ICollection_CopyTo_m37747(__this, ___array, ___idx, method) (void)Queue_1_System_Collections_ICollection_CopyTo_m37747_gshared((Queue_1_t7046 *)__this, (Array_t *)___array, (int32_t)___idx, method)
// System.Boolean System.Collections.Generic.Queue`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
 bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m37749_gshared (Queue_1_t7046 * __this, MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_IsSynchronized_m37749(__this, method) (bool)Queue_1_System_Collections_ICollection_get_IsSynchronized_m37749_gshared((Queue_1_t7046 *)__this, method)
// System.Object System.Collections.Generic.Queue`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
 Object_t * Queue_1_System_Collections_ICollection_get_SyncRoot_m37751_gshared (Queue_1_t7046 * __this, MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_SyncRoot_m37751(__this, method) (Object_t *)Queue_1_System_Collections_ICollection_get_SyncRoot_m37751_gshared((Queue_1_t7046 *)__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Queue`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
 Object_t* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m37753_gshared (Queue_1_t7046 * __this, MethodInfo* method);
#define Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m37753(__this, method) (Object_t*)Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m37753_gshared((Queue_1_t7046 *)__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Queue`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * Queue_1_System_Collections_IEnumerable_GetEnumerator_m37755_gshared (Queue_1_t7046 * __this, MethodInfo* method);
#define Queue_1_System_Collections_IEnumerable_GetEnumerator_m37755(__this, method) (Object_t *)Queue_1_System_Collections_IEnumerable_GetEnumerator_m37755_gshared((Queue_1_t7046 *)__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::Clear()
 void Queue_1_Clear_m37757_gshared (Queue_1_t7046 * __this, MethodInfo* method);
#define Queue_1_Clear_m37757(__this, method) (void)Queue_1_Clear_m37757_gshared((Queue_1_t7046 *)__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::CopyTo(T[],System.Int32)
 void Queue_1_CopyTo_m37759_gshared (Queue_1_t7046 * __this, ObjectU5BU5D_t5* ___array, int32_t ___idx, MethodInfo* method);
#define Queue_1_CopyTo_m37759(__this, ___array, ___idx, method) (void)Queue_1_CopyTo_m37759_gshared((Queue_1_t7046 *)__this, (ObjectU5BU5D_t5*)___array, (int32_t)___idx, method)
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
 Object_t * Queue_1_Dequeue_m37760_gshared (Queue_1_t7046 * __this, MethodInfo* method);
#define Queue_1_Dequeue_m37760(__this, method) (Object_t *)Queue_1_Dequeue_m37760_gshared((Queue_1_t7046 *)__this, method)
// T System.Collections.Generic.Queue`1<System.Object>::Peek()
 Object_t * Queue_1_Peek_m37762_gshared (Queue_1_t7046 * __this, MethodInfo* method);
#define Queue_1_Peek_m37762(__this, method) (Object_t *)Queue_1_Peek_m37762_gshared((Queue_1_t7046 *)__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
 void Queue_1_Enqueue_m37763_gshared (Queue_1_t7046 * __this, Object_t * ___item, MethodInfo* method);
#define Queue_1_Enqueue_m37763(__this, ___item, method) (void)Queue_1_Enqueue_m37763_gshared((Queue_1_t7046 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::SetCapacity(System.Int32)
 void Queue_1_SetCapacity_m37765_gshared (Queue_1_t7046 * __this, int32_t ___new_size, MethodInfo* method);
#define Queue_1_SetCapacity_m37765(__this, ___new_size, method) (void)Queue_1_SetCapacity_m37765_gshared((Queue_1_t7046 *)__this, (int32_t)___new_size, method)
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
 int32_t Queue_1_get_Count_m37766_gshared (Queue_1_t7046 * __this, MethodInfo* method);
#define Queue_1_get_Count_m37766(__this, method) (int32_t)Queue_1_get_Count_m37766_gshared((Queue_1_t7046 *)__this, method)
// System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1<System.Object>::GetEnumerator()
 Enumerator_t7048  Queue_1_GetEnumerator_m37768 (Queue_1_t7046 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
