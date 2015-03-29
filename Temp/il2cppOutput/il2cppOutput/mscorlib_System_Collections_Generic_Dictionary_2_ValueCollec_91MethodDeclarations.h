#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Parse.Internal.IParseFieldOperation>
struct ValueCollection_t6536;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>
struct Dictionary_2_t1505;
// Parse.Internal.IParseFieldOperation
struct IParseFieldOperation_t1040;
// System.Collections.Generic.IEnumerator`1<Parse.Internal.IParseFieldOperation>
struct IEnumerator_1_t6541;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// Parse.Internal.IParseFieldOperation[]
struct IParseFieldOperationU5BU5D_t6532;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,Parse.Internal.IParseFieldOperation>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_92.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Parse.Internal.IParseFieldOperation>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_11MethodDeclarations.h"
#define ValueCollection__ctor_m33789(__this, ___dictionary, method) (void)ValueCollection__ctor_m7719_gshared((ValueCollection_t2421 *)__this, (Dictionary_2_t473 *)___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m33790(__this, ___item, method) (void)ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m15979_gshared((ValueCollection_t2421 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.Generic.ICollection<TValue>.Clear()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m33791(__this, method) (void)ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m15980_gshared((ValueCollection_t2421 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m33792(__this, ___item, method) (bool)ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m15981_gshared((ValueCollection_t2421 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m33793(__this, ___item, method) (bool)ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m15982_gshared((ValueCollection_t2421 *)__this, (Object_t *)___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m33794(__this, method) (Object_t*)ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m15983_gshared((ValueCollection_t2421 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ValueCollection_System_Collections_ICollection_CopyTo_m33795(__this, ___array, ___index, method) (void)ValueCollection_System_Collections_ICollection_CopyTo_m15984_gshared((ValueCollection_t2421 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.IEnumerable.GetEnumerator()
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m33796(__this, method) (Object_t *)ValueCollection_System_Collections_IEnumerable_GetEnumerator_m15985_gshared((ValueCollection_t2421 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m33797(__this, method) (bool)ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m15986_gshared((ValueCollection_t2421 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.ICollection.get_IsSynchronized()
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m33798(__this, method) (bool)ValueCollection_System_Collections_ICollection_get_IsSynchronized_m15987_gshared((ValueCollection_t2421 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.ICollection.get_SyncRoot()
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m33799(__this, method) (Object_t *)ValueCollection_System_Collections_ICollection_get_SyncRoot_m15988_gshared((ValueCollection_t2421 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Parse.Internal.IParseFieldOperation>::CopyTo(TValue[],System.Int32)
#define ValueCollection_CopyTo_m33800(__this, ___array, ___index, method) (void)ValueCollection_CopyTo_m15989_gshared((ValueCollection_t2421 *)__this, (ObjectU5BU5D_t5*)___array, (int32_t)___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Parse.Internal.IParseFieldOperation>::GetEnumerator()
 Enumerator_t6542  ValueCollection_GetEnumerator_m33801 (ValueCollection_t6536 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Parse.Internal.IParseFieldOperation>::get_Count()
#define ValueCollection_get_Count_m33802(__this, method) (int32_t)ValueCollection_get_Count_m15991_gshared((ValueCollection_t2421 *)__this, method)
