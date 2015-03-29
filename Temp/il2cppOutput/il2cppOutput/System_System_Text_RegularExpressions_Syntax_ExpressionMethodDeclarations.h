﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t2808;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t2812;
// System.Text.RegularExpressions.Syntax.AnchorInfo
struct AnchorInfo_t2813;

// System.Void System.Text.RegularExpressions.Syntax.Expression::.ctor()
 void Expression__ctor_m9594 (Expression_t2808 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Expression::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
// System.Void System.Text.RegularExpressions.Syntax.Expression::GetWidth(System.Int32&,System.Int32&)
// System.Int32 System.Text.RegularExpressions.Syntax.Expression::GetFixedWidth()
 int32_t Expression_GetFixedWidth_m9595 (Expression_t2808 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Expression::GetAnchorInfo(System.Boolean)
 AnchorInfo_t2813 * Expression_GetAnchorInfo_m9596 (Expression_t2808 * __this, bool ___reverse, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Expression::IsComplex()
