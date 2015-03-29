#pragma once
#include <stdint.h>
// System.Collections.ArrayList
struct ArrayList_t94;
// System.Object
#include "mscorlib_System_Object.h"
// System.Security.Policy.Evidence
struct Evidence_t3382  : public Object_t
{
	// System.Collections.ArrayList System.Security.Policy.Evidence::hostEvidenceList
	ArrayList_t94 * ___hostEvidenceList;
	// System.Collections.ArrayList System.Security.Policy.Evidence::assemblyEvidenceList
	ArrayList_t94 * ___assemblyEvidenceList;
	// System.Int32 System.Security.Policy.Evidence::_hashCode
	int32_t ____hashCode;
};
