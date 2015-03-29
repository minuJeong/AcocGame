#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.HashSet`1<PickupItem>
struct HashSet_1_t360;
// System.Collections.Generic.IEqualityComparer`1<PickupItem>
struct IEqualityComparer_1_t4498;
// System.Collections.Generic.IEnumerable`1<PickupItem>
struct IEnumerable_1_t4499;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Collections.Generic.IEnumerator`1<PickupItem>
struct IEnumerator_1_t4500;
// PickupItem[]
struct PickupItemU5BU5D_t528;
// PickupItem
struct PickupItem_t202;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.HashSet`1/Enumerator<PickupItem>
#include "System_Core_System_Collections_Generic_HashSet_1_Enumerator_.h"

// System.Void System.Collections.Generic.HashSet`1<PickupItem>::.ctor()
// System.Collections.Generic.HashSet`1<System.Object>
#include "System_Core_System_Collections_Generic_HashSet_1_gen_3MethodDeclarations.h"
#define HashSet_1__ctor_m2714(__this, method) (void)HashSet_1__ctor_m18368_gshared((HashSet_1_t1425 *)__this, method)
// System.Void System.Collections.Generic.HashSet`1<PickupItem>::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
#define HashSet_1__ctor_m18404(__this, ___comparer, method) (void)HashSet_1__ctor_m6492_gshared((HashSet_1_t1425 *)__this, (Object_t*)___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<PickupItem>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define HashSet_1__ctor_m18405(__this, ___collection, method) (void)HashSet_1__ctor_m18369_gshared((HashSet_1_t1425 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.HashSet`1<PickupItem>::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
#define HashSet_1__ctor_m18406(__this, ___collection, ___comparer, method) (void)HashSet_1__ctor_m18370_gshared((HashSet_1_t1425 *)__this, (Object_t*)___collection, (Object_t*)___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<PickupItem>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define HashSet_1__ctor_m18407(__this, ___info, ___context, method) (void)HashSet_1__ctor_m18371_gshared((HashSet_1_t1425 *)__this, (SerializationInfo_t2614 *)___info, (StreamingContext_t2615 )___context, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1<PickupItem>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18408(__this, method) (Object_t*)HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18372_gshared((HashSet_1_t1425 *)__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<PickupItem>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18409(__this, method) (bool)HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18373_gshared((HashSet_1_t1425 *)__this, method)
// System.Void System.Collections.Generic.HashSet`1<PickupItem>::System.Collections.Generic.ICollection<T>.CopyTo(T[],System.Int32)
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m18410(__this, ___array, ___index, method) (void)HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m18374_gshared((HashSet_1_t1425 *)__this, (ObjectU5BU5D_t5*)___array, (int32_t)___index, method)
// System.Void System.Collections.Generic.HashSet`1<PickupItem>::System.Collections.Generic.ICollection<T>.Add(T)
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m18411(__this, ___item, method) (void)HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m18375_gshared((HashSet_1_t1425 *)__this, (Object_t *)___item, method)
// System.Collections.IEnumerator System.Collections.Generic.HashSet`1<PickupItem>::System.Collections.IEnumerable.GetEnumerator()
#define HashSet_1_System_Collections_IEnumerable_GetEnumerator_m18412(__this, method) (Object_t *)HashSet_1_System_Collections_IEnumerable_GetEnumerator_m18376_gshared((HashSet_1_t1425 *)__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<PickupItem>::get_Count()
#define HashSet_1_get_Count_m2719(__this, method) (int32_t)HashSet_1_get_Count_m18377_gshared((HashSet_1_t1425 *)__this, method)
// System.Void System.Collections.Generic.HashSet`1<PickupItem>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
#define HashSet_1_Init_m18413(__this, ___capacity, ___comparer, method) (void)HashSet_1_Init_m18378_gshared((HashSet_1_t1425 *)__this, (int32_t)___capacity, (Object_t*)___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<PickupItem>::InitArrays(System.Int32)
#define HashSet_1_InitArrays_m18414(__this, ___size, method) (void)HashSet_1_InitArrays_m18379_gshared((HashSet_1_t1425 *)__this, (int32_t)___size, method)
// System.Boolean System.Collections.Generic.HashSet`1<PickupItem>::SlotsContainsAt(System.Int32,System.Int32,T)
#define HashSet_1_SlotsContainsAt_m18415(__this, ___index, ___hash, ___item, method) (bool)HashSet_1_SlotsContainsAt_m18380_gshared((HashSet_1_t1425 *)__this, (int32_t)___index, (int32_t)___hash, (Object_t *)___item, method)
// System.Void System.Collections.Generic.HashSet`1<PickupItem>::CopyTo(T[])
#define HashSet_1_CopyTo_m2720(__this, ___array, method) (void)HashSet_1_CopyTo_m18381_gshared((HashSet_1_t1425 *)__this, (ObjectU5BU5D_t5*)___array, method)
// System.Void System.Collections.Generic.HashSet`1<PickupItem>::CopyTo(T[],System.Int32)
#define HashSet_1_CopyTo_m18416(__this, ___array, ___index, method) (void)HashSet_1_CopyTo_m18382_gshared((HashSet_1_t1425 *)__this, (ObjectU5BU5D_t5*)___array, (int32_t)___index, method)
// System.Void System.Collections.Generic.HashSet`1<PickupItem>::CopyTo(T[],System.Int32,System.Int32)
#define HashSet_1_CopyTo_m18417(__this, ___array, ___index, ___count, method) (void)HashSet_1_CopyTo_m18383_gshared((HashSet_1_t1425 *)__this, (ObjectU5BU5D_t5*)___array, (int32_t)___index, (int32_t)___count, method)
// System.Void System.Collections.Generic.HashSet`1<PickupItem>::Resize()
#define HashSet_1_Resize_m18418(__this, method) (void)HashSet_1_Resize_m18384_gshared((HashSet_1_t1425 *)__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<PickupItem>::GetLinkHashCode(System.Int32)
#define HashSet_1_GetLinkHashCode_m18419(__this, ___index, method) (int32_t)HashSet_1_GetLinkHashCode_m18385_gshared((HashSet_1_t1425 *)__this, (int32_t)___index, method)
// System.Int32 System.Collections.Generic.HashSet`1<PickupItem>::GetItemHashCode(T)
#define HashSet_1_GetItemHashCode_m18420(__this, ___item, method) (int32_t)HashSet_1_GetItemHashCode_m18386_gshared((HashSet_1_t1425 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<PickupItem>::Add(T)
#define HashSet_1_Add_m2716(__this, ___item, method) (bool)HashSet_1_Add_m18387_gshared((HashSet_1_t1425 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.HashSet`1<PickupItem>::Clear()
#define HashSet_1_Clear_m18421(__this, method) (void)HashSet_1_Clear_m18388_gshared((HashSet_1_t1425 *)__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<PickupItem>::Contains(T)
#define HashSet_1_Contains_m18422(__this, ___item, method) (bool)HashSet_1_Contains_m18389_gshared((HashSet_1_t1425 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<PickupItem>::Remove(T)
#define HashSet_1_Remove_m2718(__this, ___item, method) (bool)HashSet_1_Remove_m18390_gshared((HashSet_1_t1425 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.HashSet`1<PickupItem>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define HashSet_1_GetObjectData_m18423(__this, ___info, ___context, method) (void)HashSet_1_GetObjectData_m18391_gshared((HashSet_1_t1425 *)__this, (SerializationInfo_t2614 *)___info, (StreamingContext_t2615 )___context, method)
// System.Void System.Collections.Generic.HashSet`1<PickupItem>::OnDeserialization(System.Object)
#define HashSet_1_OnDeserialization_m18424(__this, ___sender, method) (void)HashSet_1_OnDeserialization_m18392_gshared((HashSet_1_t1425 *)__this, (Object_t *)___sender, method)
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<PickupItem>::GetEnumerator()
 Enumerator_t462  HashSet_1_GetEnumerator_m2334 (HashSet_1_t360 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
