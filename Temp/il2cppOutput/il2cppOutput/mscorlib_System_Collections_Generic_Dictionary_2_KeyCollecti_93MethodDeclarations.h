#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Tuple`2<System.Type,System.String>,System.String>
struct KeyCollection_t6653;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>
struct Dictionary_2_t1520;
// System.Tuple`2<System.Type,System.String>
struct Tuple_2_t1506;
// System.Collections.Generic.IEnumerator`1<System.Tuple`2<System.Type,System.String>>
struct IEnumerator_1_t6658;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Tuple`2<System.Type,System.String>[]
struct Tuple_2U5BU5D_t6649;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Tuple`2<System.Type,System.String>,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_94.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Tuple`2<System.Type,System.String>,System.String>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_5MethodDeclarations.h"
#define KeyCollection__ctor_m34720(__this, ___dictionary, method) (void)KeyCollection__ctor_m7718_gshared((KeyCollection_t492 *)__this, (Dictionary_2_t473 *)___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m34721(__this, ___item, method) (void)KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m15946_gshared((KeyCollection_t492 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.Generic.ICollection<TKey>.Clear()
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m34722(__this, method) (void)KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m15947_gshared((KeyCollection_t492 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m34723(__this, ___item, method) (bool)KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m15948_gshared((KeyCollection_t492 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m34724(__this, ___item, method) (bool)KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m15949_gshared((KeyCollection_t492 *)__this, (Object_t *)___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m34725(__this, method) (Object_t*)KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m15950_gshared((KeyCollection_t492 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define KeyCollection_System_Collections_ICollection_CopyTo_m34726(__this, ___array, ___index, method) (void)KeyCollection_System_Collections_ICollection_CopyTo_m15951_gshared((KeyCollection_t492 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.IEnumerable.GetEnumerator()
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m34727(__this, method) (Object_t *)KeyCollection_System_Collections_IEnumerable_GetEnumerator_m15952_gshared((KeyCollection_t492 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m34728(__this, method) (bool)KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m15953_gshared((KeyCollection_t492 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.ICollection.get_IsSynchronized()
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m34729(__this, method) (bool)KeyCollection_System_Collections_ICollection_get_IsSynchronized_m15954_gshared((KeyCollection_t492 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.ICollection.get_SyncRoot()
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m34730(__this, method) (Object_t *)KeyCollection_System_Collections_ICollection_get_SyncRoot_m15955_gshared((KeyCollection_t492 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Tuple`2<System.Type,System.String>,System.String>::CopyTo(TKey[],System.Int32)
#define KeyCollection_CopyTo_m34731(__this, ___array, ___index, method) (void)KeyCollection_CopyTo_m15956_gshared((KeyCollection_t492 *)__this, (ObjectU5BU5D_t5*)___array, (int32_t)___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Tuple`2<System.Type,System.String>,System.String>::GetEnumerator()
 Enumerator_t6659  KeyCollection_GetEnumerator_m34732 (KeyCollection_t6653 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Tuple`2<System.Type,System.String>,System.String>::get_Count()
#define KeyCollection_get_Count_m34733(__this, method) (int32_t)KeyCollection_get_Count_m15957_gshared((KeyCollection_t492 *)__this, method)
