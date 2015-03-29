#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>
struct ReadOnlyCollection_1_t6357;
// System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>
struct Tuple_2_t1074;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>
struct IList_1_t6361;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>[]
struct Tuple_2U5BU5D_t6335;
// System.Collections.Generic.IEnumerator`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>
struct IEnumerator_1_t6334;

// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1MethodDeclarations.h"
#define ReadOnlyCollection_1__ctor_m32371(__this, ___list, method) (void)ReadOnlyCollection_1__ctor_m6336_gshared((ReadOnlyCollection_1_t1038 *)__this, (Object_t*)___list, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.Generic.ICollection<T>.Add(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m32372(__this, ___item, method) (void)ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m15505_gshared((ReadOnlyCollection_1_t1038 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.Generic.ICollection<T>.Clear()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m32373(__this, method) (void)ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m15506_gshared((ReadOnlyCollection_1_t1038 *)__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m32374(__this, ___index, ___item, method) (void)ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m15507_gshared((ReadOnlyCollection_1_t1038 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.Generic.ICollection<T>.Remove(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m32375(__this, ___item, method) (bool)ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m15508_gshared((ReadOnlyCollection_1_t1038 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m32376(__this, ___index, method) (void)ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m15509_gshared((ReadOnlyCollection_1_t1038 *)__this, (int32_t)___index, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m32377(__this, ___index, method) (Tuple_2_t1074 *)ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m15510_gshared((ReadOnlyCollection_1_t1038 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m32378(__this, ___index, ___value, method) (void)ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m15511_gshared((ReadOnlyCollection_1_t1038 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m32379(__this, method) (bool)ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15512_gshared((ReadOnlyCollection_1_t1038 *)__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m32380(__this, ___array, ___index, method) (void)ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m15513_gshared((ReadOnlyCollection_1_t1038 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.IEnumerable.GetEnumerator()
#define ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m32381(__this, method) (Object_t *)ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m15514_gshared((ReadOnlyCollection_1_t1038 *)__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.IList.Add(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Add_m32382(__this, ___value, method) (int32_t)ReadOnlyCollection_1_System_Collections_IList_Add_m15515_gshared((ReadOnlyCollection_1_t1038 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.IList.Clear()
#define ReadOnlyCollection_1_System_Collections_IList_Clear_m32383(__this, method) (void)ReadOnlyCollection_1_System_Collections_IList_Clear_m15516_gshared((ReadOnlyCollection_1_t1038 *)__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.IList.Contains(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Contains_m32384(__this, ___value, method) (bool)ReadOnlyCollection_1_System_Collections_IList_Contains_m15517_gshared((ReadOnlyCollection_1_t1038 *)__this, (Object_t *)___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.IList.IndexOf(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_IndexOf_m32385(__this, ___value, method) (int32_t)ReadOnlyCollection_1_System_Collections_IList_IndexOf_m15518_gshared((ReadOnlyCollection_1_t1038 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Insert_m32386(__this, ___index, ___value, method) (void)ReadOnlyCollection_1_System_Collections_IList_Insert_m15519_gshared((ReadOnlyCollection_1_t1038 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.IList.Remove(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Remove_m32387(__this, ___value, method) (void)ReadOnlyCollection_1_System_Collections_IList_Remove_m15520_gshared((ReadOnlyCollection_1_t1038 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.IList.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m32388(__this, ___index, method) (void)ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m15521_gshared((ReadOnlyCollection_1_t1038 *)__this, (int32_t)___index, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.ICollection.get_IsSynchronized()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m32389(__this, method) (bool)ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m15522_gshared((ReadOnlyCollection_1_t1038 *)__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.ICollection.get_SyncRoot()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m32390(__this, method) (Object_t *)ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m15523_gshared((ReadOnlyCollection_1_t1038 *)__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.IList.get_IsFixedSize()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m32391(__this, method) (bool)ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m15524_gshared((ReadOnlyCollection_1_t1038 *)__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.IList.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m32392(__this, method) (bool)ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m15525_gshared((ReadOnlyCollection_1_t1038 *)__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.IList.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_get_Item_m32393(__this, ___index, method) (Object_t *)ReadOnlyCollection_1_System_Collections_IList_get_Item_m15526_gshared((ReadOnlyCollection_1_t1038 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_set_Item_m32394(__this, ___index, ___value, method) (void)ReadOnlyCollection_1_System_Collections_IList_set_Item_m15527_gshared((ReadOnlyCollection_1_t1038 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::Contains(T)
#define ReadOnlyCollection_1_Contains_m32395(__this, ___value, method) (bool)ReadOnlyCollection_1_Contains_m15528_gshared((ReadOnlyCollection_1_t1038 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::CopyTo(T[],System.Int32)
#define ReadOnlyCollection_1_CopyTo_m32396(__this, ___array, ___index, method) (void)ReadOnlyCollection_1_CopyTo_m15529_gshared((ReadOnlyCollection_1_t1038 *)__this, (ObjectU5BU5D_t5*)___array, (int32_t)___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::GetEnumerator()
#define ReadOnlyCollection_1_GetEnumerator_m32397(__this, method) (Object_t*)ReadOnlyCollection_1_GetEnumerator_m6341_gshared((ReadOnlyCollection_1_t1038 *)__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::IndexOf(T)
#define ReadOnlyCollection_1_IndexOf_m32398(__this, ___value, method) (int32_t)ReadOnlyCollection_1_IndexOf_m15530_gshared((ReadOnlyCollection_1_t1038 *)__this, (Object_t *)___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::get_Count()
#define ReadOnlyCollection_1_get_Count_m32399(__this, method) (int32_t)ReadOnlyCollection_1_get_Count_m15531_gshared((ReadOnlyCollection_1_t1038 *)__this, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::get_Item(System.Int32)
#define ReadOnlyCollection_1_get_Item_m32400(__this, ___index, method) (Tuple_2_t1074 *)ReadOnlyCollection_1_get_Item_m15532_gshared((ReadOnlyCollection_1_t1038 *)__this, (int32_t)___index, method)
