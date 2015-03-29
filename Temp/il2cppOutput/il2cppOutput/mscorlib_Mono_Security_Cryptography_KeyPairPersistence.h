#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Security.Cryptography.CspParameters
struct CspParameters_t3242;
// System.Object
struct Object_t;
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Security.Cryptography.KeyPairPersistence
struct KeyPairPersistence_t3243  : public Object_t
{
	// System.Security.Cryptography.CspParameters Mono.Security.Cryptography.KeyPairPersistence::_params
	CspParameters_t3242 * ____params;
	// System.String Mono.Security.Cryptography.KeyPairPersistence::_keyvalue
	String_t* ____keyvalue;
	// System.String Mono.Security.Cryptography.KeyPairPersistence::_filename
	String_t* ____filename;
	// System.String Mono.Security.Cryptography.KeyPairPersistence::_container
	String_t* ____container;
};
struct KeyPairPersistence_t3243_StaticFields{
	// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_userPathExists
	bool ____userPathExists;
	// System.String Mono.Security.Cryptography.KeyPairPersistence::_userPath
	String_t* ____userPath;
	// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_machinePathExists
	bool ____machinePathExists;
	// System.String Mono.Security.Cryptography.KeyPairPersistence::_machinePath
	String_t* ____machinePath;
	// System.Object Mono.Security.Cryptography.KeyPairPersistence::lockobj
	Object_t * ___lockobj;
};
