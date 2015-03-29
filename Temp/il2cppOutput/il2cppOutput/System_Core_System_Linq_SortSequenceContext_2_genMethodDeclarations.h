#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.SortSequenceContext`2<System.Object,System.Object>
struct SortSequenceContext_2_t6244;
// System.Func`2<System.Object,System.Object>
struct Func_2_t1092;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t6241;
// System.Linq.SortContext`1<System.Object>
struct SortContext_1_t6243;
// System.Object[]
struct ObjectU5BU5D_t5;
// System.Linq.SortDirection
#include "System_Core_System_Linq_SortDirection.h"

// System.Void System.Linq.SortSequenceContext`2<System.Object,System.Object>::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Linq.SortDirection,System.Linq.SortContext`1<TElement>)
 void SortSequenceContext_2__ctor_m31430_gshared (SortSequenceContext_2_t6244 * __this, Func_2_t1092 * ___selector, Object_t* ___comparer, int32_t ___direction, SortContext_1_t6243 * ___child_context, MethodInfo* method);
#define SortSequenceContext_2__ctor_m31430(__this, ___selector, ___comparer, ___direction, ___child_context, method) (void)SortSequenceContext_2__ctor_m31430_gshared((SortSequenceContext_2_t6244 *)__this, (Func_2_t1092 *)___selector, (Object_t*)___comparer, (int32_t)___direction, (SortContext_1_t6243 *)___child_context, method)
// System.Void System.Linq.SortSequenceContext`2<System.Object,System.Object>::Initialize(TElement[])
 void SortSequenceContext_2_Initialize_m31431_gshared (SortSequenceContext_2_t6244 * __this, ObjectU5BU5D_t5* ___elements, MethodInfo* method);
#define SortSequenceContext_2_Initialize_m31431(__this, ___elements, method) (void)SortSequenceContext_2_Initialize_m31431_gshared((SortSequenceContext_2_t6244 *)__this, (ObjectU5BU5D_t5*)___elements, method)
// System.Int32 System.Linq.SortSequenceContext`2<System.Object,System.Object>::Compare(System.Int32,System.Int32)
 int32_t SortSequenceContext_2_Compare_m31432_gshared (SortSequenceContext_2_t6244 * __this, int32_t ___first_index, int32_t ___second_index, MethodInfo* method);
#define SortSequenceContext_2_Compare_m31432(__this, ___first_index, ___second_index, method) (int32_t)SortSequenceContext_2_Compare_m31432_gshared((SortSequenceContext_2_t6244 *)__this, (int32_t)___first_index, (int32_t)___second_index, method)
