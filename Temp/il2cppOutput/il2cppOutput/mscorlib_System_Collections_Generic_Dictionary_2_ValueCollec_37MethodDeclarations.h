#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object[]>
struct ValueCollection_t4803;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>
struct Dictionary_2_t285;
// System.Object[]
struct ObjectU5BU5D_t5;
// System.Collections.Generic.IEnumerator`1<System.Object[]>
struct IEnumerator_1_t4813;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Object[][]
struct ObjectU5BU5DU5BU5D_t4799;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object[]>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_38.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object[]>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
 void ValueCollection__ctor_m20546 (ValueCollection_t4803 * __this, Dictionary_2_t285 * ___dictionary, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object[]>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
 void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m20547 (ValueCollection_t4803 * __this, ObjectU5BU5D_t5* ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object[]>::System.Collections.Generic.ICollection<TValue>.Clear()
 void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m20548 (ValueCollection_t4803 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object[]>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
 bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m20549 (ValueCollection_t4803 * __this, ObjectU5BU5D_t5* ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object[]>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
 bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m20550 (ValueCollection_t4803 * __this, ObjectU5BU5D_t5* ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object[]>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
 Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m20551 (ValueCollection_t4803 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object[]>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void ValueCollection_System_Collections_ICollection_CopyTo_m20552 (ValueCollection_t4803 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object[]>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m20553 (ValueCollection_t4803 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object[]>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
 bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m20554 (ValueCollection_t4803 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object[]>::System.Collections.ICollection.get_IsSynchronized()
 bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m20555 (ValueCollection_t4803 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object[]>::System.Collections.ICollection.get_SyncRoot()
 Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m20556 (ValueCollection_t4803 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object[]>::CopyTo(TValue[],System.Int32)
 void ValueCollection_CopyTo_m20557 (ValueCollection_t4803 * __this, ObjectU5BU5DU5BU5D_t4799* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object[]>::GetEnumerator()
 Enumerator_t4814  ValueCollection_GetEnumerator_m20558 (ValueCollection_t4803 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object[]>::get_Count()
 int32_t ValueCollection_get_Count_m20559 (ValueCollection_t4803 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
