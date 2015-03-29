#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t1178;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t438;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t1010;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t1418;
// System.String[]
struct StringU5BU5D_t4;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.HashSet`1/Enumerator<System.String>
#include "System_Core_System_Collections_Generic_HashSet_1_Enumerator__5.h"

// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor()
// System.Collections.Generic.HashSet`1<System.Object>
#include "System_Core_System_Collections_Generic_HashSet_1_gen_3MethodDeclarations.h"
#define HashSet_1__ctor_m6431(__this, method) (void)HashSet_1__ctor_m18368_gshared((HashSet_1_t1425 *)__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
#define HashSet_1__ctor_m31867(__this, ___comparer, method) (void)HashSet_1__ctor_m6492_gshared((HashSet_1_t1425 *)__this, (Object_t*)___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define HashSet_1__ctor_m6436(__this, ___collection, method) (void)HashSet_1__ctor_m18369_gshared((HashSet_1_t1425 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
#define HashSet_1__ctor_m31868(__this, ___collection, ___comparer, method) (void)HashSet_1__ctor_m18370_gshared((HashSet_1_t1425 *)__this, (Object_t*)___collection, (Object_t*)___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define HashSet_1__ctor_m31869(__this, ___info, ___context, method) (void)HashSet_1__ctor_m18371_gshared((HashSet_1_t1425 *)__this, (SerializationInfo_t2614 *)___info, (StreamingContext_t2615 )___context, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1<System.String>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m31870(__this, method) (Object_t*)HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18372_gshared((HashSet_1_t1425 *)__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m31871(__this, method) (bool)HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18373_gshared((HashSet_1_t1425 *)__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::System.Collections.Generic.ICollection<T>.CopyTo(T[],System.Int32)
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m31872(__this, ___array, ___index, method) (void)HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m18374_gshared((HashSet_1_t1425 *)__this, (ObjectU5BU5D_t5*)___array, (int32_t)___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::System.Collections.Generic.ICollection<T>.Add(T)
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m31873(__this, ___item, method) (void)HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m18375_gshared((HashSet_1_t1425 *)__this, (Object_t *)___item, method)
// System.Collections.IEnumerator System.Collections.Generic.HashSet`1<System.String>::System.Collections.IEnumerable.GetEnumerator()
#define HashSet_1_System_Collections_IEnumerable_GetEnumerator_m31874(__this, method) (Object_t *)HashSet_1_System_Collections_IEnumerable_GetEnumerator_m18376_gshared((HashSet_1_t1425 *)__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.String>::get_Count()
#define HashSet_1_get_Count_m31875(__this, method) (int32_t)HashSet_1_get_Count_m18377_gshared((HashSet_1_t1425 *)__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
#define HashSet_1_Init_m31876(__this, ___capacity, ___comparer, method) (void)HashSet_1_Init_m18378_gshared((HashSet_1_t1425 *)__this, (int32_t)___capacity, (Object_t*)___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::InitArrays(System.Int32)
#define HashSet_1_InitArrays_m31877(__this, ___size, method) (void)HashSet_1_InitArrays_m18379_gshared((HashSet_1_t1425 *)__this, (int32_t)___size, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::SlotsContainsAt(System.Int32,System.Int32,T)
#define HashSet_1_SlotsContainsAt_m31878(__this, ___index, ___hash, ___item, method) (bool)HashSet_1_SlotsContainsAt_m18380_gshared((HashSet_1_t1425 *)__this, (int32_t)___index, (int32_t)___hash, (Object_t *)___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::CopyTo(T[])
#define HashSet_1_CopyTo_m31879(__this, ___array, method) (void)HashSet_1_CopyTo_m18381_gshared((HashSet_1_t1425 *)__this, (ObjectU5BU5D_t5*)___array, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::CopyTo(T[],System.Int32)
#define HashSet_1_CopyTo_m31880(__this, ___array, ___index, method) (void)HashSet_1_CopyTo_m18382_gshared((HashSet_1_t1425 *)__this, (ObjectU5BU5D_t5*)___array, (int32_t)___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::CopyTo(T[],System.Int32,System.Int32)
#define HashSet_1_CopyTo_m31881(__this, ___array, ___index, ___count, method) (void)HashSet_1_CopyTo_m18383_gshared((HashSet_1_t1425 *)__this, (ObjectU5BU5D_t5*)___array, (int32_t)___index, (int32_t)___count, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::Resize()
#define HashSet_1_Resize_m31882(__this, method) (void)HashSet_1_Resize_m18384_gshared((HashSet_1_t1425 *)__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.String>::GetLinkHashCode(System.Int32)
#define HashSet_1_GetLinkHashCode_m31883(__this, ___index, method) (int32_t)HashSet_1_GetLinkHashCode_m18385_gshared((HashSet_1_t1425 *)__this, (int32_t)___index, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.String>::GetItemHashCode(T)
#define HashSet_1_GetItemHashCode_m31884(__this, ___item, method) (int32_t)HashSet_1_GetItemHashCode_m18386_gshared((HashSet_1_t1425 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Add(T)
#define HashSet_1_Add_m6861(__this, ___item, method) (bool)HashSet_1_Add_m18387_gshared((HashSet_1_t1425 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::Clear()
#define HashSet_1_Clear_m31885(__this, method) (void)HashSet_1_Clear_m18388_gshared((HashSet_1_t1425 *)__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Contains(T)
#define HashSet_1_Contains_m6857(__this, ___item, method) (bool)HashSet_1_Contains_m18389_gshared((HashSet_1_t1425 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Remove(T)
#define HashSet_1_Remove_m31886(__this, ___item, method) (bool)HashSet_1_Remove_m18390_gshared((HashSet_1_t1425 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define HashSet_1_GetObjectData_m31887(__this, ___info, ___context, method) (void)HashSet_1_GetObjectData_m18391_gshared((HashSet_1_t1425 *)__this, (SerializationInfo_t2614 *)___info, (StreamingContext_t2615 )___context, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::OnDeserialization(System.Object)
#define HashSet_1_OnDeserialization_m31888(__this, ___sender, method) (void)HashSet_1_OnDeserialization_m18392_gshared((HashSet_1_t1425 *)__this, (Object_t *)___sender, method)
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.String>::GetEnumerator()
 Enumerator_t6301  HashSet_1_GetEnumerator_m31889 (HashSet_1_t1178 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
