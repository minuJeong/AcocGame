#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Syntax.Alternation
struct Alternation_t2819;
// System.Text.RegularExpressions.Syntax.ExpressionCollection
struct ExpressionCollection_t2808;
// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t2806;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t2810;

// System.Void System.Text.RegularExpressions.Syntax.Alternation::.ctor()
 void Alternation__ctor_m9645 (Alternation_t2819 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.ExpressionCollection System.Text.RegularExpressions.Syntax.Alternation::get_Alternatives()
 ExpressionCollection_t2808 * Alternation_get_Alternatives_m9646 (Alternation_t2819 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Alternation::AddAlternative(System.Text.RegularExpressions.Syntax.Expression)
 void Alternation_AddAlternative_m9647 (Alternation_t2819 * __this, Expression_t2806 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Alternation::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
 void Alternation_Compile_m9648 (Alternation_t2819 * __this, Object_t * ___cmp, bool ___reverse, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Alternation::GetWidth(System.Int32&,System.Int32&)
 void Alternation_GetWidth_m9649 (Alternation_t2819 * __this, int32_t* ___min, int32_t* ___max, MethodInfo* method) IL2CPP_METHOD_ATTR;
