﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.OrderedSequence`2<System.Object,System.IComparable>
struct OrderedSequence_2_t6249;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t1034;
// System.Func`2<System.Object,System.IComparable>
struct Func_2_t1035;
// System.Collections.Generic.IComparer`1<System.IComparable>
struct IComparer_1_t6248;
// System.Linq.SortContext`1<System.Object>
struct SortContext_1_t6244;
// System.Linq.SortDirection
#include "System_Core_System_Linq_SortDirection.h"

// System.Void System.Linq.OrderedSequence`2<System.Object,System.IComparable>::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Linq.SortDirection)
// System.Linq.OrderedSequence`2<System.Object,System.Object>
#include "System_Core_System_Linq_OrderedSequence_2_genMethodDeclarations.h"
#define OrderedSequence_2__ctor_m31453(__this, ___source, ___key_selector, ___comparer, ___direction, method) (void)OrderedSequence_2__ctor_m31426_gshared((OrderedSequence_2_t6243 *)__this, (Object_t*)___source, (Func_2_t1092 *)___key_selector, (Object_t*)___comparer, (int32_t)___direction, method)
// System.Linq.SortContext`1<TElement> System.Linq.OrderedSequence`2<System.Object,System.IComparable>::CreateContext(System.Linq.SortContext`1<TElement>)
#define OrderedSequence_2_CreateContext_m31454(__this, ___current, method) (SortContext_1_t6244 *)OrderedSequence_2_CreateContext_m31427_gshared((OrderedSequence_2_t6243 *)__this, (SortContext_1_t6244 *)___current, method)
// System.Collections.Generic.IEnumerable`1<TElement> System.Linq.OrderedSequence`2<System.Object,System.IComparable>::Sort(System.Collections.Generic.IEnumerable`1<TElement>)
#define OrderedSequence_2_Sort_m31455(__this, ___source, method) (Object_t*)OrderedSequence_2_Sort_m31428_gshared((OrderedSequence_2_t6243 *)__this, (Object_t*)___source, method)
