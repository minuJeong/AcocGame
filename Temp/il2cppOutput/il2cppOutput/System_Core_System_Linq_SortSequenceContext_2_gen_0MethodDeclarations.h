#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.SortSequenceContext`2<System.Object,System.IComparable>
struct SortSequenceContext_2_t6252;
// System.Func`2<System.Object,System.IComparable>
struct Func_2_t1035;
// System.Collections.Generic.IComparer`1<System.IComparable>
struct IComparer_1_t6248;
// System.Linq.SortContext`1<System.Object>
struct SortContext_1_t6244;
// System.Object[]
struct ObjectU5BU5D_t5;
// System.Linq.SortDirection
#include "System_Core_System_Linq_SortDirection.h"

// System.Void System.Linq.SortSequenceContext`2<System.Object,System.IComparable>::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Linq.SortDirection,System.Linq.SortContext`1<TElement>)
// System.Linq.SortSequenceContext`2<System.Object,System.Object>
#include "System_Core_System_Linq_SortSequenceContext_2_genMethodDeclarations.h"
#define SortSequenceContext_2__ctor_m31462(__this, ___selector, ___comparer, ___direction, ___child_context, method) (void)SortSequenceContext_2__ctor_m31433_gshared((SortSequenceContext_2_t6245 *)__this, (Func_2_t1092 *)___selector, (Object_t*)___comparer, (int32_t)___direction, (SortContext_1_t6244 *)___child_context, method)
// System.Void System.Linq.SortSequenceContext`2<System.Object,System.IComparable>::Initialize(TElement[])
#define SortSequenceContext_2_Initialize_m31463(__this, ___elements, method) (void)SortSequenceContext_2_Initialize_m31434_gshared((SortSequenceContext_2_t6245 *)__this, (ObjectU5BU5D_t5*)___elements, method)
// System.Int32 System.Linq.SortSequenceContext`2<System.Object,System.IComparable>::Compare(System.Int32,System.Int32)
#define SortSequenceContext_2_Compare_m31464(__this, ___first_index, ___second_index, method) (int32_t)SortSequenceContext_2_Compare_m31435_gshared((SortSequenceContext_2_t6245 *)__this, (int32_t)___first_index, (int32_t)___second_index, method)
