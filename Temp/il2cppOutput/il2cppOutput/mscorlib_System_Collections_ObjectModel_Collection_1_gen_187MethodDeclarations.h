#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<ExitGames.Client.Photon.NCommand>
struct Collection_1_t11386;
// System.Object
struct Object_t;
// ExitGames.Client.Photon.NCommand
struct NCommand_t2353;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// ExitGames.Client.Photon.NCommand[]
struct NCommandU5BU5D_t2370;
// System.Collections.Generic.IEnumerator`1<ExitGames.Client.Photon.NCommand>
struct IEnumerator_1_t11345;
// System.Collections.Generic.IList`1<ExitGames.Client.Photon.NCommand>
struct IList_1_t11385;

// System.Void System.Collections.ObjectModel.Collection`1<ExitGames.Client.Photon.NCommand>::.ctor()
// System.Collections.ObjectModel.Collection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_genMethodDeclarations.h"
#define Collection_1__ctor_m83969(__this, method) (void)Collection_1__ctor_m15536_gshared((Collection_1_t4055 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<ExitGames.Client.Photon.NCommand>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m83970(__this, method) (bool)Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15537_gshared((Collection_1_t4055 *)__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<ExitGames.Client.Photon.NCommand>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Collection_1_System_Collections_ICollection_CopyTo_m83971(__this, ___array, ___index, method) (void)Collection_1_System_Collections_ICollection_CopyTo_m15538_gshared((Collection_1_t4055 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<ExitGames.Client.Photon.NCommand>::System.Collections.IEnumerable.GetEnumerator()
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m83972(__this, method) (Object_t *)Collection_1_System_Collections_IEnumerable_GetEnumerator_m15539_gshared((Collection_1_t4055 *)__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<ExitGames.Client.Photon.NCommand>::System.Collections.IList.Add(System.Object)
#define Collection_1_System_Collections_IList_Add_m83973(__this, ___value, method) (int32_t)Collection_1_System_Collections_IList_Add_m15540_gshared((Collection_1_t4055 *)__this, (Object_t *)___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<ExitGames.Client.Photon.NCommand>::System.Collections.IList.Contains(System.Object)
#define Collection_1_System_Collections_IList_Contains_m83974(__this, ___value, method) (bool)Collection_1_System_Collections_IList_Contains_m15541_gshared((Collection_1_t4055 *)__this, (Object_t *)___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<ExitGames.Client.Photon.NCommand>::System.Collections.IList.IndexOf(System.Object)
#define Collection_1_System_Collections_IList_IndexOf_m83975(__this, ___value, method) (int32_t)Collection_1_System_Collections_IList_IndexOf_m15542_gshared((Collection_1_t4055 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<ExitGames.Client.Photon.NCommand>::System.Collections.IList.Insert(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_Insert_m83976(__this, ___index, ___value, method) (void)Collection_1_System_Collections_IList_Insert_m15543_gshared((Collection_1_t4055 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<ExitGames.Client.Photon.NCommand>::System.Collections.IList.Remove(System.Object)
#define Collection_1_System_Collections_IList_Remove_m83977(__this, ___value, method) (void)Collection_1_System_Collections_IList_Remove_m15544_gshared((Collection_1_t4055 *)__this, (Object_t *)___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<ExitGames.Client.Photon.NCommand>::System.Collections.ICollection.get_IsSynchronized()
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m83978(__this, method) (bool)Collection_1_System_Collections_ICollection_get_IsSynchronized_m15545_gshared((Collection_1_t4055 *)__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<ExitGames.Client.Photon.NCommand>::System.Collections.ICollection.get_SyncRoot()
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m83979(__this, method) (Object_t *)Collection_1_System_Collections_ICollection_get_SyncRoot_m15546_gshared((Collection_1_t4055 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<ExitGames.Client.Photon.NCommand>::System.Collections.IList.get_IsFixedSize()
#define Collection_1_System_Collections_IList_get_IsFixedSize_m83980(__this, method) (bool)Collection_1_System_Collections_IList_get_IsFixedSize_m15547_gshared((Collection_1_t4055 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<ExitGames.Client.Photon.NCommand>::System.Collections.IList.get_IsReadOnly()
#define Collection_1_System_Collections_IList_get_IsReadOnly_m83981(__this, method) (bool)Collection_1_System_Collections_IList_get_IsReadOnly_m15548_gshared((Collection_1_t4055 *)__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<ExitGames.Client.Photon.NCommand>::System.Collections.IList.get_Item(System.Int32)
#define Collection_1_System_Collections_IList_get_Item_m83982(__this, ___index, method) (Object_t *)Collection_1_System_Collections_IList_get_Item_m15549_gshared((Collection_1_t4055 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<ExitGames.Client.Photon.NCommand>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_set_Item_m83983(__this, ___index, ___value, method) (void)Collection_1_System_Collections_IList_set_Item_m15550_gshared((Collection_1_t4055 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<ExitGames.Client.Photon.NCommand>::Add(T)
#define Collection_1_Add_m83984(__this, ___item, method) (void)Collection_1_Add_m15551_gshared((Collection_1_t4055 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<ExitGames.Client.Photon.NCommand>::Clear()
#define Collection_1_Clear_m83985(__this, method) (void)Collection_1_Clear_m15552_gshared((Collection_1_t4055 *)__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<ExitGames.Client.Photon.NCommand>::ClearItems()
#define Collection_1_ClearItems_m83986(__this, method) (void)Collection_1_ClearItems_m15553_gshared((Collection_1_t4055 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<ExitGames.Client.Photon.NCommand>::Contains(T)
#define Collection_1_Contains_m83987(__this, ___item, method) (bool)Collection_1_Contains_m15554_gshared((Collection_1_t4055 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<ExitGames.Client.Photon.NCommand>::CopyTo(T[],System.Int32)
#define Collection_1_CopyTo_m83988(__this, ___array, ___index, method) (void)Collection_1_CopyTo_m15555_gshared((Collection_1_t4055 *)__this, (ObjectU5BU5D_t5*)___array, (int32_t)___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<ExitGames.Client.Photon.NCommand>::GetEnumerator()
#define Collection_1_GetEnumerator_m83989(__this, method) (Object_t*)Collection_1_GetEnumerator_m15556_gshared((Collection_1_t4055 *)__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<ExitGames.Client.Photon.NCommand>::IndexOf(T)
#define Collection_1_IndexOf_m83990(__this, ___item, method) (int32_t)Collection_1_IndexOf_m15557_gshared((Collection_1_t4055 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<ExitGames.Client.Photon.NCommand>::Insert(System.Int32,T)
#define Collection_1_Insert_m83991(__this, ___index, ___item, method) (void)Collection_1_Insert_m15558_gshared((Collection_1_t4055 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<ExitGames.Client.Photon.NCommand>::InsertItem(System.Int32,T)
#define Collection_1_InsertItem_m83992(__this, ___index, ___item, method) (void)Collection_1_InsertItem_m15559_gshared((Collection_1_t4055 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<ExitGames.Client.Photon.NCommand>::Remove(T)
#define Collection_1_Remove_m83993(__this, ___item, method) (bool)Collection_1_Remove_m15560_gshared((Collection_1_t4055 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<ExitGames.Client.Photon.NCommand>::RemoveAt(System.Int32)
#define Collection_1_RemoveAt_m83994(__this, ___index, method) (void)Collection_1_RemoveAt_m15561_gshared((Collection_1_t4055 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<ExitGames.Client.Photon.NCommand>::RemoveItem(System.Int32)
#define Collection_1_RemoveItem_m83995(__this, ___index, method) (void)Collection_1_RemoveItem_m15562_gshared((Collection_1_t4055 *)__this, (int32_t)___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<ExitGames.Client.Photon.NCommand>::get_Count()
#define Collection_1_get_Count_m83996(__this, method) (int32_t)Collection_1_get_Count_m15563_gshared((Collection_1_t4055 *)__this, method)
// T System.Collections.ObjectModel.Collection`1<ExitGames.Client.Photon.NCommand>::get_Item(System.Int32)
#define Collection_1_get_Item_m83997(__this, ___index, method) (NCommand_t2353 *)Collection_1_get_Item_m15564_gshared((Collection_1_t4055 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<ExitGames.Client.Photon.NCommand>::set_Item(System.Int32,T)
#define Collection_1_set_Item_m83998(__this, ___index, ___value, method) (void)Collection_1_set_Item_m15565_gshared((Collection_1_t4055 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<ExitGames.Client.Photon.NCommand>::SetItem(System.Int32,T)
#define Collection_1_SetItem_m83999(__this, ___index, ___item, method) (void)Collection_1_SetItem_m15566_gshared((Collection_1_t4055 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<ExitGames.Client.Photon.NCommand>::IsValidItem(System.Object)
#define Collection_1_IsValidItem_m84000(__this/* static, unused */, ___item, method) (bool)Collection_1_IsValidItem_m15567_gshared((Object_t *)__this/* static, unused */, (Object_t *)___item, method)
// T System.Collections.ObjectModel.Collection`1<ExitGames.Client.Photon.NCommand>::ConvertItem(System.Object)
#define Collection_1_ConvertItem_m84001(__this/* static, unused */, ___item, method) (NCommand_t2353 *)Collection_1_ConvertItem_m15568_gshared((Object_t *)__this/* static, unused */, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<ExitGames.Client.Photon.NCommand>::CheckWritable(System.Collections.Generic.IList`1<T>)
#define Collection_1_CheckWritable_m84002(__this/* static, unused */, ___list, method) (void)Collection_1_CheckWritable_m15569_gshared((Object_t *)__this/* static, unused */, (Object_t*)___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<ExitGames.Client.Photon.NCommand>::IsSynchronized(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsSynchronized_m84003(__this/* static, unused */, ___list, method) (bool)Collection_1_IsSynchronized_m15570_gshared((Object_t *)__this/* static, unused */, (Object_t*)___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<ExitGames.Client.Photon.NCommand>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsFixedSize_m84004(__this/* static, unused */, ___list, method) (bool)Collection_1_IsFixedSize_m15571_gshared((Object_t *)__this/* static, unused */, (Object_t*)___list, method)
