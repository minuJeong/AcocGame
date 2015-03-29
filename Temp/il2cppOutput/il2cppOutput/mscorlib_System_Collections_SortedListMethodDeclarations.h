#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.SortedList
struct SortedList_t3299;
// System.Object
struct Object_t;
// System.Collections.ICollection
struct ICollection_t429;
// System.Collections.IComparer
struct IComparer_t3176;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t95;
// System.Array
struct Array_t;
// System.Collections.SortedList/EnumeratorMode
#include "mscorlib_System_Collections_SortedList_EnumeratorMode.h"

// System.Void System.Collections.SortedList::.ctor()
 void SortedList__ctor_m11760 (SortedList_t3299 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::.ctor(System.Collections.IComparer,System.Int32)
 void SortedList__ctor_m11761 (SortedList_t3299 * __this, Object_t * ___comparer, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::.cctor()
 void SortedList__cctor_m11762 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.SortedList::System.Collections.IEnumerable.GetEnumerator()
 Object_t * SortedList_System_Collections_IEnumerable_GetEnumerator_m11763 (SortedList_t3299 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList::get_Count()
 int32_t SortedList_get_Count_m11764 (SortedList_t3299 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList::get_IsSynchronized()
 bool SortedList_get_IsSynchronized_m11765 (SortedList_t3299 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList::get_SyncRoot()
 Object_t * SortedList_get_SyncRoot_m11766 (SortedList_t3299 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList::get_IsFixedSize()
 bool SortedList_get_IsFixedSize_m11767 (SortedList_t3299 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList::get_IsReadOnly()
 bool SortedList_get_IsReadOnly_m11768 (SortedList_t3299 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.SortedList::get_Keys()
 Object_t * SortedList_get_Keys_m11769 (SortedList_t3299 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.SortedList::get_Values()
 Object_t * SortedList_get_Values_m11770 (SortedList_t3299 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList::get_Item(System.Object)
 Object_t * SortedList_get_Item_m11771 (SortedList_t3299 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::set_Item(System.Object,System.Object)
 void SortedList_set_Item_m11772 (SortedList_t3299 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList::get_Capacity()
 int32_t SortedList_get_Capacity_m11773 (SortedList_t3299 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::set_Capacity(System.Int32)
 void SortedList_set_Capacity_m11774 (SortedList_t3299 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::Add(System.Object,System.Object)
 void SortedList_Add_m11775 (SortedList_t3299 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::Clear()
 void SortedList_Clear_m11776 (SortedList_t3299 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList::Contains(System.Object)
 bool SortedList_Contains_m11777 (SortedList_t3299 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.SortedList::GetEnumerator()
 Object_t * SortedList_GetEnumerator_m11778 (SortedList_t3299 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::Remove(System.Object)
 void SortedList_Remove_m11779 (SortedList_t3299 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::CopyTo(System.Array,System.Int32)
 void SortedList_CopyTo_m11780 (SortedList_t3299 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::RemoveAt(System.Int32)
 void SortedList_RemoveAt_m11781 (SortedList_t3299 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList::IndexOfKey(System.Object)
 int32_t SortedList_IndexOfKey_m11782 (SortedList_t3299 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList::IndexOfValue(System.Object)
 int32_t SortedList_IndexOfValue_m11783 (SortedList_t3299 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList::ContainsValue(System.Object)
 bool SortedList_ContainsValue_m11784 (SortedList_t3299 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList::GetByIndex(System.Int32)
 Object_t * SortedList_GetByIndex_m11785 (SortedList_t3299 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList::GetKey(System.Int32)
 Object_t * SortedList_GetKey_m11786 (SortedList_t3299 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::EnsureCapacity(System.Int32,System.Int32)
 void SortedList_EnsureCapacity_m11787 (SortedList_t3299 * __this, int32_t ___n, int32_t ___free, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::PutImpl(System.Object,System.Object,System.Boolean)
 void SortedList_PutImpl_m11788 (SortedList_t3299 * __this, Object_t * ___key, Object_t * ___value, bool ___overwrite, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList::GetImpl(System.Object)
 Object_t * SortedList_GetImpl_m11789 (SortedList_t3299 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::InitTable(System.Int32,System.Boolean)
 void SortedList_InitTable_m11790 (SortedList_t3299 * __this, int32_t ___capacity, bool ___forceSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::CopyToArray(System.Array,System.Int32,System.Collections.SortedList/EnumeratorMode)
 void SortedList_CopyToArray_m11791 (SortedList_t3299 * __this, Array_t * ___arr, int32_t ___i, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList::Find(System.Object)
 int32_t SortedList_Find_m11792 (SortedList_t3299 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
