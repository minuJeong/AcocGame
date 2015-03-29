#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Match
struct Match_t1032;
// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_t1393;
// System.Text.RegularExpressions.Regex
struct Regex_t1028;
// System.Text.RegularExpressions.IMachine
struct IMachine_t2771;
// System.String
struct String_t;

// System.Void System.Text.RegularExpressions.Match::.ctor()
 void Match__ctor_m9373 (Match_t1032 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Match::.ctor(System.Text.RegularExpressions.Regex,System.Text.RegularExpressions.IMachine,System.String,System.Int32,System.Int32,System.Int32,System.Int32)
 void Match__ctor_m9374 (Match_t1032 * __this, Regex_t1028 * ___regex, Object_t * ___machine, String_t* ___text, int32_t ___text_length, int32_t ___n_groups, int32_t ___index, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Match::.ctor(System.Text.RegularExpressions.Regex,System.Text.RegularExpressions.IMachine,System.String,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
 void Match__ctor_m9375 (Match_t1032 * __this, Regex_t1028 * ___regex, Object_t * ___machine, String_t* ___text, int32_t ___text_length, int32_t ___n_groups, int32_t ___index, int32_t ___length, int32_t ___n_caps, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Match::.cctor()
 void Match__cctor_m9376 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::get_Empty()
 Match_t1032 * Match_get_Empty_m9377 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups()
 GroupCollection_t1393 * Match_get_Groups_m6316 (Match_t1032 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::NextMatch()
 Match_t1032 * Match_NextMatch_m9378 (Match_t1032 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.Match::get_Regex()
 Regex_t1028 * Match_get_Regex_m9379 (Match_t1032 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
