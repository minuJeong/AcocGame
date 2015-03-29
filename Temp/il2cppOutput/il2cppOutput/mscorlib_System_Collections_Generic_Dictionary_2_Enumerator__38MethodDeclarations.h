#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>
struct Enumerator_t6267;
// System.Object
struct Object_t;
// System.Tuple`2<System.Type,System.Type>
struct Tuple_2_t1400;
// System.Func`3<System.Object,System.Object,System.Object>
struct Func_3_t1048;
// System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>
struct Dictionary_2_t1399;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_39.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__8MethodDeclarations.h"
#define Enumerator__ctor_m31578(__this, ___dictionary, method) (void)Enumerator__ctor_m7711_gshared((Enumerator_t2419 *)__this, (Dictionary_2_t473 *)___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
#define Enumerator_System_Collections_IEnumerator_get_Current_m31579(__this, method) (Object_t *)Enumerator_System_Collections_IEnumerator_get_Current_m15962_gshared((Enumerator_t2419 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.IEnumerator.Reset()
#define Enumerator_System_Collections_IEnumerator_Reset_m31580(__this, method) (void)Enumerator_System_Collections_IEnumerator_Reset_m15963_gshared((Enumerator_t2419 *)__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Entry()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m31581(__this, method) (DictionaryEntry_t96 )Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m15964_gshared((Enumerator_t2419 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Key()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m31582(__this, method) (Object_t *)Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m15965_gshared((Enumerator_t2419 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Value()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m31583(__this, method) (Object_t *)Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m15966_gshared((Enumerator_t2419 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::MoveNext()
#define Enumerator_MoveNext_m31584(__this, method) (bool)Enumerator_MoveNext_m15967_gshared((Enumerator_t2419 *)__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::get_Current()
 KeyValuePair_2_t6254  Enumerator_get_Current_m31585 (Enumerator_t6267 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::get_CurrentKey()
#define Enumerator_get_CurrentKey_m31586(__this, method) (Tuple_2_t1400 *)Enumerator_get_CurrentKey_m15969_gshared((Enumerator_t2419 *)__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::get_CurrentValue()
#define Enumerator_get_CurrentValue_m31587(__this, method) (Func_3_t1048 *)Enumerator_get_CurrentValue_m15970_gshared((Enumerator_t2419 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::Reset()
#define Enumerator_Reset_m31588(__this, method) (void)Enumerator_Reset_m15971_gshared((Enumerator_t2419 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::VerifyState()
#define Enumerator_VerifyState_m31589(__this, method) (void)Enumerator_VerifyState_m15972_gshared((Enumerator_t2419 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::VerifyCurrent()
#define Enumerator_VerifyCurrent_m31590(__this, method) (void)Enumerator_VerifyCurrent_m15973_gshared((Enumerator_t2419 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::Dispose()
#define Enumerator_Dispose_m31591(__this, method) (void)Enumerator_Dispose_m15974_gshared((Enumerator_t2419 *)__this, method)
