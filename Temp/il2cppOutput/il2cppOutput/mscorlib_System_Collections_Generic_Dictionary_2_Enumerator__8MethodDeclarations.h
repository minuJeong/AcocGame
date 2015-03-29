#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_t2419;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t473;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
 void Enumerator__ctor_m7711_gshared (Enumerator_t2419 * __this, Dictionary_2_t473 * ___dictionary, MethodInfo* method);
#define Enumerator__ctor_m7711(__this, ___dictionary, method) (void)Enumerator__ctor_m7711_gshared((Enumerator_t2419 *)__this, (Dictionary_2_t473 *)___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
 Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m15962_gshared (Enumerator_t2419 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m15962(__this, method) (Object_t *)Enumerator_System_Collections_IEnumerator_get_Current_m15962_gshared((Enumerator_t2419 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.Reset()
 void Enumerator_System_Collections_IEnumerator_Reset_m15963_gshared (Enumerator_t2419 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m15963(__this, method) (void)Enumerator_System_Collections_IEnumerator_Reset_m15963_gshared((Enumerator_t2419 *)__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
 DictionaryEntry_t96  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m15964_gshared (Enumerator_t2419 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m15964(__this, method) (DictionaryEntry_t96 )Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m15964_gshared((Enumerator_t2419 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
 Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m15965_gshared (Enumerator_t2419 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m15965(__this, method) (Object_t *)Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m15965_gshared((Enumerator_t2419 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
 Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m15966_gshared (Enumerator_t2419 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m15966(__this, method) (Object_t *)Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m15966_gshared((Enumerator_t2419 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
 bool Enumerator_MoveNext_m15967_gshared (Enumerator_t2419 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m15967(__this, method) (bool)Enumerator_MoveNext_m15967_gshared((Enumerator_t2419 *)__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
 KeyValuePair_2_t2418  Enumerator_get_Current_m15968 (Enumerator_t2419 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentKey()
 Object_t * Enumerator_get_CurrentKey_m15969_gshared (Enumerator_t2419 * __this, MethodInfo* method);
#define Enumerator_get_CurrentKey_m15969(__this, method) (Object_t *)Enumerator_get_CurrentKey_m15969_gshared((Enumerator_t2419 *)__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentValue()
 Object_t * Enumerator_get_CurrentValue_m15970_gshared (Enumerator_t2419 * __this, MethodInfo* method);
#define Enumerator_get_CurrentValue_m15970(__this, method) (Object_t *)Enumerator_get_CurrentValue_m15970_gshared((Enumerator_t2419 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Reset()
 void Enumerator_Reset_m15971_gshared (Enumerator_t2419 * __this, MethodInfo* method);
#define Enumerator_Reset_m15971(__this, method) (void)Enumerator_Reset_m15971_gshared((Enumerator_t2419 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyState()
 void Enumerator_VerifyState_m15972_gshared (Enumerator_t2419 * __this, MethodInfo* method);
#define Enumerator_VerifyState_m15972(__this, method) (void)Enumerator_VerifyState_m15972_gshared((Enumerator_t2419 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyCurrent()
 void Enumerator_VerifyCurrent_m15973_gshared (Enumerator_t2419 * __this, MethodInfo* method);
#define Enumerator_VerifyCurrent_m15973(__this, method) (void)Enumerator_VerifyCurrent_m15973_gshared((Enumerator_t2419 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
 void Enumerator_Dispose_m15974_gshared (Enumerator_t2419 * __this, MethodInfo* method);
#define Enumerator_Dispose_m15974(__this, method) (void)Enumerator_Dispose_m15974_gshared((Enumerator_t2419 *)__this, method)
