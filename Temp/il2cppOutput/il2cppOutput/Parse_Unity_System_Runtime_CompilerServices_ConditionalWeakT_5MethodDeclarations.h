#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>
struct Reference_t6176;
// System.WeakReference
struct WeakReference_t983;
// System.Object
struct Object_t;

// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>::.ctor(TKey)
 void Reference__ctor_m31000_gshared (Reference_t6176 * __this, Object_t * ___obj, MethodInfo* method);
#define Reference__ctor_m31000(__this, ___obj, method) (void)Reference__ctor_m31000_gshared((Reference_t6176 *)__this, (Object_t *)___obj, method)
// System.WeakReference System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>::get_WeakReference()
 WeakReference_t983 * Reference_get_WeakReference_m31001_gshared (Reference_t6176 * __this, MethodInfo* method);
#define Reference_get_WeakReference_m31001(__this, method) (WeakReference_t983 *)Reference_get_WeakReference_m31001_gshared((Reference_t6176 *)__this, method)
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>::set_WeakReference(System.WeakReference)
 void Reference_set_WeakReference_m31002_gshared (Reference_t6176 * __this, WeakReference_t983 * ___value, MethodInfo* method);
#define Reference_set_WeakReference_m31002(__this, ___value, method) (void)Reference_set_WeakReference_m31002_gshared((Reference_t6176 *)__this, (WeakReference_t983 *)___value, method)
// TKey System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>::get_Value()
 Object_t * Reference_get_Value_m31003_gshared (Reference_t6176 * __this, MethodInfo* method);
#define Reference_get_Value_m31003(__this, method) (Object_t *)Reference_get_Value_m31003_gshared((Reference_t6176 *)__this, method)
// System.Int32 System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>::GetHashCode()
 int32_t Reference_GetHashCode_m31004_gshared (Reference_t6176 * __this, MethodInfo* method);
#define Reference_GetHashCode_m31004(__this, method) (int32_t)Reference_GetHashCode_m31004_gshared((Reference_t6176 *)__this, method)
// System.Boolean System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>::Equals(System.Object)
 bool Reference_Equals_m31005_gshared (Reference_t6176 * __this, Object_t * ___obj, MethodInfo* method);
#define Reference_Equals_m31005(__this, ___obj, method) (bool)Reference_Equals_m31005_gshared((Reference_t6176 *)__this, (Object_t *)___obj, method)
