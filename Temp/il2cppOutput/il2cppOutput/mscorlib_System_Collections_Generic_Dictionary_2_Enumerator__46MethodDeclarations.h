#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>
struct Enumerator_t6674;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>
struct Tuple_2_t1507;
// System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>
struct Dictionary_2_t1521;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_41.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__8MethodDeclarations.h"
#define Enumerator__ctor_m34878(__this, ___dictionary, method) (void)Enumerator__ctor_m7711_gshared((Enumerator_t2419 *)__this, (Dictionary_2_t473 *)___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::System.Collections.IEnumerator.get_Current()
#define Enumerator_System_Collections_IEnumerator_get_Current_m34879(__this, method) (Object_t *)Enumerator_System_Collections_IEnumerator_get_Current_m15962_gshared((Enumerator_t2419 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::System.Collections.IEnumerator.Reset()
#define Enumerator_System_Collections_IEnumerator_Reset_m34880(__this, method) (void)Enumerator_System_Collections_IEnumerator_Reset_m15963_gshared((Enumerator_t2419 *)__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::System.Collections.IDictionaryEnumerator.get_Entry()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m34881(__this, method) (DictionaryEntry_t96 )Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m15964_gshared((Enumerator_t2419 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::System.Collections.IDictionaryEnumerator.get_Key()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m34882(__this, method) (Object_t *)Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m15965_gshared((Enumerator_t2419 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::System.Collections.IDictionaryEnumerator.get_Value()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m34883(__this, method) (Object_t *)Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m15966_gshared((Enumerator_t2419 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::MoveNext()
#define Enumerator_MoveNext_m34884(__this, method) (bool)Enumerator_MoveNext_m15967_gshared((Enumerator_t2419 *)__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::get_Current()
 KeyValuePair_2_t6391  Enumerator_get_Current_m34885 (Enumerator_t6674 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::get_CurrentKey()
#define Enumerator_get_CurrentKey_m34886(__this, method) (String_t*)Enumerator_get_CurrentKey_m15969_gshared((Enumerator_t2419 *)__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::get_CurrentValue()
#define Enumerator_get_CurrentValue_m34887(__this, method) (Tuple_2_t1507 *)Enumerator_get_CurrentValue_m15970_gshared((Enumerator_t2419 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::Reset()
#define Enumerator_Reset_m34888(__this, method) (void)Enumerator_Reset_m15971_gshared((Enumerator_t2419 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::VerifyState()
#define Enumerator_VerifyState_m34889(__this, method) (void)Enumerator_VerifyState_m15972_gshared((Enumerator_t2419 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::VerifyCurrent()
#define Enumerator_VerifyCurrent_m34890(__this, method) (void)Enumerator_VerifyCurrent_m15973_gshared((Enumerator_t2419 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::Dispose()
#define Enumerator_Dispose_m34891(__this, method) (void)Enumerator_Dispose_m15974_gshared((Enumerator_t2419 *)__this, method)
