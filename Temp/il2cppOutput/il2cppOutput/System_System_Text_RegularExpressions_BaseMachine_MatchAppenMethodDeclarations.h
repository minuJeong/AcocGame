#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator
struct MatchAppendEvaluator_t2767;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.Match
struct Match_t1032;
// System.Text.StringBuilder
struct StringBuilder_t531;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator::.ctor(System.Object,System.IntPtr)
 void MatchAppendEvaluator__ctor_m9342 (MatchAppendEvaluator_t2767 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator::Invoke(System.Text.RegularExpressions.Match,System.Text.StringBuilder)
 void MatchAppendEvaluator_Invoke_m9343 (MatchAppendEvaluator_t2767 * __this, Match_t1032 * ___match, StringBuilder_t531 * ___sb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator::BeginInvoke(System.Text.RegularExpressions.Match,System.Text.StringBuilder,System.AsyncCallback,System.Object)
 Object_t * MatchAppendEvaluator_BeginInvoke_m9344 (MatchAppendEvaluator_t2767 * __this, Match_t1032 * ___match, StringBuilder_t531 * ___sb, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator::EndInvoke(System.IAsyncResult)
 void MatchAppendEvaluator_EndInvoke_m9345 (MatchAppendEvaluator_t2767 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
