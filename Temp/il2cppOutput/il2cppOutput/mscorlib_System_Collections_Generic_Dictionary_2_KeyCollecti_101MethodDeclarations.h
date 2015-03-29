#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct KeyCollection_t7009;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct Dictionary_2_t1585;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t1418;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.String[]
struct StringU5BU5D_t4;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_102.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_5MethodDeclarations.h"
#define KeyCollection__ctor_m37494(__this, ___dictionary, method) (void)KeyCollection__ctor_m7720_gshared((KeyCollection_t492 *)__this, (Dictionary_2_t473 *)___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m37495(__this, ___item, method) (void)KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m15949_gshared((KeyCollection_t492 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.Generic.ICollection<TKey>.Clear()
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m37496(__this, method) (void)KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m15950_gshared((KeyCollection_t492 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m37497(__this, ___item, method) (bool)KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m15951_gshared((KeyCollection_t492 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m37498(__this, ___item, method) (bool)KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m15952_gshared((KeyCollection_t492 *)__this, (Object_t *)___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m37499(__this, method) (Object_t*)KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m15953_gshared((KeyCollection_t492 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define KeyCollection_System_Collections_ICollection_CopyTo_m37500(__this, ___array, ___index, method) (void)KeyCollection_System_Collections_ICollection_CopyTo_m15954_gshared((KeyCollection_t492 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m37501(__this, method) (Object_t *)KeyCollection_System_Collections_IEnumerable_GetEnumerator_m15955_gshared((KeyCollection_t492 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m37502(__this, method) (bool)KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m15956_gshared((KeyCollection_t492 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m37503(__this, method) (bool)KeyCollection_System_Collections_ICollection_get_IsSynchronized_m15957_gshared((KeyCollection_t492 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.ICollection.get_SyncRoot()
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m37504(__this, method) (Object_t *)KeyCollection_System_Collections_ICollection_get_SyncRoot_m15958_gshared((KeyCollection_t492 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::CopyTo(TKey[],System.Int32)
#define KeyCollection_CopyTo_m37505(__this, ___array, ___index, method) (void)KeyCollection_CopyTo_m15959_gshared((KeyCollection_t492 *)__this, (ObjectU5BU5D_t5*)___array, (int32_t)___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::GetEnumerator()
 Enumerator_t7012  KeyCollection_GetEnumerator_m37506 (KeyCollection_t7009 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::get_Count()
#define KeyCollection_get_Count_m37507(__this, method) (int32_t)KeyCollection_get_Count_m15960_gshared((KeyCollection_t492 *)__this, method)
