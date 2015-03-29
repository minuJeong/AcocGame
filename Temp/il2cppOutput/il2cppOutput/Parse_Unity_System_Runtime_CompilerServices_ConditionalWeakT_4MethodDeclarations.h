#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>
struct ConditionalWeakTable_2_t6173;
// System.Object
struct Object_t;
// System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.Object>
struct CreateValueCallback_t6174;

// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::.ctor()
 void ConditionalWeakTable_2__ctor_m30990_gshared (ConditionalWeakTable_2_t6173 * __this, MethodInfo* method);
#define ConditionalWeakTable_2__ctor_m30990(__this, method) (void)ConditionalWeakTable_2__ctor_m30990_gshared((ConditionalWeakTable_2_t6173 *)__this, method)
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::CleanUp()
 void ConditionalWeakTable_2_CleanUp_m30992_gshared (ConditionalWeakTable_2_t6173 * __this, MethodInfo* method);
#define ConditionalWeakTable_2_CleanUp_m30992(__this, method) (void)ConditionalWeakTable_2_CleanUp_m30992_gshared((ConditionalWeakTable_2_t6173 *)__this, method)
// TValue System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::GetValue(TKey,System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<TKey,TValue>)
 Object_t * ConditionalWeakTable_2_GetValue_m30993_gshared (ConditionalWeakTable_2_t6173 * __this, Object_t * ___key, CreateValueCallback_t6174 * ___createValueCallback, MethodInfo* method);
#define ConditionalWeakTable_2_GetValue_m30993(__this, ___key, ___createValueCallback, method) (Object_t *)ConditionalWeakTable_2_GetValue_m30993_gshared((ConditionalWeakTable_2_t6173 *)__this, (Object_t *)___key, (CreateValueCallback_t6174 *)___createValueCallback, method)
