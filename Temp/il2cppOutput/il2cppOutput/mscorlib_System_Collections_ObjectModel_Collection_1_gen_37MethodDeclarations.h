#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Threading.Tasks.Task>
struct Collection_1_t6349;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task
struct Task_t390;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Threading.Tasks.Task[]
struct TaskU5BU5D_t1072;
// System.Collections.Generic.IEnumerator`1<System.Threading.Tasks.Task>
struct IEnumerator_1_t2249;
// System.Collections.Generic.IList`1<System.Threading.Tasks.Task>
struct IList_1_t6348;

// System.Void System.Collections.ObjectModel.Collection`1<System.Threading.Tasks.Task>::.ctor()
// System.Collections.ObjectModel.Collection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_genMethodDeclarations.h"
#define Collection_1__ctor_m32245(__this, method) (void)Collection_1__ctor_m15536_gshared((Collection_1_t4055 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Threading.Tasks.Task>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m32246(__this, method) (bool)Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15537_gshared((Collection_1_t4055 *)__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Threading.Tasks.Task>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Collection_1_System_Collections_ICollection_CopyTo_m32247(__this, ___array, ___index, method) (void)Collection_1_System_Collections_ICollection_CopyTo_m15538_gshared((Collection_1_t4055 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Threading.Tasks.Task>::System.Collections.IEnumerable.GetEnumerator()
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m32248(__this, method) (Object_t *)Collection_1_System_Collections_IEnumerable_GetEnumerator_m15539_gshared((Collection_1_t4055 *)__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Threading.Tasks.Task>::System.Collections.IList.Add(System.Object)
#define Collection_1_System_Collections_IList_Add_m32249(__this, ___value, method) (int32_t)Collection_1_System_Collections_IList_Add_m15540_gshared((Collection_1_t4055 *)__this, (Object_t *)___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Threading.Tasks.Task>::System.Collections.IList.Contains(System.Object)
#define Collection_1_System_Collections_IList_Contains_m32250(__this, ___value, method) (bool)Collection_1_System_Collections_IList_Contains_m15541_gshared((Collection_1_t4055 *)__this, (Object_t *)___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Threading.Tasks.Task>::System.Collections.IList.IndexOf(System.Object)
#define Collection_1_System_Collections_IList_IndexOf_m32251(__this, ___value, method) (int32_t)Collection_1_System_Collections_IList_IndexOf_m15542_gshared((Collection_1_t4055 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Threading.Tasks.Task>::System.Collections.IList.Insert(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_Insert_m32252(__this, ___index, ___value, method) (void)Collection_1_System_Collections_IList_Insert_m15543_gshared((Collection_1_t4055 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Threading.Tasks.Task>::System.Collections.IList.Remove(System.Object)
#define Collection_1_System_Collections_IList_Remove_m32253(__this, ___value, method) (void)Collection_1_System_Collections_IList_Remove_m15544_gshared((Collection_1_t4055 *)__this, (Object_t *)___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Threading.Tasks.Task>::System.Collections.ICollection.get_IsSynchronized()
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m32254(__this, method) (bool)Collection_1_System_Collections_ICollection_get_IsSynchronized_m15545_gshared((Collection_1_t4055 *)__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Threading.Tasks.Task>::System.Collections.ICollection.get_SyncRoot()
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m32255(__this, method) (Object_t *)Collection_1_System_Collections_ICollection_get_SyncRoot_m15546_gshared((Collection_1_t4055 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Threading.Tasks.Task>::System.Collections.IList.get_IsFixedSize()
#define Collection_1_System_Collections_IList_get_IsFixedSize_m32256(__this, method) (bool)Collection_1_System_Collections_IList_get_IsFixedSize_m15547_gshared((Collection_1_t4055 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Threading.Tasks.Task>::System.Collections.IList.get_IsReadOnly()
#define Collection_1_System_Collections_IList_get_IsReadOnly_m32257(__this, method) (bool)Collection_1_System_Collections_IList_get_IsReadOnly_m15548_gshared((Collection_1_t4055 *)__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Threading.Tasks.Task>::System.Collections.IList.get_Item(System.Int32)
#define Collection_1_System_Collections_IList_get_Item_m32258(__this, ___index, method) (Object_t *)Collection_1_System_Collections_IList_get_Item_m15549_gshared((Collection_1_t4055 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Threading.Tasks.Task>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_set_Item_m32259(__this, ___index, ___value, method) (void)Collection_1_System_Collections_IList_set_Item_m15550_gshared((Collection_1_t4055 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Threading.Tasks.Task>::Add(T)
#define Collection_1_Add_m32260(__this, ___item, method) (void)Collection_1_Add_m15551_gshared((Collection_1_t4055 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Threading.Tasks.Task>::Clear()
#define Collection_1_Clear_m32261(__this, method) (void)Collection_1_Clear_m15552_gshared((Collection_1_t4055 *)__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Threading.Tasks.Task>::ClearItems()
#define Collection_1_ClearItems_m32262(__this, method) (void)Collection_1_ClearItems_m15553_gshared((Collection_1_t4055 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Threading.Tasks.Task>::Contains(T)
#define Collection_1_Contains_m32263(__this, ___item, method) (bool)Collection_1_Contains_m15554_gshared((Collection_1_t4055 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Threading.Tasks.Task>::CopyTo(T[],System.Int32)
#define Collection_1_CopyTo_m32264(__this, ___array, ___index, method) (void)Collection_1_CopyTo_m15555_gshared((Collection_1_t4055 *)__this, (ObjectU5BU5D_t5*)___array, (int32_t)___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Threading.Tasks.Task>::GetEnumerator()
#define Collection_1_GetEnumerator_m32265(__this, method) (Object_t*)Collection_1_GetEnumerator_m15556_gshared((Collection_1_t4055 *)__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Threading.Tasks.Task>::IndexOf(T)
#define Collection_1_IndexOf_m32266(__this, ___item, method) (int32_t)Collection_1_IndexOf_m15557_gshared((Collection_1_t4055 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Threading.Tasks.Task>::Insert(System.Int32,T)
#define Collection_1_Insert_m32267(__this, ___index, ___item, method) (void)Collection_1_Insert_m15558_gshared((Collection_1_t4055 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Threading.Tasks.Task>::InsertItem(System.Int32,T)
#define Collection_1_InsertItem_m32268(__this, ___index, ___item, method) (void)Collection_1_InsertItem_m15559_gshared((Collection_1_t4055 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Threading.Tasks.Task>::Remove(T)
#define Collection_1_Remove_m32269(__this, ___item, method) (bool)Collection_1_Remove_m15560_gshared((Collection_1_t4055 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Threading.Tasks.Task>::RemoveAt(System.Int32)
#define Collection_1_RemoveAt_m32270(__this, ___index, method) (void)Collection_1_RemoveAt_m15561_gshared((Collection_1_t4055 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Threading.Tasks.Task>::RemoveItem(System.Int32)
#define Collection_1_RemoveItem_m32271(__this, ___index, method) (void)Collection_1_RemoveItem_m15562_gshared((Collection_1_t4055 *)__this, (int32_t)___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Threading.Tasks.Task>::get_Count()
#define Collection_1_get_Count_m32272(__this, method) (int32_t)Collection_1_get_Count_m15563_gshared((Collection_1_t4055 *)__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Threading.Tasks.Task>::get_Item(System.Int32)
#define Collection_1_get_Item_m32273(__this, ___index, method) (Task_t390 *)Collection_1_get_Item_m15564_gshared((Collection_1_t4055 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Threading.Tasks.Task>::set_Item(System.Int32,T)
#define Collection_1_set_Item_m32274(__this, ___index, ___value, method) (void)Collection_1_set_Item_m15565_gshared((Collection_1_t4055 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Threading.Tasks.Task>::SetItem(System.Int32,T)
#define Collection_1_SetItem_m32275(__this, ___index, ___item, method) (void)Collection_1_SetItem_m15566_gshared((Collection_1_t4055 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Threading.Tasks.Task>::IsValidItem(System.Object)
#define Collection_1_IsValidItem_m32276(__this/* static, unused */, ___item, method) (bool)Collection_1_IsValidItem_m15567_gshared((Object_t *)__this/* static, unused */, (Object_t *)___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Threading.Tasks.Task>::ConvertItem(System.Object)
#define Collection_1_ConvertItem_m32277(__this/* static, unused */, ___item, method) (Task_t390 *)Collection_1_ConvertItem_m15568_gshared((Object_t *)__this/* static, unused */, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Threading.Tasks.Task>::CheckWritable(System.Collections.Generic.IList`1<T>)
#define Collection_1_CheckWritable_m32278(__this/* static, unused */, ___list, method) (void)Collection_1_CheckWritable_m15569_gshared((Object_t *)__this/* static, unused */, (Object_t*)___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Threading.Tasks.Task>::IsSynchronized(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsSynchronized_m32279(__this/* static, unused */, ___list, method) (bool)Collection_1_IsSynchronized_m15570_gshared((Object_t *)__this/* static, unused */, (Object_t*)___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Threading.Tasks.Task>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsFixedSize_m32280(__this/* static, unused */, ___list, method) (bool)Collection_1_IsFixedSize_m15571_gshared((Object_t *)__this/* static, unused */, (Object_t*)___list, method)
