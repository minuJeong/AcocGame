#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ImporterFunc>
struct ValueCollection_t6030;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ImporterFunc>
struct Dictionary_2_t968;
// LitJson.ImporterFunc
struct ImporterFunc_t900;
// System.Collections.Generic.IEnumerator`1<LitJson.ImporterFunc>
struct IEnumerator_1_t6036;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// LitJson.ImporterFunc[]
struct ImporterFuncU5BU5D_t6026;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Type,LitJson.ImporterFunc>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_72.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ImporterFunc>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_11MethodDeclarations.h"
#define ValueCollection__ctor_m29925(__this, ___dictionary, method) (void)ValueCollection__ctor_m7721_gshared((ValueCollection_t2421 *)__this, (Dictionary_2_t473 *)___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ImporterFunc>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m29926(__this, ___item, method) (void)ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m15982_gshared((ValueCollection_t2421 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ImporterFunc>::System.Collections.Generic.ICollection<TValue>.Clear()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m29927(__this, method) (void)ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m15983_gshared((ValueCollection_t2421 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ImporterFunc>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m29928(__this, ___item, method) (bool)ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m15984_gshared((ValueCollection_t2421 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ImporterFunc>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m29929(__this, ___item, method) (bool)ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m15985_gshared((ValueCollection_t2421 *)__this, (Object_t *)___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ImporterFunc>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m29930(__this, method) (Object_t*)ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m15986_gshared((ValueCollection_t2421 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ImporterFunc>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ValueCollection_System_Collections_ICollection_CopyTo_m29931(__this, ___array, ___index, method) (void)ValueCollection_System_Collections_ICollection_CopyTo_m15987_gshared((ValueCollection_t2421 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ImporterFunc>::System.Collections.IEnumerable.GetEnumerator()
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m29932(__this, method) (Object_t *)ValueCollection_System_Collections_IEnumerable_GetEnumerator_m15988_gshared((ValueCollection_t2421 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ImporterFunc>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m29933(__this, method) (bool)ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m15989_gshared((ValueCollection_t2421 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ImporterFunc>::System.Collections.ICollection.get_IsSynchronized()
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m29934(__this, method) (bool)ValueCollection_System_Collections_ICollection_get_IsSynchronized_m15990_gshared((ValueCollection_t2421 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ImporterFunc>::System.Collections.ICollection.get_SyncRoot()
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m29935(__this, method) (Object_t *)ValueCollection_System_Collections_ICollection_get_SyncRoot_m15991_gshared((ValueCollection_t2421 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ImporterFunc>::CopyTo(TValue[],System.Int32)
#define ValueCollection_CopyTo_m29936(__this, ___array, ___index, method) (void)ValueCollection_CopyTo_m15992_gshared((ValueCollection_t2421 *)__this, (ObjectU5BU5D_t5*)___array, (int32_t)___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ImporterFunc>::GetEnumerator()
 Enumerator_t6037  ValueCollection_GetEnumerator_m29937 (ValueCollection_t6030 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ImporterFunc>::get_Count()
#define ValueCollection_get_Count_m29938(__this, method) (int32_t)ValueCollection_get_Count_m15994_gshared((ValueCollection_t2421 *)__this, method)
