#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// System.IO.FileAttributes
#include "mscorlib_System_IO_FileAttributes.h"
// System.IO.MonoIOStat
struct MonoIOStat_t3346 
{
	// System.String System.IO.MonoIOStat::Name
	String_t* ___Name;
	// System.IO.FileAttributes System.IO.MonoIOStat::Attributes
	int32_t ___Attributes;
	// System.Int64 System.IO.MonoIOStat::Length
	int64_t ___Length;
	// System.Int64 System.IO.MonoIOStat::CreationTime
	int64_t ___CreationTime;
	// System.Int64 System.IO.MonoIOStat::LastAccessTime
	int64_t ___LastAccessTime;
	// System.Int64 System.IO.MonoIOStat::LastWriteTime
	int64_t ___LastWriteTime;
};
// Native definition for marshalling of: System.IO.MonoIOStat
struct MonoIOStat_t3346_marshaled
{
	char* ___Name;
	int32_t ___Attributes;
	int64_t ___Length;
	int64_t ___CreationTime;
	int64_t ___LastAccessTime;
	int64_t ___LastWriteTime;
};
