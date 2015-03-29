﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct ReadOnlyCollection_1_t6611;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t432;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct IList_1_t6616;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>[]
struct IDictionary_2U5BU5D_t6606;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct IEnumerator_1_t6609;

// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1MethodDeclarations.h"
#define ReadOnlyCollection_1__ctor_m34458(__this, ___list, method) (void)ReadOnlyCollection_1__ctor_m6338_gshared((ReadOnlyCollection_1_t1038 *)__this, (Object_t*)___list, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.Generic.ICollection<T>.Add(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m34459(__this, ___item, method) (void)ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m15508_gshared((ReadOnlyCollection_1_t1038 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.Generic.ICollection<T>.Clear()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m34460(__this, method) (void)ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m15509_gshared((ReadOnlyCollection_1_t1038 *)__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m34461(__this, ___index, ___item, method) (void)ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m15510_gshared((ReadOnlyCollection_1_t1038 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.Generic.ICollection<T>.Remove(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m34462(__this, ___item, method) (bool)ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m15511_gshared((ReadOnlyCollection_1_t1038 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m34463(__this, ___index, method) (void)ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m15512_gshared((ReadOnlyCollection_1_t1038 *)__this, (int32_t)___index, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m34464(__this, ___index, method) (Object_t*)ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m15513_gshared((ReadOnlyCollection_1_t1038 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m34465(__this, ___index, ___value, method) (void)ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m15514_gshared((ReadOnlyCollection_1_t1038 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m34466(__this, method) (bool)ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15515_gshared((ReadOnlyCollection_1_t1038 *)__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m34467(__this, ___array, ___index, method) (void)ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m15516_gshared((ReadOnlyCollection_1_t1038 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
#define ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m34468(__this, method) (Object_t *)ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m15517_gshared((ReadOnlyCollection_1_t1038 *)__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IList.Add(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Add_m34469(__this, ___value, method) (int32_t)ReadOnlyCollection_1_System_Collections_IList_Add_m15518_gshared((ReadOnlyCollection_1_t1038 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IList.Clear()
#define ReadOnlyCollection_1_System_Collections_IList_Clear_m34470(__this, method) (void)ReadOnlyCollection_1_System_Collections_IList_Clear_m15519_gshared((ReadOnlyCollection_1_t1038 *)__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IList.Contains(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Contains_m34471(__this, ___value, method) (bool)ReadOnlyCollection_1_System_Collections_IList_Contains_m15520_gshared((ReadOnlyCollection_1_t1038 *)__this, (Object_t *)___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IList.IndexOf(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_IndexOf_m34472(__this, ___value, method) (int32_t)ReadOnlyCollection_1_System_Collections_IList_IndexOf_m15521_gshared((ReadOnlyCollection_1_t1038 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Insert_m34473(__this, ___index, ___value, method) (void)ReadOnlyCollection_1_System_Collections_IList_Insert_m15522_gshared((ReadOnlyCollection_1_t1038 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IList.Remove(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Remove_m34474(__this, ___value, method) (void)ReadOnlyCollection_1_System_Collections_IList_Remove_m15523_gshared((ReadOnlyCollection_1_t1038 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IList.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m34475(__this, ___index, method) (void)ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m15524_gshared((ReadOnlyCollection_1_t1038 *)__this, (int32_t)___index, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m34476(__this, method) (bool)ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m15525_gshared((ReadOnlyCollection_1_t1038 *)__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.ICollection.get_SyncRoot()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m34477(__this, method) (Object_t *)ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m15526_gshared((ReadOnlyCollection_1_t1038 *)__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IList.get_IsFixedSize()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m34478(__this, method) (bool)ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m15527_gshared((ReadOnlyCollection_1_t1038 *)__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IList.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m34479(__this, method) (bool)ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m15528_gshared((ReadOnlyCollection_1_t1038 *)__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IList.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_get_Item_m34480(__this, ___index, method) (Object_t *)ReadOnlyCollection_1_System_Collections_IList_get_Item_m15529_gshared((ReadOnlyCollection_1_t1038 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_set_Item_m34481(__this, ___index, ___value, method) (void)ReadOnlyCollection_1_System_Collections_IList_set_Item_m15530_gshared((ReadOnlyCollection_1_t1038 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::Contains(T)
#define ReadOnlyCollection_1_Contains_m34482(__this, ___value, method) (bool)ReadOnlyCollection_1_Contains_m15531_gshared((ReadOnlyCollection_1_t1038 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::CopyTo(T[],System.Int32)
#define ReadOnlyCollection_1_CopyTo_m34483(__this, ___array, ___index, method) (void)ReadOnlyCollection_1_CopyTo_m15532_gshared((ReadOnlyCollection_1_t1038 *)__this, (ObjectU5BU5D_t5*)___array, (int32_t)___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::GetEnumerator()
#define ReadOnlyCollection_1_GetEnumerator_m34484(__this, method) (Object_t*)ReadOnlyCollection_1_GetEnumerator_m6343_gshared((ReadOnlyCollection_1_t1038 *)__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::IndexOf(T)
#define ReadOnlyCollection_1_IndexOf_m34485(__this, ___value, method) (int32_t)ReadOnlyCollection_1_IndexOf_m15533_gshared((ReadOnlyCollection_1_t1038 *)__this, (Object_t *)___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::get_Count()
#define ReadOnlyCollection_1_get_Count_m34486(__this, method) (int32_t)ReadOnlyCollection_1_get_Count_m15534_gshared((ReadOnlyCollection_1_t1038 *)__this, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::get_Item(System.Int32)
#define ReadOnlyCollection_1_get_Item_m34487(__this, ___index, method) (Object_t*)ReadOnlyCollection_1_get_Item_m15535_gshared((ReadOnlyCollection_1_t1038 *)__this, (int32_t)___index, method)
