﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Syntax.CharacterClass
struct CharacterClass_t2825;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t2812;
// System.Text.RegularExpressions.Category
#include "System_System_Text_RegularExpressions_Category.h"
// System.Text.RegularExpressions.Interval
#include "System_System_Text_RegularExpressions_Interval.h"

// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::.ctor(System.Boolean,System.Boolean)
 void CharacterClass__ctor_m9675 (CharacterClass_t2825 * __this, bool ___negate, bool ___ignore, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::.ctor(System.Text.RegularExpressions.Category,System.Boolean)
 void CharacterClass__ctor_m9676 (CharacterClass_t2825 * __this, uint16_t ___cat, bool ___negate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::.cctor()
 void CharacterClass__cctor_m9677 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::AddCategory(System.Text.RegularExpressions.Category,System.Boolean)
 void CharacterClass_AddCategory_m9678 (CharacterClass_t2825 * __this, uint16_t ___cat, bool ___negate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::AddCharacter(System.Char)
 void CharacterClass_AddCharacter_m9679 (CharacterClass_t2825 * __this, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::AddRange(System.Char,System.Char)
 void CharacterClass_AddRange_m9680 (CharacterClass_t2825 * __this, uint16_t ___lo, uint16_t ___hi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
 void CharacterClass_Compile_m9681 (CharacterClass_t2825 * __this, Object_t * ___cmp, bool ___reverse, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::GetWidth(System.Int32&,System.Int32&)
 void CharacterClass_GetWidth_m9682 (CharacterClass_t2825 * __this, int32_t* ___min, int32_t* ___max, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.CharacterClass::IsComplex()
 bool CharacterClass_IsComplex_m9683 (CharacterClass_t2825 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Text.RegularExpressions.Syntax.CharacterClass::GetIntervalCost(System.Text.RegularExpressions.Interval)
 double CharacterClass_GetIntervalCost_m9684 (Object_t * __this/* static, unused */, Interval_t2800  ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
