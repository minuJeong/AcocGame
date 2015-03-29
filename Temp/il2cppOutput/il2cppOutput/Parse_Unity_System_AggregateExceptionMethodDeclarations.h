#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.AggregateException
struct AggregateException_t1224;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct ReadOnlyCollection_1_t1223;
// System.Collections.Generic.IEnumerable`1<System.Exception>
struct IEnumerable_1_t1225;
// System.String
struct String_t;

// System.Void System.AggregateException::.ctor(System.Collections.Generic.IEnumerable`1<System.Exception>)
 void AggregateException__ctor_m6022 (AggregateException_t1224 * __this, Object_t* ___innerExceptions, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception> System.AggregateException::get_InnerExceptions()
 ReadOnlyCollection_1_t1223 * AggregateException_get_InnerExceptions_m6023 (AggregateException_t1224 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AggregateException::set_InnerExceptions(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>)
 void AggregateException_set_InnerExceptions_m6024 (AggregateException_t1224 * __this, ReadOnlyCollection_1_t1223 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AggregateException System.AggregateException::Flatten()
 AggregateException_t1224 * AggregateException_Flatten_m6025 (AggregateException_t1224 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AggregateException::ToString()
 String_t* AggregateException_ToString_m6026 (AggregateException_t1224 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
