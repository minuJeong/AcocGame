#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Hashtable
struct Hashtable_t48;
// System.Collections.IComparer
struct IComparer_t3176;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t3294;
// System.Object
struct Object_t;
// System.Collections.ICollection
struct ICollection_t429;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Array
struct Array_t;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t95;
// System.Collections.Hashtable/Slot[]
struct SlotU5BU5D_t3293;
// System.Int32[]
struct Int32U5BU5D_t257;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Hashtable/EnumeratorMode
#include "mscorlib_System_Collections_Hashtable_EnumeratorMode.h"

// System.Void System.Collections.Hashtable::.ctor()
 void Hashtable__ctor_m6935 (Hashtable_t48 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Single,System.Collections.IHashCodeProvider,System.Collections.IComparer)
 void Hashtable__ctor_m11678 (Hashtable_t48 * __this, int32_t ___capacity, float ___loadFactor, Object_t * ___hcp, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Single)
 void Hashtable__ctor_m11679 (Hashtable_t48 * __this, int32_t ___capacity, float ___loadFactor, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Int32)
 void Hashtable__ctor_m616 (Hashtable_t48 * __this, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Collections.Hashtable)
 void Hashtable__ctor_m11680 (Hashtable_t48 * __this, Hashtable_t48 * ___source, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Collections.IHashCodeProvider,System.Collections.IComparer)
 void Hashtable__ctor_m11681 (Hashtable_t48 * __this, Object_t * ___hcp, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Hashtable__ctor_m11682 (Hashtable_t48 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.cctor()
 void Hashtable__cctor_m11683 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Hashtable::System.Collections.IEnumerable.GetEnumerator()
 Object_t * Hashtable_System_Collections_IEnumerable_GetEnumerator_m11684 (Hashtable_t48 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::set_comparer(System.Collections.IComparer)
 void Hashtable_set_comparer_m11685 (Hashtable_t48 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::set_hcp(System.Collections.IHashCodeProvider)
 void Hashtable_set_hcp_m11686 (Hashtable_t48 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable::get_Count()
 int32_t Hashtable_get_Count_m623 (Hashtable_t48 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable::get_IsSynchronized()
 bool Hashtable_get_IsSynchronized_m11687 (Hashtable_t48 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable::get_SyncRoot()
 Object_t * Hashtable_get_SyncRoot_m11688 (Hashtable_t48 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable::get_IsFixedSize()
 bool Hashtable_get_IsFixedSize_m11689 (Hashtable_t48 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable::get_IsReadOnly()
 bool Hashtable_get_IsReadOnly_m11690 (Hashtable_t48 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Hashtable::get_Keys()
 Object_t * Hashtable_get_Keys_m9934 (Hashtable_t48 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Hashtable::get_Values()
 Object_t * Hashtable_get_Values_m11691 (Hashtable_t48 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable::get_Item(System.Object)
 Object_t * Hashtable_get_Item_m489 (Hashtable_t48 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object)
 void Hashtable_set_Item_m488 (Hashtable_t48 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::CopyTo(System.Array,System.Int32)
 void Hashtable_CopyTo_m11692 (Hashtable_t48 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::Add(System.Object,System.Object)
 void Hashtable_Add_m491 (Hashtable_t48 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::Clear()
 void Hashtable_Clear_m9932 (Hashtable_t48 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable::Contains(System.Object)
 bool Hashtable_Contains_m487 (Hashtable_t48 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.Hashtable::GetEnumerator()
 Object_t * Hashtable_GetEnumerator_m624 (Hashtable_t48 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::Remove(System.Object)
 void Hashtable_Remove_m508 (Hashtable_t48 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable::ContainsKey(System.Object)
 bool Hashtable_ContainsKey_m11693 (Hashtable_t48 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable::Clone()
 Object_t * Hashtable_Clone_m495 (Hashtable_t48 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Hashtable_GetObjectData_m11694 (Hashtable_t48 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::OnDeserialization(System.Object)
 void Hashtable_OnDeserialization_m11695 (Hashtable_t48 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable::GetHash(System.Object)
 int32_t Hashtable_GetHash_m11696 (Hashtable_t48 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable::KeyEquals(System.Object,System.Object)
 bool Hashtable_KeyEquals_m11697 (Hashtable_t48 * __this, Object_t * ___item, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::AdjustThreshold()
 void Hashtable_AdjustThreshold_m11698 (Hashtable_t48 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::SetTable(System.Collections.Hashtable/Slot[],System.Int32[])
 void Hashtable_SetTable_m11699 (Hashtable_t48 * __this, SlotU5BU5D_t3293* ___table, Int32U5BU5D_t257* ___hashes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable::Find(System.Object)
 int32_t Hashtable_Find_m11700 (Hashtable_t48 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::Rehash()
 void Hashtable_Rehash_m11701 (Hashtable_t48 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::PutImpl(System.Object,System.Object,System.Boolean)
 void Hashtable_PutImpl_m11702 (Hashtable_t48 * __this, Object_t * ___key, Object_t * ___value, bool ___overwrite, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::CopyToArray(System.Array,System.Int32,System.Collections.Hashtable/EnumeratorMode)
 void Hashtable_CopyToArray_m11703 (Hashtable_t48 * __this, Array_t * ___arr, int32_t ___i, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable::TestPrime(System.Int32)
 bool Hashtable_TestPrime_m11704 (Object_t * __this/* static, unused */, int32_t ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable::CalcPrime(System.Int32)
 int32_t Hashtable_CalcPrime_m11705 (Object_t * __this/* static, unused */, int32_t ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable::ToPrime(System.Int32)
 int32_t Hashtable_ToPrime_m11706 (Object_t * __this/* static, unused */, int32_t ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
