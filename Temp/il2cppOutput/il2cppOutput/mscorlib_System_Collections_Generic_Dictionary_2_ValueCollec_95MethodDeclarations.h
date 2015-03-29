#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.String>,System.String>
struct ValueCollection_t6654;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>
struct Dictionary_2_t1520;
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
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Tuple`2<System.Type,System.String>,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_96.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.String>,System.String>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_11MethodDeclarations.h"
#define ValueCollection__ctor_m34758(__this, ___dictionary, method) (void)ValueCollection__ctor_m7719_gshared((ValueCollection_t2421 *)__this, (Dictionary_2_t473 *)___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m34759(__this, ___item, method) (void)ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m15979_gshared((ValueCollection_t2421 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.Generic.ICollection<TValue>.Clear()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m34760(__this, method) (void)ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m15980_gshared((ValueCollection_t2421 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m34761(__this, ___item, method) (bool)ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m15981_gshared((ValueCollection_t2421 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m34762(__this, ___item, method) (bool)ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m15982_gshared((ValueCollection_t2421 *)__this, (Object_t *)___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m34763(__this, method) (Object_t*)ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m15983_gshared((ValueCollection_t2421 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ValueCollection_System_Collections_ICollection_CopyTo_m34764(__this, ___array, ___index, method) (void)ValueCollection_System_Collections_ICollection_CopyTo_m15984_gshared((ValueCollection_t2421 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.IEnumerable.GetEnumerator()
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m34765(__this, method) (Object_t *)ValueCollection_System_Collections_IEnumerable_GetEnumerator_m15985_gshared((ValueCollection_t2421 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m34766(__this, method) (bool)ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m15986_gshared((ValueCollection_t2421 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.ICollection.get_IsSynchronized()
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m34767(__this, method) (bool)ValueCollection_System_Collections_ICollection_get_IsSynchronized_m15987_gshared((ValueCollection_t2421 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.ICollection.get_SyncRoot()
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m34768(__this, method) (Object_t *)ValueCollection_System_Collections_ICollection_get_SyncRoot_m15988_gshared((ValueCollection_t2421 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.String>,System.String>::CopyTo(TValue[],System.Int32)
#define ValueCollection_CopyTo_m34769(__this, ___array, ___index, method) (void)ValueCollection_CopyTo_m15989_gshared((ValueCollection_t2421 *)__this, (ObjectU5BU5D_t5*)___array, (int32_t)___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.String>,System.String>::GetEnumerator()
 Enumerator_t6661  ValueCollection_GetEnumerator_m34770 (ValueCollection_t6654 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.String>,System.String>::get_Count()
#define ValueCollection_get_Count_m34771(__this, method) (int32_t)ValueCollection_get_Count_m15991_gshared((ValueCollection_t2421 *)__this, method)
