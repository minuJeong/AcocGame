#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Type>
struct Collection_1_t11777;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Type[]
struct TypeU5BU5D_t291;
// System.Collections.Generic.IEnumerator`1<System.Type>
struct IEnumerator_1_t4711;
// System.Collections.Generic.IList`1<System.Type>
struct IList_1_t11776;

// System.Void System.Collections.ObjectModel.Collection`1<System.Type>::.ctor()
// System.Collections.ObjectModel.Collection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_genMethodDeclarations.h"
#define Collection_1__ctor_m86670(__this, method) (void)Collection_1__ctor_m15536_gshared((Collection_1_t4055 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Type>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m86671(__this, method) (bool)Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15537_gshared((Collection_1_t4055 *)__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Type>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Collection_1_System_Collections_ICollection_CopyTo_m86672(__this, ___array, ___index, method) (void)Collection_1_System_Collections_ICollection_CopyTo_m15538_gshared((Collection_1_t4055 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Type>::System.Collections.IEnumerable.GetEnumerator()
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m86673(__this, method) (Object_t *)Collection_1_System_Collections_IEnumerable_GetEnumerator_m15539_gshared((Collection_1_t4055 *)__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Type>::System.Collections.IList.Add(System.Object)
#define Collection_1_System_Collections_IList_Add_m86674(__this, ___value, method) (int32_t)Collection_1_System_Collections_IList_Add_m15540_gshared((Collection_1_t4055 *)__this, (Object_t *)___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Type>::System.Collections.IList.Contains(System.Object)
#define Collection_1_System_Collections_IList_Contains_m86675(__this, ___value, method) (bool)Collection_1_System_Collections_IList_Contains_m15541_gshared((Collection_1_t4055 *)__this, (Object_t *)___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Type>::System.Collections.IList.IndexOf(System.Object)
#define Collection_1_System_Collections_IList_IndexOf_m86676(__this, ___value, method) (int32_t)Collection_1_System_Collections_IList_IndexOf_m15542_gshared((Collection_1_t4055 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Type>::System.Collections.IList.Insert(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_Insert_m86677(__this, ___index, ___value, method) (void)Collection_1_System_Collections_IList_Insert_m15543_gshared((Collection_1_t4055 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Type>::System.Collections.IList.Remove(System.Object)
#define Collection_1_System_Collections_IList_Remove_m86678(__this, ___value, method) (void)Collection_1_System_Collections_IList_Remove_m15544_gshared((Collection_1_t4055 *)__this, (Object_t *)___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Type>::System.Collections.ICollection.get_IsSynchronized()
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m86679(__this, method) (bool)Collection_1_System_Collections_ICollection_get_IsSynchronized_m15545_gshared((Collection_1_t4055 *)__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Type>::System.Collections.ICollection.get_SyncRoot()
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m86680(__this, method) (Object_t *)Collection_1_System_Collections_ICollection_get_SyncRoot_m15546_gshared((Collection_1_t4055 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Type>::System.Collections.IList.get_IsFixedSize()
#define Collection_1_System_Collections_IList_get_IsFixedSize_m86681(__this, method) (bool)Collection_1_System_Collections_IList_get_IsFixedSize_m15547_gshared((Collection_1_t4055 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Type>::System.Collections.IList.get_IsReadOnly()
#define Collection_1_System_Collections_IList_get_IsReadOnly_m86682(__this, method) (bool)Collection_1_System_Collections_IList_get_IsReadOnly_m15548_gshared((Collection_1_t4055 *)__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Type>::System.Collections.IList.get_Item(System.Int32)
#define Collection_1_System_Collections_IList_get_Item_m86683(__this, ___index, method) (Object_t *)Collection_1_System_Collections_IList_get_Item_m15549_gshared((Collection_1_t4055 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Type>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_set_Item_m86684(__this, ___index, ___value, method) (void)Collection_1_System_Collections_IList_set_Item_m15550_gshared((Collection_1_t4055 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Type>::Add(T)
#define Collection_1_Add_m86685(__this, ___item, method) (void)Collection_1_Add_m15551_gshared((Collection_1_t4055 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Type>::Clear()
#define Collection_1_Clear_m86686(__this, method) (void)Collection_1_Clear_m15552_gshared((Collection_1_t4055 *)__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Type>::ClearItems()
#define Collection_1_ClearItems_m86687(__this, method) (void)Collection_1_ClearItems_m15553_gshared((Collection_1_t4055 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Type>::Contains(T)
#define Collection_1_Contains_m86688(__this, ___item, method) (bool)Collection_1_Contains_m15554_gshared((Collection_1_t4055 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Type>::CopyTo(T[],System.Int32)
#define Collection_1_CopyTo_m86689(__this, ___array, ___index, method) (void)Collection_1_CopyTo_m15555_gshared((Collection_1_t4055 *)__this, (ObjectU5BU5D_t5*)___array, (int32_t)___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Type>::GetEnumerator()
#define Collection_1_GetEnumerator_m86690(__this, method) (Object_t*)Collection_1_GetEnumerator_m15556_gshared((Collection_1_t4055 *)__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Type>::IndexOf(T)
#define Collection_1_IndexOf_m86691(__this, ___item, method) (int32_t)Collection_1_IndexOf_m15557_gshared((Collection_1_t4055 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Type>::Insert(System.Int32,T)
#define Collection_1_Insert_m86692(__this, ___index, ___item, method) (void)Collection_1_Insert_m15558_gshared((Collection_1_t4055 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Type>::InsertItem(System.Int32,T)
#define Collection_1_InsertItem_m86693(__this, ___index, ___item, method) (void)Collection_1_InsertItem_m15559_gshared((Collection_1_t4055 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Type>::Remove(T)
#define Collection_1_Remove_m86694(__this, ___item, method) (bool)Collection_1_Remove_m15560_gshared((Collection_1_t4055 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Type>::RemoveAt(System.Int32)
#define Collection_1_RemoveAt_m86695(__this, ___index, method) (void)Collection_1_RemoveAt_m15561_gshared((Collection_1_t4055 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Type>::RemoveItem(System.Int32)
#define Collection_1_RemoveItem_m86696(__this, ___index, method) (void)Collection_1_RemoveItem_m15562_gshared((Collection_1_t4055 *)__this, (int32_t)___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Type>::get_Count()
#define Collection_1_get_Count_m86697(__this, method) (int32_t)Collection_1_get_Count_m15563_gshared((Collection_1_t4055 *)__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Type>::get_Item(System.Int32)
#define Collection_1_get_Item_m86698(__this, ___index, method) (Type_t *)Collection_1_get_Item_m15564_gshared((Collection_1_t4055 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Type>::set_Item(System.Int32,T)
#define Collection_1_set_Item_m86699(__this, ___index, ___value, method) (void)Collection_1_set_Item_m15565_gshared((Collection_1_t4055 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Type>::SetItem(System.Int32,T)
#define Collection_1_SetItem_m86700(__this, ___index, ___item, method) (void)Collection_1_SetItem_m15566_gshared((Collection_1_t4055 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Type>::IsValidItem(System.Object)
#define Collection_1_IsValidItem_m86701(__this/* static, unused */, ___item, method) (bool)Collection_1_IsValidItem_m15567_gshared((Object_t *)__this/* static, unused */, (Object_t *)___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Type>::ConvertItem(System.Object)
#define Collection_1_ConvertItem_m86702(__this/* static, unused */, ___item, method) (Type_t *)Collection_1_ConvertItem_m15568_gshared((Object_t *)__this/* static, unused */, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Type>::CheckWritable(System.Collections.Generic.IList`1<T>)
#define Collection_1_CheckWritable_m86703(__this/* static, unused */, ___list, method) (void)Collection_1_CheckWritable_m15569_gshared((Object_t *)__this/* static, unused */, (Object_t*)___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Type>::IsSynchronized(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsSynchronized_m86704(__this/* static, unused */, ___list, method) (bool)Collection_1_IsSynchronized_m15570_gshared((Object_t *)__this/* static, unused */, (Object_t*)___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Type>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsFixedSize_m86705(__this/* static, unused */, ___list, method) (bool)Collection_1_IsFixedSize_m15571_gshared((Object_t *)__this/* static, unused */, (Object_t*)___list, method)
