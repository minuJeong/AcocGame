#pragma once
#include <stdint.h>
// Parse.ParseObject
struct ParseObject_t534;
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// Parse.ParseRelationBase
struct ParseRelationBase_t1180  : public Object_t
{
	// Parse.ParseObject Parse.ParseRelationBase::parent
	ParseObject_t534 * ___parent;
	// System.String Parse.ParseRelationBase::key
	String_t* ___key;
	// System.String Parse.ParseRelationBase::targetClassName
	String_t* ___targetClassName;
};
