#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Object>
struct List_1_t2;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t1034;
// System.Object[]
struct ObjectU5BU5D_t5;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t88;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1088;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t1038;
// System.Predicate`1<System.Object>
struct Predicate_1_t4052;
// System.Comparison`1<System.Object>
struct Comparison_1_t4053;
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_1.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
 void List_1__ctor_m360_gshared (List_1_t2 * __this, MethodInfo* method);
#define List_1__ctor_m360(__this, method) (void)List_1__ctor_m360_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
 void List_1__ctor_m2582_gshared (List_1_t2 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1__ctor_m2582(__this, ___collection, method) (void)List_1__ctor_m2582_gshared((List_1_t2 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
 void List_1__ctor_m15450_gshared (List_1_t2 * __this, int32_t ___capacity, MethodInfo* method);
#define List_1__ctor_m15450(__this, ___capacity, method) (void)List_1__ctor_m15450_gshared((List_1_t2 *)__this, (int32_t)___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(T[],System.Int32)
 void List_1__ctor_m15451_gshared (List_1_t2 * __this, ObjectU5BU5D_t5* ___data, int32_t ___size, MethodInfo* method);
#define List_1__ctor_m15451(__this, ___data, ___size, method) (void)List_1__ctor_m15451_gshared((List_1_t2 *)__this, (ObjectU5BU5D_t5*)___data, (int32_t)___size, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
 void List_1__cctor_m15452_gshared (Object_t * __this/* static, unused */, MethodInfo* method);
#define List_1__cctor_m15452(__this/* static, unused */, method) (void)List_1__cctor_m15452_gshared((Object_t *)__this/* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
 Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15453_gshared (List_1_t2 * __this, MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15453(__this, method) (Object_t*)List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15453_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void List_1_System_Collections_ICollection_CopyTo_m15454_gshared (List_1_t2 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m15454(__this, ___array, ___arrayIndex, method) (void)List_1_System_Collections_ICollection_CopyTo_m15454_gshared((List_1_t2 *)__this, (Array_t *)___array, (int32_t)___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m15455_gshared (List_1_t2 * __this, MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m15455(__this, method) (Object_t *)List_1_System_Collections_IEnumerable_GetEnumerator_m15455_gshared((List_1_t2 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
 int32_t List_1_System_Collections_IList_Add_m15456_gshared (List_1_t2 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Add_m15456(__this, ___item, method) (int32_t)List_1_System_Collections_IList_Add_m15456_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
 bool List_1_System_Collections_IList_Contains_m15457_gshared (List_1_t2 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m15457(__this, ___item, method) (bool)List_1_System_Collections_IList_Contains_m15457_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
 int32_t List_1_System_Collections_IList_IndexOf_m15458_gshared (List_1_t2 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m15458(__this, ___item, method) (int32_t)List_1_System_Collections_IList_IndexOf_m15458_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
 void List_1_System_Collections_IList_Insert_m15459_gshared (List_1_t2 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m15459(__this, ___index, ___item, method) (void)List_1_System_Collections_IList_Insert_m15459_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
 void List_1_System_Collections_IList_Remove_m15460_gshared (List_1_t2 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m15460(__this, ___item, method) (void)List_1_System_Collections_IList_Remove_m15460_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
 bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15461_gshared (List_1_t2 * __this, MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15461(__this, method) (bool)List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15461_gshared((List_1_t2 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
 bool List_1_System_Collections_ICollection_get_IsSynchronized_m15462_gshared (List_1_t2 * __this, MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m15462(__this, method) (bool)List_1_System_Collections_ICollection_get_IsSynchronized_m15462_gshared((List_1_t2 *)__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
 Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m15463_gshared (List_1_t2 * __this, MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m15463(__this, method) (Object_t *)List_1_System_Collections_ICollection_get_SyncRoot_m15463_gshared((List_1_t2 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
 bool List_1_System_Collections_IList_get_IsFixedSize_m15464_gshared (List_1_t2 * __this, MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m15464(__this, method) (bool)List_1_System_Collections_IList_get_IsFixedSize_m15464_gshared((List_1_t2 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
 bool List_1_System_Collections_IList_get_IsReadOnly_m15465_gshared (List_1_t2 * __this, MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m15465(__this, method) (bool)List_1_System_Collections_IList_get_IsReadOnly_m15465_gshared((List_1_t2 *)__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
 Object_t * List_1_System_Collections_IList_get_Item_m15466_gshared (List_1_t2 * __this, int32_t ___index, MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m15466(__this, ___index, method) (Object_t *)List_1_System_Collections_IList_get_Item_m15466_gshared((List_1_t2 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
 void List_1_System_Collections_IList_set_Item_m15467_gshared (List_1_t2 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m15467(__this, ___index, ___value, method) (void)List_1_System_Collections_IList_set_Item_m15467_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
 void List_1_Add_m363_gshared (List_1_t2 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_Add_m363(__this, ___item, method) (void)List_1_Add_m363_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
 void List_1_GrowIfNeeded_m15468_gshared (List_1_t2 * __this, int32_t ___newCount, MethodInfo* method);
#define List_1_GrowIfNeeded_m15468(__this, ___newCount, method) (void)List_1_GrowIfNeeded_m15468_gshared((List_1_t2 *)__this, (int32_t)___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckRange(System.Int32,System.Int32)
 void List_1_CheckRange_m15469_gshared (List_1_t2 * __this, int32_t ___idx, int32_t ___count, MethodInfo* method);
#define List_1_CheckRange_m15469(__this, ___idx, ___count, method) (void)List_1_CheckRange_m15469_gshared((List_1_t2 *)__this, (int32_t)___idx, (int32_t)___count, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
 void List_1_AddCollection_m15470_gshared (List_1_t2 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_AddCollection_m15470(__this, ___collection, method) (void)List_1_AddCollection_m15470_gshared((List_1_t2 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
 void List_1_AddEnumerable_m15471_gshared (List_1_t2 * __this, Object_t* ___enumerable, MethodInfo* method);
#define List_1_AddEnumerable_m15471(__this, ___enumerable, method) (void)List_1_AddEnumerable_m15471_gshared((List_1_t2 *)__this, (Object_t*)___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
 void List_1_AddRange_m365_gshared (List_1_t2 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_AddRange_m365(__this, ___collection, method) (void)List_1_AddRange_m365_gshared((List_1_t2 *)__this, (Object_t*)___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
 ReadOnlyCollection_1_t1038 * List_1_AsReadOnly_m15472_gshared (List_1_t2 * __this, MethodInfo* method);
#define List_1_AsReadOnly_m15472(__this, method) (ReadOnlyCollection_1_t1038 *)List_1_AsReadOnly_m15472_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
 void List_1_Clear_m367_gshared (List_1_t2 * __this, MethodInfo* method);
#define List_1_Clear_m367(__this, method) (void)List_1_Clear_m367_gshared((List_1_t2 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
 bool List_1_Contains_m15473_gshared (List_1_t2 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_Contains_m15473(__this, ___item, method) (bool)List_1_Contains_m15473_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
 void List_1_CopyTo_m15474_gshared (List_1_t2 * __this, ObjectU5BU5D_t5* ___array, int32_t ___arrayIndex, MethodInfo* method);
#define List_1_CopyTo_m15474(__this, ___array, ___arrayIndex, method) (void)List_1_CopyTo_m15474_gshared((List_1_t2 *)__this, (ObjectU5BU5D_t5*)___array, (int32_t)___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
 Object_t * List_1_Find_m15475_gshared (List_1_t2 * __this, Predicate_1_t4052 * ___match, MethodInfo* method);
#define List_1_Find_m15475(__this, ___match, method) (Object_t *)List_1_Find_m15475_gshared((List_1_t2 *)__this, (Predicate_1_t4052 *)___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
 void List_1_CheckMatch_m15476_gshared (Object_t * __this/* static, unused */, Predicate_1_t4052 * ___match, MethodInfo* method);
#define List_1_CheckMatch_m15476(__this/* static, unused */, ___match, method) (void)List_1_CheckMatch_m15476_gshared((Object_t *)__this/* static, unused */, (Predicate_1_t4052 *)___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::FindIndex(System.Predicate`1<T>)
 int32_t List_1_FindIndex_m15477_gshared (List_1_t2 * __this, Predicate_1_t4052 * ___match, MethodInfo* method);
#define List_1_FindIndex_m15477(__this, ___match, method) (int32_t)List_1_FindIndex_m15477_gshared((List_1_t2 *)__this, (Predicate_1_t4052 *)___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
 int32_t List_1_GetIndex_m15478_gshared (List_1_t2 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t4052 * ___match, MethodInfo* method);
#define List_1_GetIndex_m15478(__this, ___startIndex, ___count, ___match, method) (int32_t)List_1_GetIndex_m15478_gshared((List_1_t2 *)__this, (int32_t)___startIndex, (int32_t)___count, (Predicate_1_t4052 *)___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
 Enumerator_t413  List_1_GetEnumerator_m2042 (List_1_t2 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Object>::GetRange(System.Int32,System.Int32)
 List_1_t2 * List_1_GetRange_m15479_gshared (List_1_t2 * __this, int32_t ___index, int32_t ___count, MethodInfo* method);
#define List_1_GetRange_m15479(__this, ___index, ___count, method) (List_1_t2 *)List_1_GetRange_m15479_gshared((List_1_t2 *)__this, (int32_t)___index, (int32_t)___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
 int32_t List_1_IndexOf_m6346_gshared (List_1_t2 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_IndexOf_m6346(__this, ___item, method) (int32_t)List_1_IndexOf_m6346_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
 void List_1_Shift_m15480_gshared (List_1_t2 * __this, int32_t ___start, int32_t ___delta, MethodInfo* method);
#define List_1_Shift_m15480(__this, ___start, ___delta, method) (void)List_1_Shift_m15480_gshared((List_1_t2 *)__this, (int32_t)___start, (int32_t)___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
 void List_1_CheckIndex_m15481_gshared (List_1_t2 * __this, int32_t ___index, MethodInfo* method);
#define List_1_CheckIndex_m15481(__this, ___index, method) (void)List_1_CheckIndex_m15481_gshared((List_1_t2 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
 void List_1_Insert_m15482_gshared (List_1_t2 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define List_1_Insert_m15482(__this, ___index, ___item, method) (void)List_1_Insert_m15482_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
 void List_1_CheckCollection_m15483_gshared (List_1_t2 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_CheckCollection_m15483(__this, ___collection, method) (void)List_1_CheckCollection_m15483_gshared((List_1_t2 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
 void List_1_InsertRange_m15484_gshared (List_1_t2 * __this, int32_t ___index, Object_t* ___collection, MethodInfo* method);
#define List_1_InsertRange_m15484(__this, ___index, ___collection, method) (void)List_1_InsertRange_m15484_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
 void List_1_InsertCollection_m15485_gshared (List_1_t2 * __this, int32_t ___index, Object_t* ___collection, MethodInfo* method);
#define List_1_InsertCollection_m15485(__this, ___index, ___collection, method) (void)List_1_InsertCollection_m15485_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
 void List_1_InsertEnumeration_m15486_gshared (List_1_t2 * __this, int32_t ___index, Object_t* ___enumerable, MethodInfo* method);
#define List_1_InsertEnumeration_m15486(__this, ___index, ___enumerable, method) (void)List_1_InsertEnumeration_m15486_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t*)___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
 bool List_1_Remove_m15487_gshared (List_1_t2 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_Remove_m15487(__this, ___item, method) (bool)List_1_Remove_m15487_gshared((List_1_t2 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
 int32_t List_1_RemoveAll_m15488_gshared (List_1_t2 * __this, Predicate_1_t4052 * ___match, MethodInfo* method);
#define List_1_RemoveAll_m15488(__this, ___match, method) (int32_t)List_1_RemoveAll_m15488_gshared((List_1_t2 *)__this, (Predicate_1_t4052 *)___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
 void List_1_RemoveAt_m15489_gshared (List_1_t2 * __this, int32_t ___index, MethodInfo* method);
#define List_1_RemoveAt_m15489(__this, ___index, method) (void)List_1_RemoveAt_m15489_gshared((List_1_t2 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveRange(System.Int32,System.Int32)
 void List_1_RemoveRange_m15490_gshared (List_1_t2 * __this, int32_t ___index, int32_t ___count, MethodInfo* method);
#define List_1_RemoveRange_m15490(__this, ___index, ___count, method) (void)List_1_RemoveRange_m15490_gshared((List_1_t2 *)__this, (int32_t)___index, (int32_t)___count, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
 void List_1_Reverse_m15491_gshared (List_1_t2 * __this, MethodInfo* method);
#define List_1_Reverse_m15491(__this, method) (void)List_1_Reverse_m15491_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
 void List_1_Sort_m15492_gshared (List_1_t2 * __this, MethodInfo* method);
#define List_1_Sort_m15492(__this, method) (void)List_1_Sort_m15492_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
 void List_1_Sort_m15493_gshared (List_1_t2 * __this, Comparison_1_t4053 * ___comparison, MethodInfo* method);
#define List_1_Sort_m15493(__this, ___comparison, method) (void)List_1_Sort_m15493_gshared((List_1_t2 *)__this, (Comparison_1_t4053 *)___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
 ObjectU5BU5D_t5* List_1_ToArray_m2552_gshared (List_1_t2 * __this, MethodInfo* method);
#define List_1_ToArray_m2552(__this, method) (ObjectU5BU5D_t5*)List_1_ToArray_m2552_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
 void List_1_TrimExcess_m15494_gshared (List_1_t2 * __this, MethodInfo* method);
#define List_1_TrimExcess_m15494(__this, method) (void)List_1_TrimExcess_m15494_gshared((List_1_t2 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
 int32_t List_1_get_Capacity_m15495_gshared (List_1_t2 * __this, MethodInfo* method);
#define List_1_get_Capacity_m15495(__this, method) (int32_t)List_1_get_Capacity_m15495_gshared((List_1_t2 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
 void List_1_set_Capacity_m15496_gshared (List_1_t2 * __this, int32_t ___value, MethodInfo* method);
#define List_1_set_Capacity_m15496(__this, ___value, method) (void)List_1_set_Capacity_m15496_gshared((List_1_t2 *)__this, (int32_t)___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
 int32_t List_1_get_Count_m358_gshared (List_1_t2 * __this, MethodInfo* method);
#define List_1_get_Count_m358(__this, method) (int32_t)List_1_get_Count_m358_gshared((List_1_t2 *)__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
 Object_t * List_1_get_Item_m1990_gshared (List_1_t2 * __this, int32_t ___index, MethodInfo* method);
#define List_1_get_Item_m1990(__this, ___index, method) (Object_t *)List_1_get_Item_m1990_gshared((List_1_t2 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
 void List_1_set_Item_m6347_gshared (List_1_t2 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define List_1_set_Item_m6347(__this, ___index, ___value, method) (void)List_1_set_Item_m6347_gshared((List_1_t2 *)__this, (int32_t)___index, (Object_t *)___value, method)
