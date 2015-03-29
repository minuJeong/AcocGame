#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.HashSet`1<Parse.ParseObject>
struct HashSet_1_t1146;
// System.Collections.Generic.IEqualityComparer`1<Parse.ParseObject>
struct IEqualityComparer_1_t6585;
// System.Collections.Generic.IEnumerable`1<Parse.ParseObject>
struct IEnumerable_1_t1056;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2615;
// System.Collections.Generic.IEnumerator`1<Parse.ParseObject>
struct IEnumerator_1_t1407;
// Parse.ParseObject[]
struct ParseObjectU5BU5D_t1405;
// Parse.ParseObject
struct ParseObject_t534;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.HashSet`1/Enumerator<Parse.ParseObject>
#include "System_Core_System_Collections_Generic_HashSet_1_Enumerator__6.h"

// System.Void System.Collections.Generic.HashSet`1<Parse.ParseObject>::.ctor()
// System.Collections.Generic.HashSet`1<System.Object>
#include "System_Core_System_Collections_Generic_HashSet_1_gen_3MethodDeclarations.h"
#define HashSet_1__ctor_m34090(__this, method) (void)HashSet_1__ctor_m18371_gshared((HashSet_1_t1425 *)__this, method)
// System.Void System.Collections.Generic.HashSet`1<Parse.ParseObject>::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
#define HashSet_1__ctor_m6700(__this, ___comparer, method) (void)HashSet_1__ctor_m6494_gshared((HashSet_1_t1425 *)__this, (Object_t*)___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<Parse.ParseObject>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define HashSet_1__ctor_m34091(__this, ___collection, method) (void)HashSet_1__ctor_m18372_gshared((HashSet_1_t1425 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.HashSet`1<Parse.ParseObject>::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
#define HashSet_1__ctor_m6702(__this, ___collection, ___comparer, method) (void)HashSet_1__ctor_m18373_gshared((HashSet_1_t1425 *)__this, (Object_t*)___collection, (Object_t*)___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<Parse.ParseObject>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define HashSet_1__ctor_m34092(__this, ___info, ___context, method) (void)HashSet_1__ctor_m18374_gshared((HashSet_1_t1425 *)__this, (SerializationInfo_t2615 *)___info, (StreamingContext_t2616 )___context, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1<Parse.ParseObject>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m34093(__this, method) (Object_t*)HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18375_gshared((HashSet_1_t1425 *)__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<Parse.ParseObject>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m34094(__this, method) (bool)HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18376_gshared((HashSet_1_t1425 *)__this, method)
// System.Void System.Collections.Generic.HashSet`1<Parse.ParseObject>::System.Collections.Generic.ICollection<T>.CopyTo(T[],System.Int32)
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m34095(__this, ___array, ___index, method) (void)HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m18377_gshared((HashSet_1_t1425 *)__this, (ObjectU5BU5D_t5*)___array, (int32_t)___index, method)
// System.Void System.Collections.Generic.HashSet`1<Parse.ParseObject>::System.Collections.Generic.ICollection<T>.Add(T)
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m34096(__this, ___item, method) (void)HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m18378_gshared((HashSet_1_t1425 *)__this, (Object_t *)___item, method)
// System.Collections.IEnumerator System.Collections.Generic.HashSet`1<Parse.ParseObject>::System.Collections.IEnumerable.GetEnumerator()
#define HashSet_1_System_Collections_IEnumerable_GetEnumerator_m34097(__this, method) (Object_t *)HashSet_1_System_Collections_IEnumerable_GetEnumerator_m18379_gshared((HashSet_1_t1425 *)__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<Parse.ParseObject>::get_Count()
#define HashSet_1_get_Count_m34098(__this, method) (int32_t)HashSet_1_get_Count_m18380_gshared((HashSet_1_t1425 *)__this, method)
// System.Void System.Collections.Generic.HashSet`1<Parse.ParseObject>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
#define HashSet_1_Init_m34099(__this, ___capacity, ___comparer, method) (void)HashSet_1_Init_m18381_gshared((HashSet_1_t1425 *)__this, (int32_t)___capacity, (Object_t*)___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<Parse.ParseObject>::InitArrays(System.Int32)
#define HashSet_1_InitArrays_m34100(__this, ___size, method) (void)HashSet_1_InitArrays_m18382_gshared((HashSet_1_t1425 *)__this, (int32_t)___size, method)
// System.Boolean System.Collections.Generic.HashSet`1<Parse.ParseObject>::SlotsContainsAt(System.Int32,System.Int32,T)
#define HashSet_1_SlotsContainsAt_m34101(__this, ___index, ___hash, ___item, method) (bool)HashSet_1_SlotsContainsAt_m18383_gshared((HashSet_1_t1425 *)__this, (int32_t)___index, (int32_t)___hash, (Object_t *)___item, method)
// System.Void System.Collections.Generic.HashSet`1<Parse.ParseObject>::CopyTo(T[])
#define HashSet_1_CopyTo_m34102(__this, ___array, method) (void)HashSet_1_CopyTo_m18384_gshared((HashSet_1_t1425 *)__this, (ObjectU5BU5D_t5*)___array, method)
// System.Void System.Collections.Generic.HashSet`1<Parse.ParseObject>::CopyTo(T[],System.Int32)
#define HashSet_1_CopyTo_m34103(__this, ___array, ___index, method) (void)HashSet_1_CopyTo_m18385_gshared((HashSet_1_t1425 *)__this, (ObjectU5BU5D_t5*)___array, (int32_t)___index, method)
// System.Void System.Collections.Generic.HashSet`1<Parse.ParseObject>::CopyTo(T[],System.Int32,System.Int32)
#define HashSet_1_CopyTo_m34104(__this, ___array, ___index, ___count, method) (void)HashSet_1_CopyTo_m18386_gshared((HashSet_1_t1425 *)__this, (ObjectU5BU5D_t5*)___array, (int32_t)___index, (int32_t)___count, method)
// System.Void System.Collections.Generic.HashSet`1<Parse.ParseObject>::Resize()
#define HashSet_1_Resize_m34105(__this, method) (void)HashSet_1_Resize_m18387_gshared((HashSet_1_t1425 *)__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<Parse.ParseObject>::GetLinkHashCode(System.Int32)
#define HashSet_1_GetLinkHashCode_m34106(__this, ___index, method) (int32_t)HashSet_1_GetLinkHashCode_m18388_gshared((HashSet_1_t1425 *)__this, (int32_t)___index, method)
// System.Int32 System.Collections.Generic.HashSet`1<Parse.ParseObject>::GetItemHashCode(T)
#define HashSet_1_GetItemHashCode_m34107(__this, ___item, method) (int32_t)HashSet_1_GetItemHashCode_m18389_gshared((HashSet_1_t1425 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<Parse.ParseObject>::Add(T)
#define HashSet_1_Add_m34108(__this, ___item, method) (bool)HashSet_1_Add_m18390_gshared((HashSet_1_t1425 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.HashSet`1<Parse.ParseObject>::Clear()
#define HashSet_1_Clear_m34109(__this, method) (void)HashSet_1_Clear_m18391_gshared((HashSet_1_t1425 *)__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<Parse.ParseObject>::Contains(T)
#define HashSet_1_Contains_m34110(__this, ___item, method) (bool)HashSet_1_Contains_m18392_gshared((HashSet_1_t1425 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<Parse.ParseObject>::Remove(T)
#define HashSet_1_Remove_m34111(__this, ___item, method) (bool)HashSet_1_Remove_m18393_gshared((HashSet_1_t1425 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.HashSet`1<Parse.ParseObject>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define HashSet_1_GetObjectData_m34112(__this, ___info, ___context, method) (void)HashSet_1_GetObjectData_m18394_gshared((HashSet_1_t1425 *)__this, (SerializationInfo_t2615 *)___info, (StreamingContext_t2616 )___context, method)
// System.Void System.Collections.Generic.HashSet`1<Parse.ParseObject>::OnDeserialization(System.Object)
#define HashSet_1_OnDeserialization_m34113(__this, ___sender, method) (void)HashSet_1_OnDeserialization_m18395_gshared((HashSet_1_t1425 *)__this, (Object_t *)___sender, method)
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<Parse.ParseObject>::GetEnumerator()
 Enumerator_t6586  HashSet_1_GetEnumerator_m34114 (HashSet_1_t1146 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
