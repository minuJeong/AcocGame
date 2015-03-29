#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.QuickSort`1<System.Object>
struct QuickSort_1_t6245;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t1034;
// System.Linq.SortContext`1<System.Object>
struct SortContext_1_t6243;
// System.Int32[]
struct Int32U5BU5D_t257;

// System.Void System.Linq.QuickSort`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Linq.SortContext`1<TElement>)
 void QuickSort_1__ctor_m31433_gshared (QuickSort_1_t6245 * __this, Object_t* ___source, SortContext_1_t6243 * ___context, MethodInfo* method);
#define QuickSort_1__ctor_m31433(__this, ___source, ___context, method) (void)QuickSort_1__ctor_m31433_gshared((QuickSort_1_t6245 *)__this, (Object_t*)___source, (SortContext_1_t6243 *)___context, method)
// System.Int32[] System.Linq.QuickSort`1<System.Object>::CreateIndexes(System.Int32)
 Int32U5BU5D_t257* QuickSort_1_CreateIndexes_m31434_gshared (Object_t * __this/* static, unused */, int32_t ___length, MethodInfo* method);
#define QuickSort_1_CreateIndexes_m31434(__this/* static, unused */, ___length, method) (Int32U5BU5D_t257*)QuickSort_1_CreateIndexes_m31434_gshared((Object_t *)__this/* static, unused */, (int32_t)___length, method)
// System.Void System.Linq.QuickSort`1<System.Object>::PerformSort()
 void QuickSort_1_PerformSort_m31435_gshared (QuickSort_1_t6245 * __this, MethodInfo* method);
#define QuickSort_1_PerformSort_m31435(__this, method) (void)QuickSort_1_PerformSort_m31435_gshared((QuickSort_1_t6245 *)__this, method)
// System.Int32 System.Linq.QuickSort`1<System.Object>::CompareItems(System.Int32,System.Int32)
 int32_t QuickSort_1_CompareItems_m31436_gshared (QuickSort_1_t6245 * __this, int32_t ___first_index, int32_t ___second_index, MethodInfo* method);
#define QuickSort_1_CompareItems_m31436(__this, ___first_index, ___second_index, method) (int32_t)QuickSort_1_CompareItems_m31436_gshared((QuickSort_1_t6245 *)__this, (int32_t)___first_index, (int32_t)___second_index, method)
// System.Int32 System.Linq.QuickSort`1<System.Object>::MedianOfThree(System.Int32,System.Int32)
 int32_t QuickSort_1_MedianOfThree_m31437_gshared (QuickSort_1_t6245 * __this, int32_t ___left, int32_t ___right, MethodInfo* method);
#define QuickSort_1_MedianOfThree_m31437(__this, ___left, ___right, method) (int32_t)QuickSort_1_MedianOfThree_m31437_gshared((QuickSort_1_t6245 *)__this, (int32_t)___left, (int32_t)___right, method)
// System.Void System.Linq.QuickSort`1<System.Object>::Sort(System.Int32,System.Int32)
 void QuickSort_1_Sort_m31438_gshared (QuickSort_1_t6245 * __this, int32_t ___left, int32_t ___right, MethodInfo* method);
#define QuickSort_1_Sort_m31438(__this, ___left, ___right, method) (void)QuickSort_1_Sort_m31438_gshared((QuickSort_1_t6245 *)__this, (int32_t)___left, (int32_t)___right, method)
// System.Void System.Linq.QuickSort`1<System.Object>::InsertionSort(System.Int32,System.Int32)
 void QuickSort_1_InsertionSort_m31439_gshared (QuickSort_1_t6245 * __this, int32_t ___left, int32_t ___right, MethodInfo* method);
#define QuickSort_1_InsertionSort_m31439(__this, ___left, ___right, method) (void)QuickSort_1_InsertionSort_m31439_gshared((QuickSort_1_t6245 *)__this, (int32_t)___left, (int32_t)___right, method)
// System.Void System.Linq.QuickSort`1<System.Object>::Swap(System.Int32,System.Int32)
 void QuickSort_1_Swap_m31440_gshared (QuickSort_1_t6245 * __this, int32_t ___left, int32_t ___right, MethodInfo* method);
#define QuickSort_1_Swap_m31440(__this, ___left, ___right, method) (void)QuickSort_1_Swap_m31440_gshared((QuickSort_1_t6245 *)__this, (int32_t)___left, (int32_t)___right, method)
// System.Collections.Generic.IEnumerable`1<TElement> System.Linq.QuickSort`1<System.Object>::Sort(System.Collections.Generic.IEnumerable`1<TElement>,System.Linq.SortContext`1<TElement>)
 Object_t* QuickSort_1_Sort_m31441_gshared (Object_t * __this/* static, unused */, Object_t* ___source, SortContext_1_t6243 * ___context, MethodInfo* method);
#define QuickSort_1_Sort_m31441(__this/* static, unused */, ___source, ___context, method) (Object_t*)QuickSort_1_Sort_m31441_gshared((Object_t *)__this/* static, unused */, (Object_t*)___source, (SortContext_1_t6243 *)___context, method)
