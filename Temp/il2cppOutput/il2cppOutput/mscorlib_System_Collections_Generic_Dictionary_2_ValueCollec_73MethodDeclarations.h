#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>
struct ValueCollection_t6055;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>
struct Dictionary_2_t976;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>
struct IDictionary_2_t977;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>
struct IEnumerator_1_t6061;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>[]
struct IDictionary_2U5BU5D_t6051;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_74.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
 void ValueCollection__ctor_m30118 (ValueCollection_t6055 * __this, Dictionary_2_t976 * ___dictionary, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
 void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m30119 (ValueCollection_t6055 * __this, Object_t* ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::System.Collections.Generic.ICollection<TValue>.Clear()
 void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m30120 (ValueCollection_t6055 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
 bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m30121 (ValueCollection_t6055 * __this, Object_t* ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
 bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m30122 (ValueCollection_t6055 * __this, Object_t* ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
 Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m30123 (ValueCollection_t6055 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void ValueCollection_System_Collections_ICollection_CopyTo_m30124 (ValueCollection_t6055 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m30125 (ValueCollection_t6055 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
 bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m30126 (ValueCollection_t6055 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::System.Collections.ICollection.get_IsSynchronized()
 bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m30127 (ValueCollection_t6055 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::System.Collections.ICollection.get_SyncRoot()
 Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m30128 (ValueCollection_t6055 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::CopyTo(TValue[],System.Int32)
 void ValueCollection_CopyTo_m30129 (ValueCollection_t6055 * __this, IDictionary_2U5BU5D_t6051* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::GetEnumerator()
 Enumerator_t6062  ValueCollection_GetEnumerator_m30130 (ValueCollection_t6055 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::get_Count()
 int32_t ValueCollection_get_Count_m30131 (ValueCollection_t6055 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
