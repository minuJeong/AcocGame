#pragma once
#include <stdint.h>
// System.Collections.BitArray
struct BitArray_t2790;
// System.Text.RegularExpressions.IntervalCollection
struct IntervalCollection_t2801;
// System.Text.RegularExpressions.Syntax.Expression
#include "System_System_Text_RegularExpressions_Syntax_Expression.h"
// System.Text.RegularExpressions.Interval
#include "System_System_Text_RegularExpressions_Interval.h"
// System.Text.RegularExpressions.Syntax.CharacterClass
struct CharacterClass_t2823  : public Expression_t2806
{
	// System.Boolean System.Text.RegularExpressions.Syntax.CharacterClass::negate
	bool ___negate;
	// System.Boolean System.Text.RegularExpressions.Syntax.CharacterClass::ignore
	bool ___ignore;
	// System.Collections.BitArray System.Text.RegularExpressions.Syntax.CharacterClass::pos_cats
	BitArray_t2790 * ___pos_cats;
	// System.Collections.BitArray System.Text.RegularExpressions.Syntax.CharacterClass::neg_cats
	BitArray_t2790 * ___neg_cats;
	// System.Text.RegularExpressions.IntervalCollection System.Text.RegularExpressions.Syntax.CharacterClass::intervals
	IntervalCollection_t2801 * ___intervals;
};
struct CharacterClass_t2823_StaticFields{
	// System.Text.RegularExpressions.Interval System.Text.RegularExpressions.Syntax.CharacterClass::upper_case_characters
	Interval_t2798  ___upper_case_characters;
};
