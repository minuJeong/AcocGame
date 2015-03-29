#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.MemberBinding>
struct Collection_1_t11929;
// System.Object
struct Object_t;
// System.Linq.Expressions.MemberBinding
struct MemberBinding_t2893;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Linq.Expressions.MemberBinding[]
struct MemberBindingU5BU5D_t11926;
// System.Collections.Generic.IEnumerator`1<System.Linq.Expressions.MemberBinding>
struct IEnumerator_1_t11927;
// System.Collections.Generic.IList`1<System.Linq.Expressions.MemberBinding>
struct IList_1_t11925;

// System.Void System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.MemberBinding>::.ctor()
// System.Collections.ObjectModel.Collection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_genMethodDeclarations.h"
#define Collection_1__ctor_m87894(__this, method) (void)Collection_1__ctor_m15536_gshared((Collection_1_t4055 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.MemberBinding>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m87895(__this, method) (bool)Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15537_gshared((Collection_1_t4055 *)__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.MemberBinding>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Collection_1_System_Collections_ICollection_CopyTo_m87896(__this, ___array, ___index, method) (void)Collection_1_System_Collections_ICollection_CopyTo_m15538_gshared((Collection_1_t4055 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.MemberBinding>::System.Collections.IEnumerable.GetEnumerator()
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m87897(__this, method) (Object_t *)Collection_1_System_Collections_IEnumerable_GetEnumerator_m15539_gshared((Collection_1_t4055 *)__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.MemberBinding>::System.Collections.IList.Add(System.Object)
#define Collection_1_System_Collections_IList_Add_m87898(__this, ___value, method) (int32_t)Collection_1_System_Collections_IList_Add_m15540_gshared((Collection_1_t4055 *)__this, (Object_t *)___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.MemberBinding>::System.Collections.IList.Contains(System.Object)
#define Collection_1_System_Collections_IList_Contains_m87899(__this, ___value, method) (bool)Collection_1_System_Collections_IList_Contains_m15541_gshared((Collection_1_t4055 *)__this, (Object_t *)___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.MemberBinding>::System.Collections.IList.IndexOf(System.Object)
#define Collection_1_System_Collections_IList_IndexOf_m87900(__this, ___value, method) (int32_t)Collection_1_System_Collections_IList_IndexOf_m15542_gshared((Collection_1_t4055 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.MemberBinding>::System.Collections.IList.Insert(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_Insert_m87901(__this, ___index, ___value, method) (void)Collection_1_System_Collections_IList_Insert_m15543_gshared((Collection_1_t4055 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.MemberBinding>::System.Collections.IList.Remove(System.Object)
#define Collection_1_System_Collections_IList_Remove_m87902(__this, ___value, method) (void)Collection_1_System_Collections_IList_Remove_m15544_gshared((Collection_1_t4055 *)__this, (Object_t *)___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.MemberBinding>::System.Collections.ICollection.get_IsSynchronized()
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m87903(__this, method) (bool)Collection_1_System_Collections_ICollection_get_IsSynchronized_m15545_gshared((Collection_1_t4055 *)__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.MemberBinding>::System.Collections.ICollection.get_SyncRoot()
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m87904(__this, method) (Object_t *)Collection_1_System_Collections_ICollection_get_SyncRoot_m15546_gshared((Collection_1_t4055 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.MemberBinding>::System.Collections.IList.get_IsFixedSize()
#define Collection_1_System_Collections_IList_get_IsFixedSize_m87905(__this, method) (bool)Collection_1_System_Collections_IList_get_IsFixedSize_m15547_gshared((Collection_1_t4055 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.MemberBinding>::System.Collections.IList.get_IsReadOnly()
#define Collection_1_System_Collections_IList_get_IsReadOnly_m87906(__this, method) (bool)Collection_1_System_Collections_IList_get_IsReadOnly_m15548_gshared((Collection_1_t4055 *)__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.MemberBinding>::System.Collections.IList.get_Item(System.Int32)
#define Collection_1_System_Collections_IList_get_Item_m87907(__this, ___index, method) (Object_t *)Collection_1_System_Collections_IList_get_Item_m15549_gshared((Collection_1_t4055 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.MemberBinding>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_set_Item_m87908(__this, ___index, ___value, method) (void)Collection_1_System_Collections_IList_set_Item_m15550_gshared((Collection_1_t4055 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.MemberBinding>::Add(T)
#define Collection_1_Add_m87909(__this, ___item, method) (void)Collection_1_Add_m15551_gshared((Collection_1_t4055 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.MemberBinding>::Clear()
#define Collection_1_Clear_m87910(__this, method) (void)Collection_1_Clear_m15552_gshared((Collection_1_t4055 *)__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.MemberBinding>::ClearItems()
#define Collection_1_ClearItems_m87911(__this, method) (void)Collection_1_ClearItems_m15553_gshared((Collection_1_t4055 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.MemberBinding>::Contains(T)
#define Collection_1_Contains_m87912(__this, ___item, method) (bool)Collection_1_Contains_m15554_gshared((Collection_1_t4055 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.MemberBinding>::CopyTo(T[],System.Int32)
#define Collection_1_CopyTo_m87913(__this, ___array, ___index, method) (void)Collection_1_CopyTo_m15555_gshared((Collection_1_t4055 *)__this, (ObjectU5BU5D_t5*)___array, (int32_t)___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.MemberBinding>::GetEnumerator()
#define Collection_1_GetEnumerator_m87914(__this, method) (Object_t*)Collection_1_GetEnumerator_m15556_gshared((Collection_1_t4055 *)__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.MemberBinding>::IndexOf(T)
#define Collection_1_IndexOf_m87915(__this, ___item, method) (int32_t)Collection_1_IndexOf_m15557_gshared((Collection_1_t4055 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.MemberBinding>::Insert(System.Int32,T)
#define Collection_1_Insert_m87916(__this, ___index, ___item, method) (void)Collection_1_Insert_m15558_gshared((Collection_1_t4055 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.MemberBinding>::InsertItem(System.Int32,T)
#define Collection_1_InsertItem_m87917(__this, ___index, ___item, method) (void)Collection_1_InsertItem_m15559_gshared((Collection_1_t4055 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.MemberBinding>::Remove(T)
#define Collection_1_Remove_m87918(__this, ___item, method) (bool)Collection_1_Remove_m15560_gshared((Collection_1_t4055 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.MemberBinding>::RemoveAt(System.Int32)
#define Collection_1_RemoveAt_m87919(__this, ___index, method) (void)Collection_1_RemoveAt_m15561_gshared((Collection_1_t4055 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.MemberBinding>::RemoveItem(System.Int32)
#define Collection_1_RemoveItem_m87920(__this, ___index, method) (void)Collection_1_RemoveItem_m15562_gshared((Collection_1_t4055 *)__this, (int32_t)___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.MemberBinding>::get_Count()
#define Collection_1_get_Count_m87921(__this, method) (int32_t)Collection_1_get_Count_m15563_gshared((Collection_1_t4055 *)__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.MemberBinding>::get_Item(System.Int32)
#define Collection_1_get_Item_m87922(__this, ___index, method) (MemberBinding_t2893 *)Collection_1_get_Item_m15564_gshared((Collection_1_t4055 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.MemberBinding>::set_Item(System.Int32,T)
#define Collection_1_set_Item_m87923(__this, ___index, ___value, method) (void)Collection_1_set_Item_m15565_gshared((Collection_1_t4055 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.MemberBinding>::SetItem(System.Int32,T)
#define Collection_1_SetItem_m87924(__this, ___index, ___item, method) (void)Collection_1_SetItem_m15566_gshared((Collection_1_t4055 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.MemberBinding>::IsValidItem(System.Object)
#define Collection_1_IsValidItem_m87925(__this/* static, unused */, ___item, method) (bool)Collection_1_IsValidItem_m15567_gshared((Object_t *)__this/* static, unused */, (Object_t *)___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.MemberBinding>::ConvertItem(System.Object)
#define Collection_1_ConvertItem_m87926(__this/* static, unused */, ___item, method) (MemberBinding_t2893 *)Collection_1_ConvertItem_m15568_gshared((Object_t *)__this/* static, unused */, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.MemberBinding>::CheckWritable(System.Collections.Generic.IList`1<T>)
#define Collection_1_CheckWritable_m87927(__this/* static, unused */, ___list, method) (void)Collection_1_CheckWritable_m15569_gshared((Object_t *)__this/* static, unused */, (Object_t*)___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.MemberBinding>::IsSynchronized(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsSynchronized_m87928(__this/* static, unused */, ___list, method) (bool)Collection_1_IsSynchronized_m15570_gshared((Object_t *)__this/* static, unused */, (Object_t*)___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.MemberBinding>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsFixedSize_m87929(__this/* static, unused */, ___list, method) (bool)Collection_1_IsFixedSize_m15571_gshared((Object_t *)__this/* static, unused */, (Object_t*)___list, method)
