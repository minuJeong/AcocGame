﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Byte[]>
struct Collection_1_t11607;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t21;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t11597;
// System.Collections.Generic.IEnumerator`1<System.Byte[]>
struct IEnumerator_1_t11599;
// System.Collections.Generic.IList`1<System.Byte[]>
struct IList_1_t11606;

// System.Void System.Collections.ObjectModel.Collection`1<System.Byte[]>::.ctor()
// System.Collections.ObjectModel.Collection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_genMethodDeclarations.h"
#define Collection_1__ctor_m85543(__this, method) (void)Collection_1__ctor_m15533_gshared((Collection_1_t4054 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte[]>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m85544(__this, method) (bool)Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15534_gshared((Collection_1_t4054 *)__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte[]>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Collection_1_System_Collections_ICollection_CopyTo_m85545(__this, ___array, ___index, method) (void)Collection_1_System_Collections_ICollection_CopyTo_m15535_gshared((Collection_1_t4054 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Byte[]>::System.Collections.IEnumerable.GetEnumerator()
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m85546(__this, method) (Object_t *)Collection_1_System_Collections_IEnumerable_GetEnumerator_m15536_gshared((Collection_1_t4054 *)__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Byte[]>::System.Collections.IList.Add(System.Object)
#define Collection_1_System_Collections_IList_Add_m85547(__this, ___value, method) (int32_t)Collection_1_System_Collections_IList_Add_m15537_gshared((Collection_1_t4054 *)__this, (Object_t *)___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte[]>::System.Collections.IList.Contains(System.Object)
#define Collection_1_System_Collections_IList_Contains_m85548(__this, ___value, method) (bool)Collection_1_System_Collections_IList_Contains_m15538_gshared((Collection_1_t4054 *)__this, (Object_t *)___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Byte[]>::System.Collections.IList.IndexOf(System.Object)
#define Collection_1_System_Collections_IList_IndexOf_m85549(__this, ___value, method) (int32_t)Collection_1_System_Collections_IList_IndexOf_m15539_gshared((Collection_1_t4054 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte[]>::System.Collections.IList.Insert(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_Insert_m85550(__this, ___index, ___value, method) (void)Collection_1_System_Collections_IList_Insert_m15540_gshared((Collection_1_t4054 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte[]>::System.Collections.IList.Remove(System.Object)
#define Collection_1_System_Collections_IList_Remove_m85551(__this, ___value, method) (void)Collection_1_System_Collections_IList_Remove_m15541_gshared((Collection_1_t4054 *)__this, (Object_t *)___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte[]>::System.Collections.ICollection.get_IsSynchronized()
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m85552(__this, method) (bool)Collection_1_System_Collections_ICollection_get_IsSynchronized_m15542_gshared((Collection_1_t4054 *)__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Byte[]>::System.Collections.ICollection.get_SyncRoot()
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m85553(__this, method) (Object_t *)Collection_1_System_Collections_ICollection_get_SyncRoot_m15543_gshared((Collection_1_t4054 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte[]>::System.Collections.IList.get_IsFixedSize()
#define Collection_1_System_Collections_IList_get_IsFixedSize_m85554(__this, method) (bool)Collection_1_System_Collections_IList_get_IsFixedSize_m15544_gshared((Collection_1_t4054 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte[]>::System.Collections.IList.get_IsReadOnly()
#define Collection_1_System_Collections_IList_get_IsReadOnly_m85555(__this, method) (bool)Collection_1_System_Collections_IList_get_IsReadOnly_m15545_gshared((Collection_1_t4054 *)__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Byte[]>::System.Collections.IList.get_Item(System.Int32)
#define Collection_1_System_Collections_IList_get_Item_m85556(__this, ___index, method) (Object_t *)Collection_1_System_Collections_IList_get_Item_m15546_gshared((Collection_1_t4054 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte[]>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_set_Item_m85557(__this, ___index, ___value, method) (void)Collection_1_System_Collections_IList_set_Item_m15547_gshared((Collection_1_t4054 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte[]>::Add(T)
#define Collection_1_Add_m85558(__this, ___item, method) (void)Collection_1_Add_m15548_gshared((Collection_1_t4054 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte[]>::Clear()
#define Collection_1_Clear_m85559(__this, method) (void)Collection_1_Clear_m15549_gshared((Collection_1_t4054 *)__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte[]>::ClearItems()
#define Collection_1_ClearItems_m85560(__this, method) (void)Collection_1_ClearItems_m15550_gshared((Collection_1_t4054 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte[]>::Contains(T)
#define Collection_1_Contains_m85561(__this, ___item, method) (bool)Collection_1_Contains_m15551_gshared((Collection_1_t4054 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte[]>::CopyTo(T[],System.Int32)
#define Collection_1_CopyTo_m85562(__this, ___array, ___index, method) (void)Collection_1_CopyTo_m15552_gshared((Collection_1_t4054 *)__this, (ObjectU5BU5D_t5*)___array, (int32_t)___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Byte[]>::GetEnumerator()
#define Collection_1_GetEnumerator_m85563(__this, method) (Object_t*)Collection_1_GetEnumerator_m15553_gshared((Collection_1_t4054 *)__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Byte[]>::IndexOf(T)
#define Collection_1_IndexOf_m85564(__this, ___item, method) (int32_t)Collection_1_IndexOf_m15554_gshared((Collection_1_t4054 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte[]>::Insert(System.Int32,T)
#define Collection_1_Insert_m85565(__this, ___index, ___item, method) (void)Collection_1_Insert_m15555_gshared((Collection_1_t4054 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte[]>::InsertItem(System.Int32,T)
#define Collection_1_InsertItem_m85566(__this, ___index, ___item, method) (void)Collection_1_InsertItem_m15556_gshared((Collection_1_t4054 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte[]>::Remove(T)
#define Collection_1_Remove_m85567(__this, ___item, method) (bool)Collection_1_Remove_m15557_gshared((Collection_1_t4054 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte[]>::RemoveAt(System.Int32)
#define Collection_1_RemoveAt_m85568(__this, ___index, method) (void)Collection_1_RemoveAt_m15558_gshared((Collection_1_t4054 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte[]>::RemoveItem(System.Int32)
#define Collection_1_RemoveItem_m85569(__this, ___index, method) (void)Collection_1_RemoveItem_m15559_gshared((Collection_1_t4054 *)__this, (int32_t)___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Byte[]>::get_Count()
#define Collection_1_get_Count_m85570(__this, method) (int32_t)Collection_1_get_Count_m15560_gshared((Collection_1_t4054 *)__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Byte[]>::get_Item(System.Int32)
#define Collection_1_get_Item_m85571(__this, ___index, method) (ByteU5BU5D_t21*)Collection_1_get_Item_m15561_gshared((Collection_1_t4054 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte[]>::set_Item(System.Int32,T)
#define Collection_1_set_Item_m85572(__this, ___index, ___value, method) (void)Collection_1_set_Item_m15562_gshared((Collection_1_t4054 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte[]>::SetItem(System.Int32,T)
#define Collection_1_SetItem_m85573(__this, ___index, ___item, method) (void)Collection_1_SetItem_m15563_gshared((Collection_1_t4054 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte[]>::IsValidItem(System.Object)
#define Collection_1_IsValidItem_m85574(__this/* static, unused */, ___item, method) (bool)Collection_1_IsValidItem_m15564_gshared((Object_t *)__this/* static, unused */, (Object_t *)___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Byte[]>::ConvertItem(System.Object)
#define Collection_1_ConvertItem_m85575(__this/* static, unused */, ___item, method) (ByteU5BU5D_t21*)Collection_1_ConvertItem_m15565_gshared((Object_t *)__this/* static, unused */, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte[]>::CheckWritable(System.Collections.Generic.IList`1<T>)
#define Collection_1_CheckWritable_m85576(__this/* static, unused */, ___list, method) (void)Collection_1_CheckWritable_m15566_gshared((Object_t *)__this/* static, unused */, (Object_t*)___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte[]>::IsSynchronized(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsSynchronized_m85577(__this/* static, unused */, ___list, method) (bool)Collection_1_IsSynchronized_m15567_gshared((Object_t *)__this/* static, unused */, (Object_t*)___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte[]>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsFixedSize_m85578(__this/* static, unused */, ___list, method) (bool)Collection_1_IsFixedSize_m15568_gshared((Object_t *)__this/* static, unused */, (Object_t*)___list, method)