#pragma once
#include <stdint.h>
// System.Text.RegularExpressions.Regex
struct Regex_t1028;
// System.Text.RegularExpressions.IMachine
struct IMachine_t2773;
// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_t1393;
// System.Text.RegularExpressions.Match
struct Match_t1032;
// System.Text.RegularExpressions.Group
#include "System_System_Text_RegularExpressions_Group.h"
// System.Text.RegularExpressions.Match
struct Match_t1032  : public Group_t1396
{
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.Match::regex
	Regex_t1028 * ___regex;
	// System.Text.RegularExpressions.IMachine System.Text.RegularExpressions.Match::machine
	Object_t * ___machine;
	// System.Int32 System.Text.RegularExpressions.Match::text_length
	int32_t ___text_length;
	// System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::groups
	GroupCollection_t1393 * ___groups;
};
struct Match_t1032_StaticFields{
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::empty
	Match_t1032 * ___empty;
};
