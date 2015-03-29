#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Interpreter/IntStack
struct IntStack_t2792;
struct IntStack_t2792_marshaled;

// System.Int32 System.Text.RegularExpressions.Interpreter/IntStack::Pop()
 int32_t IntStack_Pop_m9480 (IntStack_t2792 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter/IntStack::Push(System.Int32)
 void IntStack_Push_m9481 (IntStack_t2792 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Interpreter/IntStack::get_Count()
 int32_t IntStack_get_Count_m9482 (IntStack_t2792 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter/IntStack::set_Count(System.Int32)
 void IntStack_set_Count_m9483 (IntStack_t2792 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
void IntStack_t2792_marshal(const IntStack_t2792& unmarshaled, IntStack_t2792_marshaled& marshaled);
void IntStack_t2792_marshal_back(const IntStack_t2792_marshaled& marshaled, IntStack_t2792& unmarshaled);
void IntStack_t2792_marshal_cleanup(IntStack_t2792_marshaled& marshaled);
