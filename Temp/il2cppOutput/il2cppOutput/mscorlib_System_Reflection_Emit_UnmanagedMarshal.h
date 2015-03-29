#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.InteropServices.UnmanagedType
#include "mscorlib_System_Runtime_InteropServices_UnmanagedType.h"
// System.Reflection.Emit.UnmanagedMarshal
struct UnmanagedMarshal_t3370  : public Object_t
{
	// System.Int32 System.Reflection.Emit.UnmanagedMarshal::count
	int32_t ___count;
	// System.Runtime.InteropServices.UnmanagedType System.Reflection.Emit.UnmanagedMarshal::t
	int32_t ___t;
	// System.Runtime.InteropServices.UnmanagedType System.Reflection.Emit.UnmanagedMarshal::tbase
	int32_t ___tbase;
	// System.String System.Reflection.Emit.UnmanagedMarshal::guid
	String_t* ___guid;
	// System.String System.Reflection.Emit.UnmanagedMarshal::mcookie
	String_t* ___mcookie;
	// System.String System.Reflection.Emit.UnmanagedMarshal::marshaltype
	String_t* ___marshaltype;
	// System.Type System.Reflection.Emit.UnmanagedMarshal::marshaltyperef
	Type_t * ___marshaltyperef;
	// System.Int32 System.Reflection.Emit.UnmanagedMarshal::param_num
	int32_t ___param_num;
	// System.Boolean System.Reflection.Emit.UnmanagedMarshal::has_size
	bool ___has_size;
};
