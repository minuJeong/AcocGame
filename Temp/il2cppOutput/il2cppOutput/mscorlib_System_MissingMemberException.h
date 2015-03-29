#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t21;
// System.MemberAccessException
#include "mscorlib_System_MemberAccessException.h"
// System.MissingMemberException
struct MissingMemberException_t3717  : public MemberAccessException_t3710
{
	// System.String System.MissingMemberException::ClassName
	String_t* ___ClassName;
	// System.String System.MissingMemberException::MemberName
	String_t* ___MemberName;
	// System.Byte[] System.MissingMemberException::Signature
	ByteU5BU5D_t21* ___Signature;
};
