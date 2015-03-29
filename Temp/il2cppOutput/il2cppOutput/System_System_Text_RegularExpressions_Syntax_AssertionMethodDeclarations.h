﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Syntax.Assertion
struct Assertion_t2805;
// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t2806;

// System.Void System.Text.RegularExpressions.Syntax.Assertion::.ctor()
 void Assertion__ctor_m9627 (Assertion_t2805 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Assertion::get_TrueExpression()
 Expression_t2806 * Assertion_get_TrueExpression_m9628 (Assertion_t2805 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Assertion::set_TrueExpression(System.Text.RegularExpressions.Syntax.Expression)
 void Assertion_set_TrueExpression_m9629 (Assertion_t2805 * __this, Expression_t2806 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Assertion::get_FalseExpression()
 Expression_t2806 * Assertion_get_FalseExpression_m9630 (Assertion_t2805 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Assertion::set_FalseExpression(System.Text.RegularExpressions.Syntax.Expression)
 void Assertion_set_FalseExpression_m9631 (Assertion_t2805 * __this, Expression_t2806 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Assertion::GetWidth(System.Int32&,System.Int32&)
 void Assertion_GetWidth_m9632 (Assertion_t2805 * __this, int32_t* ___min, int32_t* ___max, MethodInfo* method) IL2CPP_METHOD_ATTR;