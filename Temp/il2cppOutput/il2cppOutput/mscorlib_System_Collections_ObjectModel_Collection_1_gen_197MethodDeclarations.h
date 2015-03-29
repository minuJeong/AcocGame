#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.Expression>
struct Collection_1_t11914;
// System.Object
struct Object_t;
// System.Linq.Expressions.Expression
struct Expression_t1562;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Linq.Expressions.Expression[]
struct ExpressionU5BU5D_t1561;
// System.Collections.Generic.IEnumerator`1<System.Linq.Expressions.Expression>
struct IEnumerator_1_t11913;
// System.Collections.Generic.IList`1<System.Linq.Expressions.Expression>
struct IList_1_t2879;

// System.Void System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.Expression>::.ctor()
// System.Collections.ObjectModel.Collection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_genMethodDeclarations.h"
#define Collection_1__ctor_m87717(__this, method) (void)Collection_1__ctor_m15533_gshared((Collection_1_t4054 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.Expression>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m87718(__this, method) (bool)Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15534_gshared((Collection_1_t4054 *)__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.Expression>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Collection_1_System_Collections_ICollection_CopyTo_m87719(__this, ___array, ___index, method) (void)Collection_1_System_Collections_ICollection_CopyTo_m15535_gshared((Collection_1_t4054 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.Expression>::System.Collections.IEnumerable.GetEnumerator()
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m87720(__this, method) (Object_t *)Collection_1_System_Collections_IEnumerable_GetEnumerator_m15536_gshared((Collection_1_t4054 *)__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.Expression>::System.Collections.IList.Add(System.Object)
#define Collection_1_System_Collections_IList_Add_m87721(__this, ___value, method) (int32_t)Collection_1_System_Collections_IList_Add_m15537_gshared((Collection_1_t4054 *)__this, (Object_t *)___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.Expression>::System.Collections.IList.Contains(System.Object)
#define Collection_1_System_Collections_IList_Contains_m87722(__this, ___value, method) (bool)Collection_1_System_Collections_IList_Contains_m15538_gshared((Collection_1_t4054 *)__this, (Object_t *)___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.Expression>::System.Collections.IList.IndexOf(System.Object)
#define Collection_1_System_Collections_IList_IndexOf_m87723(__this, ___value, method) (int32_t)Collection_1_System_Collections_IList_IndexOf_m15539_gshared((Collection_1_t4054 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.Expression>::System.Collections.IList.Insert(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_Insert_m87724(__this, ___index, ___value, method) (void)Collection_1_System_Collections_IList_Insert_m15540_gshared((Collection_1_t4054 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.Expression>::System.Collections.IList.Remove(System.Object)
#define Collection_1_System_Collections_IList_Remove_m87725(__this, ___value, method) (void)Collection_1_System_Collections_IList_Remove_m15541_gshared((Collection_1_t4054 *)__this, (Object_t *)___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.Expression>::System.Collections.ICollection.get_IsSynchronized()
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m87726(__this, method) (bool)Collection_1_System_Collections_ICollection_get_IsSynchronized_m15542_gshared((Collection_1_t4054 *)__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.Expression>::System.Collections.ICollection.get_SyncRoot()
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m87727(__this, method) (Object_t *)Collection_1_System_Collections_ICollection_get_SyncRoot_m15543_gshared((Collection_1_t4054 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.Expression>::System.Collections.IList.get_IsFixedSize()
#define Collection_1_System_Collections_IList_get_IsFixedSize_m87728(__this, method) (bool)Collection_1_System_Collections_IList_get_IsFixedSize_m15544_gshared((Collection_1_t4054 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.Expression>::System.Collections.IList.get_IsReadOnly()
#define Collection_1_System_Collections_IList_get_IsReadOnly_m87729(__this, method) (bool)Collection_1_System_Collections_IList_get_IsReadOnly_m15545_gshared((Collection_1_t4054 *)__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.Expression>::System.Collections.IList.get_Item(System.Int32)
#define Collection_1_System_Collections_IList_get_Item_m87730(__this, ___index, method) (Object_t *)Collection_1_System_Collections_IList_get_Item_m15546_gshared((Collection_1_t4054 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.Expression>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_set_Item_m87731(__this, ___index, ___value, method) (void)Collection_1_System_Collections_IList_set_Item_m15547_gshared((Collection_1_t4054 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.Expression>::Add(T)
#define Collection_1_Add_m87732(__this, ___item, method) (void)Collection_1_Add_m15548_gshared((Collection_1_t4054 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.Expression>::Clear()
#define Collection_1_Clear_m87733(__this, method) (void)Collection_1_Clear_m15549_gshared((Collection_1_t4054 *)__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.Expression>::ClearItems()
#define Collection_1_ClearItems_m87734(__this, method) (void)Collection_1_ClearItems_m15550_gshared((Collection_1_t4054 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.Expression>::Contains(T)
#define Collection_1_Contains_m87735(__this, ___item, method) (bool)Collection_1_Contains_m15551_gshared((Collection_1_t4054 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.Expression>::CopyTo(T[],System.Int32)
#define Collection_1_CopyTo_m87736(__this, ___array, ___index, method) (void)Collection_1_CopyTo_m15552_gshared((Collection_1_t4054 *)__this, (ObjectU5BU5D_t5*)___array, (int32_t)___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.Expression>::GetEnumerator()
#define Collection_1_GetEnumerator_m87737(__this, method) (Object_t*)Collection_1_GetEnumerator_m15553_gshared((Collection_1_t4054 *)__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.Expression>::IndexOf(T)
#define Collection_1_IndexOf_m87738(__this, ___item, method) (int32_t)Collection_1_IndexOf_m15554_gshared((Collection_1_t4054 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.Expression>::Insert(System.Int32,T)
#define Collection_1_Insert_m87739(__this, ___index, ___item, method) (void)Collection_1_Insert_m15555_gshared((Collection_1_t4054 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.Expression>::InsertItem(System.Int32,T)
#define Collection_1_InsertItem_m87740(__this, ___index, ___item, method) (void)Collection_1_InsertItem_m15556_gshared((Collection_1_t4054 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.Expression>::Remove(T)
#define Collection_1_Remove_m87741(__this, ___item, method) (bool)Collection_1_Remove_m15557_gshared((Collection_1_t4054 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.Expression>::RemoveAt(System.Int32)
#define Collection_1_RemoveAt_m87742(__this, ___index, method) (void)Collection_1_RemoveAt_m15558_gshared((Collection_1_t4054 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.Expression>::RemoveItem(System.Int32)
#define Collection_1_RemoveItem_m87743(__this, ___index, method) (void)Collection_1_RemoveItem_m15559_gshared((Collection_1_t4054 *)__this, (int32_t)___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.Expression>::get_Count()
#define Collection_1_get_Count_m87744(__this, method) (int32_t)Collection_1_get_Count_m15560_gshared((Collection_1_t4054 *)__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.Expression>::get_Item(System.Int32)
#define Collection_1_get_Item_m87745(__this, ___index, method) (Expression_t1562 *)Collection_1_get_Item_m15561_gshared((Collection_1_t4054 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.Expression>::set_Item(System.Int32,T)
#define Collection_1_set_Item_m87746(__this, ___index, ___value, method) (void)Collection_1_set_Item_m15562_gshared((Collection_1_t4054 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.Expression>::SetItem(System.Int32,T)
#define Collection_1_SetItem_m87747(__this, ___index, ___item, method) (void)Collection_1_SetItem_m15563_gshared((Collection_1_t4054 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.Expression>::IsValidItem(System.Object)
#define Collection_1_IsValidItem_m87748(__this/* static, unused */, ___item, method) (bool)Collection_1_IsValidItem_m15564_gshared((Object_t *)__this/* static, unused */, (Object_t *)___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.Expression>::ConvertItem(System.Object)
#define Collection_1_ConvertItem_m87749(__this/* static, unused */, ___item, method) (Expression_t1562 *)Collection_1_ConvertItem_m15565_gshared((Object_t *)__this/* static, unused */, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.Expression>::CheckWritable(System.Collections.Generic.IList`1<T>)
#define Collection_1_CheckWritable_m87750(__this/* static, unused */, ___list, method) (void)Collection_1_CheckWritable_m15566_gshared((Object_t *)__this/* static, unused */, (Object_t*)___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.Expression>::IsSynchronized(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsSynchronized_m87751(__this/* static, unused */, ___list, method) (bool)Collection_1_IsSynchronized_m15567_gshared((Object_t *)__this/* static, unused */, (Object_t*)___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Linq.Expressions.Expression>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsFixedSize_m87752(__this/* static, unused */, ___list, method) (bool)Collection_1_IsFixedSize_m15568_gshared((Object_t *)__this/* static, unused */, (Object_t*)___list, method)
