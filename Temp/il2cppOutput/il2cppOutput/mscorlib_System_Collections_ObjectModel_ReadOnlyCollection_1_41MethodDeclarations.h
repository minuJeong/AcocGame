#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.WeakReference>
struct ReadOnlyCollection_1_t6134;
// System.WeakReference
struct WeakReference_t983;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<System.WeakReference>
struct IList_1_t1329;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.WeakReference[]
struct WeakReferenceU5BU5D_t6129;
// System.Collections.Generic.IEnumerator`1<System.WeakReference>
struct IEnumerator_1_t6132;

// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.WeakReference>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1MethodDeclarations.h"
#define ReadOnlyCollection_1__ctor_m30729(__this, ___list, method) (void)ReadOnlyCollection_1__ctor_m6336_gshared((ReadOnlyCollection_1_t1038 *)__this, (Object_t*)___list, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.WeakReference>::System.Collections.Generic.ICollection<T>.Add(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m30730(__this, ___item, method) (void)ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m15505_gshared((ReadOnlyCollection_1_t1038 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.WeakReference>::System.Collections.Generic.ICollection<T>.Clear()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m30731(__this, method) (void)ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m15506_gshared((ReadOnlyCollection_1_t1038 *)__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.WeakReference>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m30732(__this, ___index, ___item, method) (void)ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m15507_gshared((ReadOnlyCollection_1_t1038 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.WeakReference>::System.Collections.Generic.ICollection<T>.Remove(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m30733(__this, ___item, method) (bool)ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m15508_gshared((ReadOnlyCollection_1_t1038 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.WeakReference>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m30734(__this, ___index, method) (void)ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m15509_gshared((ReadOnlyCollection_1_t1038 *)__this, (int32_t)___index, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.WeakReference>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m30735(__this, ___index, method) (WeakReference_t983 *)ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m15510_gshared((ReadOnlyCollection_1_t1038 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.WeakReference>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m30736(__this, ___index, ___value, method) (void)ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m15511_gshared((ReadOnlyCollection_1_t1038 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.WeakReference>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30737(__this, method) (bool)ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15512_gshared((ReadOnlyCollection_1_t1038 *)__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.WeakReference>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m30738(__this, ___array, ___index, method) (void)ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m15513_gshared((ReadOnlyCollection_1_t1038 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<System.WeakReference>::System.Collections.IEnumerable.GetEnumerator()
#define ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m30739(__this, method) (Object_t *)ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m15514_gshared((ReadOnlyCollection_1_t1038 *)__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.WeakReference>::System.Collections.IList.Add(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Add_m30740(__this, ___value, method) (int32_t)ReadOnlyCollection_1_System_Collections_IList_Add_m15515_gshared((ReadOnlyCollection_1_t1038 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.WeakReference>::System.Collections.IList.Clear()
#define ReadOnlyCollection_1_System_Collections_IList_Clear_m30741(__this, method) (void)ReadOnlyCollection_1_System_Collections_IList_Clear_m15516_gshared((ReadOnlyCollection_1_t1038 *)__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.WeakReference>::System.Collections.IList.Contains(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Contains_m30742(__this, ___value, method) (bool)ReadOnlyCollection_1_System_Collections_IList_Contains_m15517_gshared((ReadOnlyCollection_1_t1038 *)__this, (Object_t *)___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.WeakReference>::System.Collections.IList.IndexOf(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_IndexOf_m30743(__this, ___value, method) (int32_t)ReadOnlyCollection_1_System_Collections_IList_IndexOf_m15518_gshared((ReadOnlyCollection_1_t1038 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.WeakReference>::System.Collections.IList.Insert(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Insert_m30744(__this, ___index, ___value, method) (void)ReadOnlyCollection_1_System_Collections_IList_Insert_m15519_gshared((ReadOnlyCollection_1_t1038 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.WeakReference>::System.Collections.IList.Remove(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Remove_m30745(__this, ___value, method) (void)ReadOnlyCollection_1_System_Collections_IList_Remove_m15520_gshared((ReadOnlyCollection_1_t1038 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.WeakReference>::System.Collections.IList.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m30746(__this, ___index, method) (void)ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m15521_gshared((ReadOnlyCollection_1_t1038 *)__this, (int32_t)___index, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.WeakReference>::System.Collections.ICollection.get_IsSynchronized()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m30747(__this, method) (bool)ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m15522_gshared((ReadOnlyCollection_1_t1038 *)__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.WeakReference>::System.Collections.ICollection.get_SyncRoot()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m30748(__this, method) (Object_t *)ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m15523_gshared((ReadOnlyCollection_1_t1038 *)__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.WeakReference>::System.Collections.IList.get_IsFixedSize()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m30749(__this, method) (bool)ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m15524_gshared((ReadOnlyCollection_1_t1038 *)__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.WeakReference>::System.Collections.IList.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m30750(__this, method) (bool)ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m15525_gshared((ReadOnlyCollection_1_t1038 *)__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.WeakReference>::System.Collections.IList.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_get_Item_m30751(__this, ___index, method) (Object_t *)ReadOnlyCollection_1_System_Collections_IList_get_Item_m15526_gshared((ReadOnlyCollection_1_t1038 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.WeakReference>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_set_Item_m30752(__this, ___index, ___value, method) (void)ReadOnlyCollection_1_System_Collections_IList_set_Item_m15527_gshared((ReadOnlyCollection_1_t1038 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.WeakReference>::Contains(T)
#define ReadOnlyCollection_1_Contains_m30753(__this, ___value, method) (bool)ReadOnlyCollection_1_Contains_m15528_gshared((ReadOnlyCollection_1_t1038 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.WeakReference>::CopyTo(T[],System.Int32)
#define ReadOnlyCollection_1_CopyTo_m30754(__this, ___array, ___index, method) (void)ReadOnlyCollection_1_CopyTo_m15529_gshared((ReadOnlyCollection_1_t1038 *)__this, (ObjectU5BU5D_t5*)___array, (int32_t)___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.WeakReference>::GetEnumerator()
#define ReadOnlyCollection_1_GetEnumerator_m30755(__this, method) (Object_t*)ReadOnlyCollection_1_GetEnumerator_m6341_gshared((ReadOnlyCollection_1_t1038 *)__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.WeakReference>::IndexOf(T)
#define ReadOnlyCollection_1_IndexOf_m30756(__this, ___value, method) (int32_t)ReadOnlyCollection_1_IndexOf_m15530_gshared((ReadOnlyCollection_1_t1038 *)__this, (Object_t *)___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.WeakReference>::get_Count()
#define ReadOnlyCollection_1_get_Count_m30757(__this, method) (int32_t)ReadOnlyCollection_1_get_Count_m15531_gshared((ReadOnlyCollection_1_t1038 *)__this, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.WeakReference>::get_Item(System.Int32)
#define ReadOnlyCollection_1_get_Item_m30758(__this, ___index, method) (WeakReference_t983 *)ReadOnlyCollection_1_get_Item_m15532_gshared((ReadOnlyCollection_1_t1038 *)__this, (int32_t)___index, method)
