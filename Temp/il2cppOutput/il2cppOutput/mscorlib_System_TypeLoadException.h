#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.SystemException
#include "mscorlib_System_SystemException.h"
// System.TypeLoadException
struct TypeLoadException_t3699  : public SystemException_t2865
{
	// System.String System.TypeLoadException::className
	String_t* ___className;
	// System.String System.TypeLoadException::assemblyName
	String_t* ___assemblyName;
};
