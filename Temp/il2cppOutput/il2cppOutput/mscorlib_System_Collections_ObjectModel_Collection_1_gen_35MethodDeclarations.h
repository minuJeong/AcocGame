#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.WeakReference>
struct Collection_1_t6138;
// System.Object
struct Object_t;
// System.WeakReference
struct WeakReference_t983;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.WeakReference[]
struct WeakReferenceU5BU5D_t6129;
// System.Collections.Generic.IEnumerator`1<System.WeakReference>
struct IEnumerator_1_t6132;
// System.Collections.Generic.IList`1<System.WeakReference>
struct IList_1_t1329;

// System.Void System.Collections.ObjectModel.Collection`1<System.WeakReference>::.ctor()
// System.Collections.ObjectModel.Collection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_genMethodDeclarations.h"
#define Collection_1__ctor_m30759(__this, method) (void)Collection_1__ctor_m15533_gshared((Collection_1_t4054 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.WeakReference>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30760(__this, method) (bool)Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15534_gshared((Collection_1_t4054 *)__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.WeakReference>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Collection_1_System_Collections_ICollection_CopyTo_m30761(__this, ___array, ___index, method) (void)Collection_1_System_Collections_ICollection_CopyTo_m15535_gshared((Collection_1_t4054 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.WeakReference>::System.Collections.IEnumerable.GetEnumerator()
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m30762(__this, method) (Object_t *)Collection_1_System_Collections_IEnumerable_GetEnumerator_m15536_gshared((Collection_1_t4054 *)__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.WeakReference>::System.Collections.IList.Add(System.Object)
#define Collection_1_System_Collections_IList_Add_m30763(__this, ___value, method) (int32_t)Collection_1_System_Collections_IList_Add_m15537_gshared((Collection_1_t4054 *)__this, (Object_t *)___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.WeakReference>::System.Collections.IList.Contains(System.Object)
#define Collection_1_System_Collections_IList_Contains_m30764(__this, ___value, method) (bool)Collection_1_System_Collections_IList_Contains_m15538_gshared((Collection_1_t4054 *)__this, (Object_t *)___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.WeakReference>::System.Collections.IList.IndexOf(System.Object)
#define Collection_1_System_Collections_IList_IndexOf_m30765(__this, ___value, method) (int32_t)Collection_1_System_Collections_IList_IndexOf_m15539_gshared((Collection_1_t4054 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.WeakReference>::System.Collections.IList.Insert(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_Insert_m30766(__this, ___index, ___value, method) (void)Collection_1_System_Collections_IList_Insert_m15540_gshared((Collection_1_t4054 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.WeakReference>::System.Collections.IList.Remove(System.Object)
#define Collection_1_System_Collections_IList_Remove_m30767(__this, ___value, method) (void)Collection_1_System_Collections_IList_Remove_m15541_gshared((Collection_1_t4054 *)__this, (Object_t *)___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.WeakReference>::System.Collections.ICollection.get_IsSynchronized()
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m30768(__this, method) (bool)Collection_1_System_Collections_ICollection_get_IsSynchronized_m15542_gshared((Collection_1_t4054 *)__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.WeakReference>::System.Collections.ICollection.get_SyncRoot()
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m30769(__this, method) (Object_t *)Collection_1_System_Collections_ICollection_get_SyncRoot_m15543_gshared((Collection_1_t4054 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.WeakReference>::System.Collections.IList.get_IsFixedSize()
#define Collection_1_System_Collections_IList_get_IsFixedSize_m30770(__this, method) (bool)Collection_1_System_Collections_IList_get_IsFixedSize_m15544_gshared((Collection_1_t4054 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.WeakReference>::System.Collections.IList.get_IsReadOnly()
#define Collection_1_System_Collections_IList_get_IsReadOnly_m30771(__this, method) (bool)Collection_1_System_Collections_IList_get_IsReadOnly_m15545_gshared((Collection_1_t4054 *)__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.WeakReference>::System.Collections.IList.get_Item(System.Int32)
#define Collection_1_System_Collections_IList_get_Item_m30772(__this, ___index, method) (Object_t *)Collection_1_System_Collections_IList_get_Item_m15546_gshared((Collection_1_t4054 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.WeakReference>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_set_Item_m30773(__this, ___index, ___value, method) (void)Collection_1_System_Collections_IList_set_Item_m15547_gshared((Collection_1_t4054 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.WeakReference>::Add(T)
#define Collection_1_Add_m30774(__this, ___item, method) (void)Collection_1_Add_m15548_gshared((Collection_1_t4054 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.WeakReference>::Clear()
#define Collection_1_Clear_m30775(__this, method) (void)Collection_1_Clear_m15549_gshared((Collection_1_t4054 *)__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.WeakReference>::ClearItems()
#define Collection_1_ClearItems_m30776(__this, method) (void)Collection_1_ClearItems_m15550_gshared((Collection_1_t4054 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.WeakReference>::Contains(T)
#define Collection_1_Contains_m30777(__this, ___item, method) (bool)Collection_1_Contains_m15551_gshared((Collection_1_t4054 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.WeakReference>::CopyTo(T[],System.Int32)
#define Collection_1_CopyTo_m30778(__this, ___array, ___index, method) (void)Collection_1_CopyTo_m15552_gshared((Collection_1_t4054 *)__this, (ObjectU5BU5D_t5*)___array, (int32_t)___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.WeakReference>::GetEnumerator()
#define Collection_1_GetEnumerator_m30779(__this, method) (Object_t*)Collection_1_GetEnumerator_m15553_gshared((Collection_1_t4054 *)__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.WeakReference>::IndexOf(T)
#define Collection_1_IndexOf_m30780(__this, ___item, method) (int32_t)Collection_1_IndexOf_m15554_gshared((Collection_1_t4054 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.WeakReference>::Insert(System.Int32,T)
#define Collection_1_Insert_m30781(__this, ___index, ___item, method) (void)Collection_1_Insert_m15555_gshared((Collection_1_t4054 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.WeakReference>::InsertItem(System.Int32,T)
#define Collection_1_InsertItem_m30782(__this, ___index, ___item, method) (void)Collection_1_InsertItem_m15556_gshared((Collection_1_t4054 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.WeakReference>::Remove(T)
#define Collection_1_Remove_m30783(__this, ___item, method) (bool)Collection_1_Remove_m15557_gshared((Collection_1_t4054 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.WeakReference>::RemoveAt(System.Int32)
#define Collection_1_RemoveAt_m30784(__this, ___index, method) (void)Collection_1_RemoveAt_m15558_gshared((Collection_1_t4054 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.WeakReference>::RemoveItem(System.Int32)
#define Collection_1_RemoveItem_m30785(__this, ___index, method) (void)Collection_1_RemoveItem_m15559_gshared((Collection_1_t4054 *)__this, (int32_t)___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.WeakReference>::get_Count()
#define Collection_1_get_Count_m30786(__this, method) (int32_t)Collection_1_get_Count_m15560_gshared((Collection_1_t4054 *)__this, method)
// T System.Collections.ObjectModel.Collection`1<System.WeakReference>::get_Item(System.Int32)
#define Collection_1_get_Item_m30787(__this, ___index, method) (WeakReference_t983 *)Collection_1_get_Item_m15561_gshared((Collection_1_t4054 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.WeakReference>::set_Item(System.Int32,T)
#define Collection_1_set_Item_m30788(__this, ___index, ___value, method) (void)Collection_1_set_Item_m15562_gshared((Collection_1_t4054 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.WeakReference>::SetItem(System.Int32,T)
#define Collection_1_SetItem_m30789(__this, ___index, ___item, method) (void)Collection_1_SetItem_m15563_gshared((Collection_1_t4054 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.WeakReference>::IsValidItem(System.Object)
#define Collection_1_IsValidItem_m30790(__this/* static, unused */, ___item, method) (bool)Collection_1_IsValidItem_m15564_gshared((Object_t *)__this/* static, unused */, (Object_t *)___item, method)
// T System.Collections.ObjectModel.Collection`1<System.WeakReference>::ConvertItem(System.Object)
#define Collection_1_ConvertItem_m30791(__this/* static, unused */, ___item, method) (WeakReference_t983 *)Collection_1_ConvertItem_m15565_gshared((Object_t *)__this/* static, unused */, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.WeakReference>::CheckWritable(System.Collections.Generic.IList`1<T>)
#define Collection_1_CheckWritable_m30792(__this/* static, unused */, ___list, method) (void)Collection_1_CheckWritable_m15566_gshared((Object_t *)__this/* static, unused */, (Object_t*)___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.WeakReference>::IsSynchronized(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsSynchronized_m30793(__this/* static, unused */, ___list, method) (bool)Collection_1_IsSynchronized_m15567_gshared((Object_t *)__this/* static, unused */, (Object_t*)___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.WeakReference>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsFixedSize_m30794(__this/* static, unused */, ___list, method) (bool)Collection_1_IsFixedSize_m15568_gshared((Object_t *)__this/* static, unused */, (Object_t*)___list, method)
