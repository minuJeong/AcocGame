#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.CollectionBase
struct CollectionBase_t2809;
// System.Object
struct Object_t;
// System.Collections.ArrayList
struct ArrayList_t94;
// System.Collections.IList
struct IList_t869;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;

// System.Void System.Collections.CollectionBase::.ctor()
 void CollectionBase__ctor_m9937 (CollectionBase_t2809 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void CollectionBase_System_Collections_ICollection_CopyTo_m9942 (CollectionBase_t2809 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.CollectionBase::System.Collections.ICollection.get_SyncRoot()
 Object_t * CollectionBase_System_Collections_ICollection_get_SyncRoot_m9941 (CollectionBase_t2809 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.CollectionBase::System.Collections.ICollection.get_IsSynchronized()
 bool CollectionBase_System_Collections_ICollection_get_IsSynchronized_m9940 (CollectionBase_t2809 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.CollectionBase::System.Collections.IList.Add(System.Object)
 int32_t CollectionBase_System_Collections_IList_Add_m9947 (CollectionBase_t2809 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.CollectionBase::System.Collections.IList.Contains(System.Object)
 bool CollectionBase_System_Collections_IList_Contains_m9949 (CollectionBase_t2809 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.CollectionBase::System.Collections.IList.IndexOf(System.Object)
 int32_t CollectionBase_System_Collections_IList_IndexOf_m9950 (CollectionBase_t2809 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::System.Collections.IList.Insert(System.Int32,System.Object)
 void CollectionBase_System_Collections_IList_Insert_m9951 (CollectionBase_t2809 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::System.Collections.IList.Remove(System.Object)
 void CollectionBase_System_Collections_IList_Remove_m9952 (CollectionBase_t2809 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.CollectionBase::System.Collections.IList.get_IsFixedSize()
 bool CollectionBase_System_Collections_IList_get_IsFixedSize_m9943 (CollectionBase_t2809 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.CollectionBase::System.Collections.IList.get_IsReadOnly()
 bool CollectionBase_System_Collections_IList_get_IsReadOnly_m9944 (CollectionBase_t2809 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.CollectionBase::System.Collections.IList.get_Item(System.Int32)
 Object_t * CollectionBase_System_Collections_IList_get_Item_m9945 (CollectionBase_t2809 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::System.Collections.IList.set_Item(System.Int32,System.Object)
 void CollectionBase_System_Collections_IList_set_Item_m9946 (CollectionBase_t2809 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.CollectionBase::get_Count()
 int32_t CollectionBase_get_Count_m9939 (CollectionBase_t2809 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.CollectionBase::GetEnumerator()
 Object_t * CollectionBase_GetEnumerator_m9938 (CollectionBase_t2809 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::Clear()
 void CollectionBase_Clear_m9948 (CollectionBase_t2809 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::RemoveAt(System.Int32)
 void CollectionBase_RemoveAt_m9953 (CollectionBase_t2809 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Collections.CollectionBase::get_InnerList()
 ArrayList_t94 * CollectionBase_get_InnerList_m11648 (CollectionBase_t2809 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList System.Collections.CollectionBase::get_List()
 Object_t * CollectionBase_get_List_m9935 (CollectionBase_t2809 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnClear()
 void CollectionBase_OnClear_m9954 (CollectionBase_t2809 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnClearComplete()
 void CollectionBase_OnClearComplete_m9955 (CollectionBase_t2809 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnInsert(System.Int32,System.Object)
 void CollectionBase_OnInsert_m9956 (CollectionBase_t2809 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnInsertComplete(System.Int32,System.Object)
 void CollectionBase_OnInsertComplete_m9957 (CollectionBase_t2809 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnRemove(System.Int32,System.Object)
 void CollectionBase_OnRemove_m9958 (CollectionBase_t2809 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnRemoveComplete(System.Int32,System.Object)
 void CollectionBase_OnRemoveComplete_m9959 (CollectionBase_t2809 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnSet(System.Int32,System.Object,System.Object)
 void CollectionBase_OnSet_m9960 (CollectionBase_t2809 * __this, int32_t ___index, Object_t * ___oldValue, Object_t * ___newValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnSetComplete(System.Int32,System.Object,System.Object)
 void CollectionBase_OnSetComplete_m9961 (CollectionBase_t2809 * __this, int32_t ___index, Object_t * ___oldValue, Object_t * ___newValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnValidate(System.Object)
 void CollectionBase_OnValidate_m11649 (CollectionBase_t2809 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
