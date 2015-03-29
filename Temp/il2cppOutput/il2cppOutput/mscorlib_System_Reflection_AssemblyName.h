#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Globalization.CultureInfo
struct CultureInfo_t872;
// System.Reflection.StrongNameKeyPair
struct StrongNameKeyPair_t3385;
// System.Byte[]
struct ByteU5BU5D_t21;
// System.Version
struct Version_t1097;
// System.Object
#include "mscorlib_System_Object.h"
// System.Reflection.AssemblyNameFlags
#include "mscorlib_System_Reflection_AssemblyNameFlags.h"
// System.Configuration.Assemblies.AssemblyHashAlgorithm
#include "mscorlib_System_Configuration_Assemblies_AssemblyHashAlgorit.h"
// System.Configuration.Assemblies.AssemblyVersionCompatibility
#include "mscorlib_System_Configuration_Assemblies_AssemblyVersionComp.h"
// System.Reflection.ProcessorArchitecture
#include "mscorlib_System_Reflection_ProcessorArchitecture.h"
// System.Reflection.AssemblyName
struct AssemblyName_t1420  : public Object_t
{
	// System.String System.Reflection.AssemblyName::name
	String_t* ___name;
	// System.String System.Reflection.AssemblyName::codebase
	String_t* ___codebase;
	// System.Int32 System.Reflection.AssemblyName::major
	int32_t ___major;
	// System.Int32 System.Reflection.AssemblyName::minor
	int32_t ___minor;
	// System.Int32 System.Reflection.AssemblyName::build
	int32_t ___build;
	// System.Int32 System.Reflection.AssemblyName::revision
	int32_t ___revision;
	// System.Globalization.CultureInfo System.Reflection.AssemblyName::cultureinfo
	CultureInfo_t872 * ___cultureinfo;
	// System.Reflection.AssemblyNameFlags System.Reflection.AssemblyName::flags
	int32_t ___flags;
	// System.Configuration.Assemblies.AssemblyHashAlgorithm System.Reflection.AssemblyName::hashalg
	int32_t ___hashalg;
	// System.Reflection.StrongNameKeyPair System.Reflection.AssemblyName::keypair
	StrongNameKeyPair_t3385 * ___keypair;
	// System.Byte[] System.Reflection.AssemblyName::publicKey
	ByteU5BU5D_t21* ___publicKey;
	// System.Byte[] System.Reflection.AssemblyName::keyToken
	ByteU5BU5D_t21* ___keyToken;
	// System.Configuration.Assemblies.AssemblyVersionCompatibility System.Reflection.AssemblyName::versioncompat
	int32_t ___versioncompat;
	// System.Version System.Reflection.AssemblyName::version
	Version_t1097 * ___version;
	// System.Reflection.ProcessorArchitecture System.Reflection.AssemblyName::processor_architecture
	int32_t ___processor_architecture;
};
