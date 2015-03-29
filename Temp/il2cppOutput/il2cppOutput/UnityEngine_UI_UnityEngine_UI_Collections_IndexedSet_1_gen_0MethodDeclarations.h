#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>
struct IndexedSet_1_t797;
// UnityEngine.UI.Graphic
struct Graphic_t648;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Graphic>
struct IEnumerator_1_t5483;
// UnityEngine.UI.Graphic[]
struct GraphicU5BU5D_t5481;
// System.Predicate`1<UnityEngine.UI.Graphic>
struct Predicate_1_t5485;
// System.Comparison`1<UnityEngine.UI.Graphic>
struct Comparison_1_t652;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::.ctor()
// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_Collections_IndexedSet_1_gen_1MethodDeclarations.h"
#define IndexedSet_1__ctor_m4262(__this, method) (void)IndexedSet_1__ctor_m24324_gshared((IndexedSet_1_t5348 *)__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::System.Collections.IEnumerable.GetEnumerator()
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m25713(__this, method) (Object_t *)IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m24326_gshared((IndexedSet_1_t5348 *)__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Add(T)
#define IndexedSet_1_Add_m4261(__this, ___item, method) (void)IndexedSet_1_Add_m24327_gshared((IndexedSet_1_t5348 *)__this, (Object_t *)___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Remove(T)
#define IndexedSet_1_Remove_m4264(__this, ___item, method) (bool)IndexedSet_1_Remove_m24328_gshared((IndexedSet_1_t5348 *)__this, (Object_t *)___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::GetEnumerator()
#define IndexedSet_1_GetEnumerator_m25714(__this, method) (Object_t*)IndexedSet_1_GetEnumerator_m24330_gshared((IndexedSet_1_t5348 *)__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Clear()
#define IndexedSet_1_Clear_m25715(__this, method) (void)IndexedSet_1_Clear_m24331_gshared((IndexedSet_1_t5348 *)__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Contains(T)
#define IndexedSet_1_Contains_m25716(__this, ___item, method) (bool)IndexedSet_1_Contains_m24333_gshared((IndexedSet_1_t5348 *)__this, (Object_t *)___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::CopyTo(T[],System.Int32)
#define IndexedSet_1_CopyTo_m25717(__this, ___array, ___arrayIndex, method) (void)IndexedSet_1_CopyTo_m24335_gshared((IndexedSet_1_t5348 *)__this, (ObjectU5BU5D_t5*)___array, (int32_t)___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Count()
#define IndexedSet_1_get_Count_m25718(__this, method) (int32_t)IndexedSet_1_get_Count_m24336_gshared((IndexedSet_1_t5348 *)__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_IsReadOnly()
#define IndexedSet_1_get_IsReadOnly_m25719(__this, method) (bool)IndexedSet_1_get_IsReadOnly_m24338_gshared((IndexedSet_1_t5348 *)__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::IndexOf(T)
#define IndexedSet_1_IndexOf_m25720(__this, ___item, method) (int32_t)IndexedSet_1_IndexOf_m24340_gshared((IndexedSet_1_t5348 *)__this, (Object_t *)___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Insert(System.Int32,T)
#define IndexedSet_1_Insert_m25721(__this, ___index, ___item, method) (void)IndexedSet_1_Insert_m24342_gshared((IndexedSet_1_t5348 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAt(System.Int32)
#define IndexedSet_1_RemoveAt_m25722(__this, ___index, method) (void)IndexedSet_1_RemoveAt_m24344_gshared((IndexedSet_1_t5348 *)__this, (int32_t)___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Item(System.Int32)
#define IndexedSet_1_get_Item_m25723(__this, ___index, method) (Graphic_t648 *)IndexedSet_1_get_Item_m24345_gshared((IndexedSet_1_t5348 *)__this, (int32_t)___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::set_Item(System.Int32,T)
#define IndexedSet_1_set_Item_m25724(__this, ___index, ___value, method) (void)IndexedSet_1_set_Item_m24347_gshared((IndexedSet_1_t5348 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAll(System.Predicate`1<T>)
#define IndexedSet_1_RemoveAll_m25725(__this, ___match, method) (void)IndexedSet_1_RemoveAll_m24348_gshared((IndexedSet_1_t5348 *)__this, (Predicate_1_t4052 *)___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Sort(System.Comparison`1<T>)
#define IndexedSet_1_Sort_m25726(__this, ___sortLayoutFunction, method) (void)IndexedSet_1_Sort_m24349_gshared((IndexedSet_1_t5348 *)__this, (Comparison_1_t4053 *)___sortLayoutFunction, method)
