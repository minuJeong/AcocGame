#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.LockSet
struct LockSet_t1037;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t1034;
// System.IComparable
struct IComparable_t78;
// System.Object
struct Object_t;

// System.Void Parse.Internal.LockSet::.ctor(System.Collections.Generic.IEnumerable`1<System.Object>)
 void LockSet__ctor_m5380 (LockSet_t1037 * __this, Object_t* ___mutexes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.LockSet::Enter()
 void LockSet_Enter_m5381 (LockSet_t1037 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.LockSet::Exit()
 void LockSet_Exit_m5382 (LockSet_t1037 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IComparable Parse.Internal.LockSet::GetStableId(System.Object)
 Object_t * LockSet_GetStableId_m5383 (Object_t * __this/* static, unused */, Object_t * ___mutex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IComparable Parse.Internal.LockSet::<.ctor>b__0(System.Object)
 Object_t * LockSet_U3C_ctorU3Eb__0_m5384 (Object_t * __this/* static, unused */, Object_t * ___mutex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IComparable Parse.Internal.LockSet::<GetStableId>b__2(System.Object)
 Object_t * LockSet_U3CGetStableIdU3Eb__2_m5385 (Object_t * __this/* static, unused */, Object_t * ___k, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.LockSet::.cctor()
 void LockSet__cctor_m5386 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
