#pragma once
#include <stdint.h>
// System.UInt32[]
struct UInt32U5BU5D_t2344;
// System.Byte[]
struct ByteU5BU5D_t21;
// Mono.Security.Cryptography.SymmetricTransform
#include "mscorlib_Mono_Security_Cryptography_SymmetricTransform.h"
// System.Security.Cryptography.RijndaelTransform
struct RijndaelTransform_t3597  : public SymmetricTransform_t3247
{
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::expandedKey
	UInt32U5BU5D_t2344* ___expandedKey;
	// System.Int32 System.Security.Cryptography.RijndaelTransform::Nb
	int32_t ___Nb;
	// System.Int32 System.Security.Cryptography.RijndaelTransform::Nk
	int32_t ___Nk;
	// System.Int32 System.Security.Cryptography.RijndaelTransform::Nr
	int32_t ___Nr;
};
struct RijndaelTransform_t3597_StaticFields{
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::Rcon
	UInt32U5BU5D_t2344* ___Rcon;
	// System.Byte[] System.Security.Cryptography.RijndaelTransform::SBox
	ByteU5BU5D_t21* ___SBox;
	// System.Byte[] System.Security.Cryptography.RijndaelTransform::iSBox
	ByteU5BU5D_t21* ___iSBox;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::T0
	UInt32U5BU5D_t2344* ___T0;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::T1
	UInt32U5BU5D_t2344* ___T1;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::T2
	UInt32U5BU5D_t2344* ___T2;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::T3
	UInt32U5BU5D_t2344* ___T3;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::iT0
	UInt32U5BU5D_t2344* ___iT0;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::iT1
	UInt32U5BU5D_t2344* ___iT1;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::iT2
	UInt32U5BU5D_t2344* ___iT2;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::iT3
	UInt32U5BU5D_t2344* ___iT3;
};
