#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ArrayList/ArrayListWrapper
struct ArrayListWrapper_t3279;
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

// System.Void System.Collections.ArrayList/ArrayListWrapper::.ctor(System.Collections.ArrayList)
 void ArrayListWrapper__ctor_m11541 (ArrayListWrapper_t3279 * __this, ArrayList_t94 * ___innerArrayList, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/ArrayListWrapper::get_Item(System.Int32)
 Object_t * ArrayListWrapper_get_Item_m11542 (ArrayListWrapper_t3279 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::set_Item(System.Int32,System.Object)
 void ArrayListWrapper_set_Item_m11543 (ArrayListWrapper_t3279 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::get_Count()
 int32_t ArrayListWrapper_get_Count_m11544 (ArrayListWrapper_t3279 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::get_Capacity()
 int32_t ArrayListWrapper_get_Capacity_m11545 (ArrayListWrapper_t3279 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::set_Capacity(System.Int32)
 void ArrayListWrapper_set_Capacity_m11546 (ArrayListWrapper_t3279 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/ArrayListWrapper::get_IsFixedSize()
 bool ArrayListWrapper_get_IsFixedSize_m11547 (ArrayListWrapper_t3279 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/ArrayListWrapper::get_IsReadOnly()
 bool ArrayListWrapper_get_IsReadOnly_m11548 (ArrayListWrapper_t3279 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/ArrayListWrapper::get_IsSynchronized()
 bool ArrayListWrapper_get_IsSynchronized_m11549 (ArrayListWrapper_t3279 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/ArrayListWrapper::get_SyncRoot()
 Object_t * ArrayListWrapper_get_SyncRoot_m11550 (ArrayListWrapper_t3279 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::Add(System.Object)
 int32_t ArrayListWrapper_Add_m11551 (ArrayListWrapper_t3279 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::Clear()
 void ArrayListWrapper_Clear_m11552 (ArrayListWrapper_t3279 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/ArrayListWrapper::Contains(System.Object)
 bool ArrayListWrapper_Contains_m11553 (ArrayListWrapper_t3279 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::IndexOf(System.Object)
 int32_t ArrayListWrapper_IndexOf_m11554 (ArrayListWrapper_t3279 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::IndexOf(System.Object,System.Int32)
 int32_t ArrayListWrapper_IndexOf_m11555 (ArrayListWrapper_t3279 * __this, Object_t * ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::IndexOf(System.Object,System.Int32,System.Int32)
 int32_t ArrayListWrapper_IndexOf_m11556 (ArrayListWrapper_t3279 * __this, Object_t * ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::Insert(System.Int32,System.Object)
 void ArrayListWrapper_Insert_m11557 (ArrayListWrapper_t3279 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::InsertRange(System.Int32,System.Collections.ICollection)
 void ArrayListWrapper_InsertRange_m11558 (ArrayListWrapper_t3279 * __this, int32_t ___index, Object_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::Remove(System.Object)
 void ArrayListWrapper_Remove_m11559 (ArrayListWrapper_t3279 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::RemoveAt(System.Int32)
 void ArrayListWrapper_RemoveAt_m11560 (ArrayListWrapper_t3279 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::CopyTo(System.Array)
 void ArrayListWrapper_CopyTo_m11561 (ArrayListWrapper_t3279 * __this, Array_t * ___array, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::CopyTo(System.Array,System.Int32)
 void ArrayListWrapper_CopyTo_m11562 (ArrayListWrapper_t3279 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::CopyTo(System.Int32,System.Array,System.Int32,System.Int32)
 void ArrayListWrapper_CopyTo_m11563 (ArrayListWrapper_t3279 * __this, int32_t ___index, Array_t * ___array, int32_t ___arrayIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.ArrayList/ArrayListWrapper::GetEnumerator()
 Object_t * ArrayListWrapper_GetEnumerator_m11564 (ArrayListWrapper_t3279 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::AddRange(System.Collections.ICollection)
 void ArrayListWrapper_AddRange_m11565 (ArrayListWrapper_t3279 * __this, Object_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/ArrayListWrapper::Clone()
 Object_t * ArrayListWrapper_Clone_m11566 (ArrayListWrapper_t3279 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::Sort()
 void ArrayListWrapper_Sort_m11567 (ArrayListWrapper_t3279 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::Sort(System.Collections.IComparer)
 void ArrayListWrapper_Sort_m11568 (ArrayListWrapper_t3279 * __this, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Collections.ArrayList/ArrayListWrapper::ToArray()
 ObjectU5BU5D_t5* ArrayListWrapper_ToArray_m11569 (ArrayListWrapper_t3279 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Collections.ArrayList/ArrayListWrapper::ToArray(System.Type)
 Array_t * ArrayListWrapper_ToArray_m11570 (ArrayListWrapper_t3279 * __this, Type_t * ___elementType, MethodInfo* method) IL2CPP_METHOD_ATTR;
