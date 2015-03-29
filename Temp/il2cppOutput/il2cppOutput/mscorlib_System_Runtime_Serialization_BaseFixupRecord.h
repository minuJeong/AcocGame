#pragma once
#include <stdint.h>
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t3539;
// System.Runtime.Serialization.BaseFixupRecord
struct BaseFixupRecord_t3540;
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.Serialization.BaseFixupRecord
struct BaseFixupRecord_t3540  : public Object_t
{
	// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.BaseFixupRecord::ObjectToBeFixed
	ObjectRecord_t3539 * ___ObjectToBeFixed;
	// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.BaseFixupRecord::ObjectRequired
	ObjectRecord_t3539 * ___ObjectRequired;
	// System.Runtime.Serialization.BaseFixupRecord System.Runtime.Serialization.BaseFixupRecord::NextSameContainer
	BaseFixupRecord_t3540 * ___NextSameContainer;
	// System.Runtime.Serialization.BaseFixupRecord System.Runtime.Serialization.BaseFixupRecord::NextSameRequired
	BaseFixupRecord_t3540 * ___NextSameRequired;
};
