#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>
struct Enumerator_t6745;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>
struct Task_1_t1154;
// System.Collections.Generic.Dictionary`2<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>
struct Dictionary_2_t1491;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_49.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__8MethodDeclarations.h"
#define Enumerator__ctor_m35472(__this, ___dictionary, method) (void)Enumerator__ctor_m7711_gshared((Enumerator_t2419 *)__this, (Dictionary_2_t473 *)___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::System.Collections.IEnumerator.get_Current()
#define Enumerator_System_Collections_IEnumerator_get_Current_m35473(__this, method) (Object_t *)Enumerator_System_Collections_IEnumerator_get_Current_m15962_gshared((Enumerator_t2419 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::System.Collections.IEnumerator.Reset()
#define Enumerator_System_Collections_IEnumerator_Reset_m35474(__this, method) (void)Enumerator_System_Collections_IEnumerator_Reset_m15963_gshared((Enumerator_t2419 *)__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::System.Collections.IDictionaryEnumerator.get_Entry()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m35475(__this, method) (DictionaryEntry_t96 )Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m15964_gshared((Enumerator_t2419 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::System.Collections.IDictionaryEnumerator.get_Key()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m35476(__this, method) (Object_t *)Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m15965_gshared((Enumerator_t2419 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::System.Collections.IDictionaryEnumerator.get_Value()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m35477(__this, method) (Object_t *)Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m15966_gshared((Enumerator_t2419 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::MoveNext()
#define Enumerator_MoveNext_m35478(__this, method) (bool)Enumerator_MoveNext_m15967_gshared((Enumerator_t2419 *)__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::get_Current()
 KeyValuePair_2_t6743  Enumerator_get_Current_m35479 (Enumerator_t6745 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::get_CurrentKey()
#define Enumerator_get_CurrentKey_m35480(__this, method) (String_t*)Enumerator_get_CurrentKey_m15969_gshared((Enumerator_t2419 *)__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::get_CurrentValue()
#define Enumerator_get_CurrentValue_m35481(__this, method) (Task_1_t1154 *)Enumerator_get_CurrentValue_m15970_gshared((Enumerator_t2419 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::Reset()
#define Enumerator_Reset_m35482(__this, method) (void)Enumerator_Reset_m15971_gshared((Enumerator_t2419 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::VerifyState()
#define Enumerator_VerifyState_m35483(__this, method) (void)Enumerator_VerifyState_m15972_gshared((Enumerator_t2419 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::VerifyCurrent()
#define Enumerator_VerifyCurrent_m35484(__this, method) (void)Enumerator_VerifyCurrent_m15973_gshared((Enumerator_t2419 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::Dispose()
#define Enumerator_Dispose_m35485(__this, method) (void)Enumerator_Dispose_m15974_gshared((Enumerator_t2419 *)__this, method)
