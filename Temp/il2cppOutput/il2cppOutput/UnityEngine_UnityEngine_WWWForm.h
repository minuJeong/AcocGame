#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_t2534;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1;
// System.Byte[]
struct ByteU5BU5D_t21;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.WWWForm
struct WWWForm_t153  : public Object_t
{
	// System.Collections.Generic.List`1<System.Byte[]> UnityEngine.WWWForm::formData
	List_1_t2534 * ___formData;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fieldNames
	List_1_t1 * ___fieldNames;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fileNames
	List_1_t1 * ___fileNames;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::types
	List_1_t1 * ___types;
	// System.Byte[] UnityEngine.WWWForm::boundary
	ByteU5BU5D_t21* ___boundary;
	// System.Boolean UnityEngine.WWWForm::containsFiles
	bool ___containsFiles;
};
