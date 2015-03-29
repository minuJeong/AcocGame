#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t2420;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t473;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
 void ShimEnumerator__ctor_m7712_gshared (ShimEnumerator_t2420 * __this, Dictionary_2_t473 * ___host, MethodInfo* method);
#define ShimEnumerator__ctor_m7712(__this, ___host, method) (void)ShimEnumerator__ctor_m7712_gshared((ShimEnumerator_t2420 *)__this, (Dictionary_2_t473 *)___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
 bool ShimEnumerator_MoveNext_m16010_gshared (ShimEnumerator_t2420 * __this, MethodInfo* method);
#define ShimEnumerator_MoveNext_m16010(__this, method) (bool)ShimEnumerator_MoveNext_m16010_gshared((ShimEnumerator_t2420 *)__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
 DictionaryEntry_t96  ShimEnumerator_get_Entry_m16011_gshared (ShimEnumerator_t2420 * __this, MethodInfo* method);
#define ShimEnumerator_get_Entry_m16011(__this, method) (DictionaryEntry_t96 )ShimEnumerator_get_Entry_m16011_gshared((ShimEnumerator_t2420 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
 Object_t * ShimEnumerator_get_Key_m16012_gshared (ShimEnumerator_t2420 * __this, MethodInfo* method);
#define ShimEnumerator_get_Key_m16012(__this, method) (Object_t *)ShimEnumerator_get_Key_m16012_gshared((ShimEnumerator_t2420 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
 Object_t * ShimEnumerator_get_Value_m16013_gshared (ShimEnumerator_t2420 * __this, MethodInfo* method);
#define ShimEnumerator_get_Value_m16013(__this, method) (Object_t *)ShimEnumerator_get_Value_m16013_gshared((ShimEnumerator_t2420 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
 Object_t * ShimEnumerator_get_Current_m16014_gshared (ShimEnumerator_t2420 * __this, MethodInfo* method);
#define ShimEnumerator_get_Current_m16014(__this, method) (Object_t *)ShimEnumerator_get_Current_m16014_gshared((ShimEnumerator_t2420 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::Reset()
 void ShimEnumerator_Reset_m16015_gshared (ShimEnumerator_t2420 * __this, MethodInfo* method);
#define ShimEnumerator_Reset_m16015(__this, method) (void)ShimEnumerator_Reset_m16015_gshared((ShimEnumerator_t2420 *)__this, method)
