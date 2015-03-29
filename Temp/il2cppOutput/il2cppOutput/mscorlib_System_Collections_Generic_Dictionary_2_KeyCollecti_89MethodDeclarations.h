#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.Internal.IParseFieldOperation>
struct KeyCollection_t6535;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>
struct Dictionary_2_t1505;
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
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,Parse.Internal.IParseFieldOperation>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_90.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.Internal.IParseFieldOperation>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_5MethodDeclarations.h"
#define KeyCollection__ctor_m33751(__this, ___dictionary, method) (void)KeyCollection__ctor_m7718_gshared((KeyCollection_t492 *)__this, (Dictionary_2_t473 *)___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m33752(__this, ___item, method) (void)KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m15946_gshared((KeyCollection_t492 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.Generic.ICollection<TKey>.Clear()
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m33753(__this, method) (void)KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m15947_gshared((KeyCollection_t492 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m33754(__this, ___item, method) (bool)KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m15948_gshared((KeyCollection_t492 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m33755(__this, ___item, method) (bool)KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m15949_gshared((KeyCollection_t492 *)__this, (Object_t *)___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m33756(__this, method) (Object_t*)KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m15950_gshared((KeyCollection_t492 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define KeyCollection_System_Collections_ICollection_CopyTo_m33757(__this, ___array, ___index, method) (void)KeyCollection_System_Collections_ICollection_CopyTo_m15951_gshared((KeyCollection_t492 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.IEnumerable.GetEnumerator()
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m33758(__this, method) (Object_t *)KeyCollection_System_Collections_IEnumerable_GetEnumerator_m15952_gshared((KeyCollection_t492 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m33759(__this, method) (bool)KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m15953_gshared((KeyCollection_t492 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.ICollection.get_IsSynchronized()
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m33760(__this, method) (bool)KeyCollection_System_Collections_ICollection_get_IsSynchronized_m15954_gshared((KeyCollection_t492 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.ICollection.get_SyncRoot()
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m33761(__this, method) (Object_t *)KeyCollection_System_Collections_ICollection_get_SyncRoot_m15955_gshared((KeyCollection_t492 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.Internal.IParseFieldOperation>::CopyTo(TKey[],System.Int32)
#define KeyCollection_CopyTo_m33762(__this, ___array, ___index, method) (void)KeyCollection_CopyTo_m15956_gshared((KeyCollection_t492 *)__this, (ObjectU5BU5D_t5*)___array, (int32_t)___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.Internal.IParseFieldOperation>::GetEnumerator()
 Enumerator_t6539  KeyCollection_GetEnumerator_m33763 (KeyCollection_t6535 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.Internal.IParseFieldOperation>::get_Count()
#define KeyCollection_get_Count_m33764(__this, method) (int32_t)KeyCollection_get_Count_m15957_gshared((KeyCollection_t492 *)__this, method)
