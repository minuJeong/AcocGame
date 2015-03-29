#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Syntax.CaptureAssertion
struct CaptureAssertion_t2820;
// System.Text.RegularExpressions.Syntax.CapturingGroup
struct CapturingGroup_t2815;
// System.Text.RegularExpressions.Syntax.ExpressionAssertion
struct ExpressionAssertion_t2809;
// System.Text.RegularExpressions.Syntax.Literal
struct Literal_t2819;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t2812;

// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::.ctor(System.Text.RegularExpressions.Syntax.Literal)
 void CaptureAssertion__ctor_m9637 (CaptureAssertion_t2820 * __this, Literal_t2819 * ___l, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::set_CapturingGroup(System.Text.RegularExpressions.Syntax.CapturingGroup)
 void CaptureAssertion_set_CapturingGroup_m9638 (CaptureAssertion_t2820 * __this, CapturingGroup_t2815 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
 void CaptureAssertion_Compile_m9639 (CaptureAssertion_t2820 * __this, Object_t * ___cmp, bool ___reverse, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.CaptureAssertion::IsComplex()
 bool CaptureAssertion_IsComplex_m9640 (CaptureAssertion_t2820 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.ExpressionAssertion System.Text.RegularExpressions.Syntax.CaptureAssertion::get_Alternate()
 ExpressionAssertion_t2809 * CaptureAssertion_get_Alternate_m9641 (CaptureAssertion_t2820 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
