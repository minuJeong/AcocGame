#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t5347;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t88;
// System.Object[]
struct ObjectU5BU5D_t5;
// System.Predicate`1<System.Object>
struct Predicate_1_t4051;
// System.Comparison`1<System.Object>
struct Comparison_1_t4052;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
 void IndexedSet_1__ctor_m24321_gshared (IndexedSet_1_t5347 * __this, MethodInfo* method);
#define IndexedSet_1__ctor_m24321(__this, method) (void)IndexedSet_1__ctor_m24321_gshared((IndexedSet_1_t5347 *)__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m24323_gshared (IndexedSet_1_t5347 * __this, MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m24323(__this, method) (Object_t *)IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m24323_gshared((IndexedSet_1_t5347 *)__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
 void IndexedSet_1_Add_m24324_gshared (IndexedSet_1_t5347 * __this, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_Add_m24324(__this, ___item, method) (void)IndexedSet_1_Add_m24324_gshared((IndexedSet_1_t5347 *)__this, (Object_t *)___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
 bool IndexedSet_1_Remove_m24325_gshared (IndexedSet_1_t5347 * __this, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_Remove_m24325(__this, ___item, method) (bool)IndexedSet_1_Remove_m24325_gshared((IndexedSet_1_t5347 *)__this, (Object_t *)___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
 Object_t* IndexedSet_1_GetEnumerator_m24327_gshared (IndexedSet_1_t5347 * __this, MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m24327(__this, method) (Object_t*)IndexedSet_1_GetEnumerator_m24327_gshared((IndexedSet_1_t5347 *)__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
 void IndexedSet_1_Clear_m24328_gshared (IndexedSet_1_t5347 * __this, MethodInfo* method);
#define IndexedSet_1_Clear_m24328(__this, method) (void)IndexedSet_1_Clear_m24328_gshared((IndexedSet_1_t5347 *)__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
 bool IndexedSet_1_Contains_m24330_gshared (IndexedSet_1_t5347 * __this, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_Contains_m24330(__this, ___item, method) (bool)IndexedSet_1_Contains_m24330_gshared((IndexedSet_1_t5347 *)__this, (Object_t *)___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
 void IndexedSet_1_CopyTo_m24332_gshared (IndexedSet_1_t5347 * __this, ObjectU5BU5D_t5* ___array, int32_t ___arrayIndex, MethodInfo* method);
#define IndexedSet_1_CopyTo_m24332(__this, ___array, ___arrayIndex, method) (void)IndexedSet_1_CopyTo_m24332_gshared((IndexedSet_1_t5347 *)__this, (ObjectU5BU5D_t5*)___array, (int32_t)___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
 int32_t IndexedSet_1_get_Count_m24333_gshared (IndexedSet_1_t5347 * __this, MethodInfo* method);
#define IndexedSet_1_get_Count_m24333(__this, method) (int32_t)IndexedSet_1_get_Count_m24333_gshared((IndexedSet_1_t5347 *)__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
 bool IndexedSet_1_get_IsReadOnly_m24335_gshared (IndexedSet_1_t5347 * __this, MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m24335(__this, method) (bool)IndexedSet_1_get_IsReadOnly_m24335_gshared((IndexedSet_1_t5347 *)__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
 int32_t IndexedSet_1_IndexOf_m24337_gshared (IndexedSet_1_t5347 * __this, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_IndexOf_m24337(__this, ___item, method) (int32_t)IndexedSet_1_IndexOf_m24337_gshared((IndexedSet_1_t5347 *)__this, (Object_t *)___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
 void IndexedSet_1_Insert_m24339_gshared (IndexedSet_1_t5347 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_Insert_m24339(__this, ___index, ___item, method) (void)IndexedSet_1_Insert_m24339_gshared((IndexedSet_1_t5347 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
 void IndexedSet_1_RemoveAt_m24341_gshared (IndexedSet_1_t5347 * __this, int32_t ___index, MethodInfo* method);
#define IndexedSet_1_RemoveAt_m24341(__this, ___index, method) (void)IndexedSet_1_RemoveAt_m24341_gshared((IndexedSet_1_t5347 *)__this, (int32_t)___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
 Object_t * IndexedSet_1_get_Item_m24342_gshared (IndexedSet_1_t5347 * __this, int32_t ___index, MethodInfo* method);
#define IndexedSet_1_get_Item_m24342(__this, ___index, method) (Object_t *)IndexedSet_1_get_Item_m24342_gshared((IndexedSet_1_t5347 *)__this, (int32_t)___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
 void IndexedSet_1_set_Item_m24344_gshared (IndexedSet_1_t5347 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define IndexedSet_1_set_Item_m24344(__this, ___index, ___value, method) (void)IndexedSet_1_set_Item_m24344_gshared((IndexedSet_1_t5347 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
 void IndexedSet_1_RemoveAll_m24345_gshared (IndexedSet_1_t5347 * __this, Predicate_1_t4051 * ___match, MethodInfo* method);
#define IndexedSet_1_RemoveAll_m24345(__this, ___match, method) (void)IndexedSet_1_RemoveAll_m24345_gshared((IndexedSet_1_t5347 *)__this, (Predicate_1_t4051 *)___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
 void IndexedSet_1_Sort_m24346_gshared (IndexedSet_1_t5347 * __this, Comparison_1_t4052 * ___sortLayoutFunction, MethodInfo* method);
#define IndexedSet_1_Sort_m24346(__this, ___sortLayoutFunction, method) (void)IndexedSet_1_Sort_m24346_gshared((IndexedSet_1_t5347 *)__this, (Comparison_1_t4052 *)___sortLayoutFunction, method)
