#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ArrayList/SynchronizedArrayListWrapper
struct SynchronizedArrayListWrapper_t3280;
// System.Object
struct Object_t;
// System.Collections.ArrayList
struct ArrayList_t94;
// System.Collections.ICollection
struct ICollection_t429;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.IComparer
struct IComparer_t3176;
// System.Object[]
struct ObjectU5BU5D_t5;
// System.Type
struct Type_t;

// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::.ctor(System.Collections.ArrayList)
 void SynchronizedArrayListWrapper__ctor_m11571 (SynchronizedArrayListWrapper_t3280 * __this, ArrayList_t94 * ___innerArrayList, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/SynchronizedArrayListWrapper::get_Item(System.Int32)
 Object_t * SynchronizedArrayListWrapper_get_Item_m11572 (SynchronizedArrayListWrapper_t3280 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::set_Item(System.Int32,System.Object)
 void SynchronizedArrayListWrapper_set_Item_m11573 (SynchronizedArrayListWrapper_t3280 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/SynchronizedArrayListWrapper::get_Count()
 int32_t SynchronizedArrayListWrapper_get_Count_m11574 (SynchronizedArrayListWrapper_t3280 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/SynchronizedArrayListWrapper::get_Capacity()
 int32_t SynchronizedArrayListWrapper_get_Capacity_m11575 (SynchronizedArrayListWrapper_t3280 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::set_Capacity(System.Int32)
 void SynchronizedArrayListWrapper_set_Capacity_m11576 (SynchronizedArrayListWrapper_t3280 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/SynchronizedArrayListWrapper::get_IsFixedSize()
 bool SynchronizedArrayListWrapper_get_IsFixedSize_m11577 (SynchronizedArrayListWrapper_t3280 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/SynchronizedArrayListWrapper::get_IsReadOnly()
 bool SynchronizedArrayListWrapper_get_IsReadOnly_m11578 (SynchronizedArrayListWrapper_t3280 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/SynchronizedArrayListWrapper::get_IsSynchronized()
 bool SynchronizedArrayListWrapper_get_IsSynchronized_m11579 (SynchronizedArrayListWrapper_t3280 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/SynchronizedArrayListWrapper::get_SyncRoot()
 Object_t * SynchronizedArrayListWrapper_get_SyncRoot_m11580 (SynchronizedArrayListWrapper_t3280 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/SynchronizedArrayListWrapper::Add(System.Object)
 int32_t SynchronizedArrayListWrapper_Add_m11581 (SynchronizedArrayListWrapper_t3280 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::Clear()
 void SynchronizedArrayListWrapper_Clear_m11582 (SynchronizedArrayListWrapper_t3280 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/SynchronizedArrayListWrapper::Contains(System.Object)
 bool SynchronizedArrayListWrapper_Contains_m11583 (SynchronizedArrayListWrapper_t3280 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/SynchronizedArrayListWrapper::IndexOf(System.Object)
 int32_t SynchronizedArrayListWrapper_IndexOf_m11584 (SynchronizedArrayListWrapper_t3280 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/SynchronizedArrayListWrapper::IndexOf(System.Object,System.Int32)
 int32_t SynchronizedArrayListWrapper_IndexOf_m11585 (SynchronizedArrayListWrapper_t3280 * __this, Object_t * ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/SynchronizedArrayListWrapper::IndexOf(System.Object,System.Int32,System.Int32)
 int32_t SynchronizedArrayListWrapper_IndexOf_m11586 (SynchronizedArrayListWrapper_t3280 * __this, Object_t * ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::Insert(System.Int32,System.Object)
 void SynchronizedArrayListWrapper_Insert_m11587 (SynchronizedArrayListWrapper_t3280 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::InsertRange(System.Int32,System.Collections.ICollection)
 void SynchronizedArrayListWrapper_InsertRange_m11588 (SynchronizedArrayListWrapper_t3280 * __this, int32_t ___index, Object_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::Remove(System.Object)
 void SynchronizedArrayListWrapper_Remove_m11589 (SynchronizedArrayListWrapper_t3280 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::RemoveAt(System.Int32)
 void SynchronizedArrayListWrapper_RemoveAt_m11590 (SynchronizedArrayListWrapper_t3280 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::CopyTo(System.Array)
 void SynchronizedArrayListWrapper_CopyTo_m11591 (SynchronizedArrayListWrapper_t3280 * __this, Array_t * ___array, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::CopyTo(System.Array,System.Int32)
 void SynchronizedArrayListWrapper_CopyTo_m11592 (SynchronizedArrayListWrapper_t3280 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::CopyTo(System.Int32,System.Array,System.Int32,System.Int32)
 void SynchronizedArrayListWrapper_CopyTo_m11593 (SynchronizedArrayListWrapper_t3280 * __this, int32_t ___index, Array_t * ___array, int32_t ___arrayIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.ArrayList/SynchronizedArrayListWrapper::GetEnumerator()
 Object_t * SynchronizedArrayListWrapper_GetEnumerator_m11594 (SynchronizedArrayListWrapper_t3280 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::AddRange(System.Collections.ICollection)
 void SynchronizedArrayListWrapper_AddRange_m11595 (SynchronizedArrayListWrapper_t3280 * __this, Object_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/SynchronizedArrayListWrapper::Clone()
 Object_t * SynchronizedArrayListWrapper_Clone_m11596 (SynchronizedArrayListWrapper_t3280 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::Sort()
 void SynchronizedArrayListWrapper_Sort_m11597 (SynchronizedArrayListWrapper_t3280 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::Sort(System.Collections.IComparer)
 void SynchronizedArrayListWrapper_Sort_m11598 (SynchronizedArrayListWrapper_t3280 * __this, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Collections.ArrayList/SynchronizedArrayListWrapper::ToArray()
 ObjectU5BU5D_t5* SynchronizedArrayListWrapper_ToArray_m11599 (SynchronizedArrayListWrapper_t3280 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Collections.ArrayList/SynchronizedArrayListWrapper::ToArray(System.Type)
 Array_t * SynchronizedArrayListWrapper_ToArray_m11600 (SynchronizedArrayListWrapper_t3280 * __this, Type_t * ___elementType, MethodInfo* method) IL2CPP_METHOD_ATTR;
