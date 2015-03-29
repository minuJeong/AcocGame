#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>
struct ReadOnlyCollection_1_t8464;
// System.Collections.Generic.IDictionary`2<System.String,System.DateTime>
struct IDictionary_2_t2217;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>
struct IList_1_t8450;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.IDictionary`2<System.String,System.DateTime>[]
struct IDictionary_2U5BU5D_t8460;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>
struct IEnumerator_1_t8456;

// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1MethodDeclarations.h"
#define ReadOnlyCollection_1__ctor_m53537(__this, ___list, method) (void)ReadOnlyCollection_1__ctor_m6336_gshared((ReadOnlyCollection_1_t1038 *)__this, (Object_t*)___list, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>::System.Collections.Generic.ICollection<T>.Add(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m53538(__this, ___item, method) (void)ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m15505_gshared((ReadOnlyCollection_1_t1038 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>::System.Collections.Generic.ICollection<T>.Clear()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m53539(__this, method) (void)ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m15506_gshared((ReadOnlyCollection_1_t1038 *)__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m53540(__this, ___index, ___item, method) (void)ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m15507_gshared((ReadOnlyCollection_1_t1038 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>::System.Collections.Generic.ICollection<T>.Remove(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m53541(__this, ___item, method) (bool)ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m15508_gshared((ReadOnlyCollection_1_t1038 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m53542(__this, ___index, method) (void)ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m15509_gshared((ReadOnlyCollection_1_t1038 *)__this, (int32_t)___index, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m53543(__this, ___index, method) (Object_t*)ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m15510_gshared((ReadOnlyCollection_1_t1038 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m53544(__this, ___index, ___value, method) (void)ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m15511_gshared((ReadOnlyCollection_1_t1038 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m53545(__this, method) (bool)ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15512_gshared((ReadOnlyCollection_1_t1038 *)__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m53546(__this, ___array, ___index, method) (void)ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m15513_gshared((ReadOnlyCollection_1_t1038 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>::System.Collections.IEnumerable.GetEnumerator()
#define ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m53547(__this, method) (Object_t *)ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m15514_gshared((ReadOnlyCollection_1_t1038 *)__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>::System.Collections.IList.Add(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Add_m53548(__this, ___value, method) (int32_t)ReadOnlyCollection_1_System_Collections_IList_Add_m15515_gshared((ReadOnlyCollection_1_t1038 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>::System.Collections.IList.Clear()
#define ReadOnlyCollection_1_System_Collections_IList_Clear_m53549(__this, method) (void)ReadOnlyCollection_1_System_Collections_IList_Clear_m15516_gshared((ReadOnlyCollection_1_t1038 *)__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>::System.Collections.IList.Contains(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Contains_m53550(__this, ___value, method) (bool)ReadOnlyCollection_1_System_Collections_IList_Contains_m15517_gshared((ReadOnlyCollection_1_t1038 *)__this, (Object_t *)___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>::System.Collections.IList.IndexOf(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_IndexOf_m53551(__this, ___value, method) (int32_t)ReadOnlyCollection_1_System_Collections_IList_IndexOf_m15518_gshared((ReadOnlyCollection_1_t1038 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Insert_m53552(__this, ___index, ___value, method) (void)ReadOnlyCollection_1_System_Collections_IList_Insert_m15519_gshared((ReadOnlyCollection_1_t1038 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>::System.Collections.IList.Remove(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Remove_m53553(__this, ___value, method) (void)ReadOnlyCollection_1_System_Collections_IList_Remove_m15520_gshared((ReadOnlyCollection_1_t1038 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>::System.Collections.IList.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m53554(__this, ___index, method) (void)ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m15521_gshared((ReadOnlyCollection_1_t1038 *)__this, (int32_t)___index, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>::System.Collections.ICollection.get_IsSynchronized()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m53555(__this, method) (bool)ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m15522_gshared((ReadOnlyCollection_1_t1038 *)__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>::System.Collections.ICollection.get_SyncRoot()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m53556(__this, method) (Object_t *)ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m15523_gshared((ReadOnlyCollection_1_t1038 *)__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>::System.Collections.IList.get_IsFixedSize()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m53557(__this, method) (bool)ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m15524_gshared((ReadOnlyCollection_1_t1038 *)__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>::System.Collections.IList.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m53558(__this, method) (bool)ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m15525_gshared((ReadOnlyCollection_1_t1038 *)__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>::System.Collections.IList.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_get_Item_m53559(__this, ___index, method) (Object_t *)ReadOnlyCollection_1_System_Collections_IList_get_Item_m15526_gshared((ReadOnlyCollection_1_t1038 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_set_Item_m53560(__this, ___index, ___value, method) (void)ReadOnlyCollection_1_System_Collections_IList_set_Item_m15527_gshared((ReadOnlyCollection_1_t1038 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>::Contains(T)
#define ReadOnlyCollection_1_Contains_m53561(__this, ___value, method) (bool)ReadOnlyCollection_1_Contains_m15528_gshared((ReadOnlyCollection_1_t1038 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>::CopyTo(T[],System.Int32)
#define ReadOnlyCollection_1_CopyTo_m53562(__this, ___array, ___index, method) (void)ReadOnlyCollection_1_CopyTo_m15529_gshared((ReadOnlyCollection_1_t1038 *)__this, (ObjectU5BU5D_t5*)___array, (int32_t)___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>::GetEnumerator()
#define ReadOnlyCollection_1_GetEnumerator_m53563(__this, method) (Object_t*)ReadOnlyCollection_1_GetEnumerator_m6341_gshared((ReadOnlyCollection_1_t1038 *)__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>::IndexOf(T)
#define ReadOnlyCollection_1_IndexOf_m53564(__this, ___value, method) (int32_t)ReadOnlyCollection_1_IndexOf_m15530_gshared((ReadOnlyCollection_1_t1038 *)__this, (Object_t *)___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>::get_Count()
#define ReadOnlyCollection_1_get_Count_m53565(__this, method) (int32_t)ReadOnlyCollection_1_get_Count_m15531_gshared((ReadOnlyCollection_1_t1038 *)__this, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>::get_Item(System.Int32)
#define ReadOnlyCollection_1_get_Item_m53566(__this, ___index, method) (Object_t*)ReadOnlyCollection_1_get_Item_m15532_gshared((ReadOnlyCollection_1_t1038 *)__this, (int32_t)___index, method)
