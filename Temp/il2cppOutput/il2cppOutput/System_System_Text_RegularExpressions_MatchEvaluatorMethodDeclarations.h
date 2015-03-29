#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.MatchEvaluator
struct MatchEvaluator_t1029;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Text.RegularExpressions.Match
struct Match_t1032;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Text.RegularExpressions.MatchEvaluator::.ctor(System.Object,System.IntPtr)
 void MatchEvaluator__ctor_m6310 (MatchEvaluator_t1029 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.MatchEvaluator::Invoke(System.Text.RegularExpressions.Match)
 String_t* MatchEvaluator_Invoke_m9766 (MatchEvaluator_t1029 * __this, Match_t1032 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Text.RegularExpressions.MatchEvaluator::BeginInvoke(System.Text.RegularExpressions.Match,System.AsyncCallback,System.Object)
 Object_t * MatchEvaluator_BeginInvoke_m9767 (MatchEvaluator_t1029 * __this, Match_t1032 * ___match, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.MatchEvaluator::EndInvoke(System.IAsyncResult)
 String_t* MatchEvaluator_EndInvoke_m9768 (MatchEvaluator_t1029 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
