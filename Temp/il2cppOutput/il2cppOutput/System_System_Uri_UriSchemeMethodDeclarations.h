#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Uri/UriScheme
struct UriScheme_t2827;
struct UriScheme_t2827_marshaled;
// System.String
struct String_t;

// System.Void System.Uri/UriScheme::.ctor(System.String,System.String,System.Int32)
 void UriScheme__ctor_m9697 (UriScheme_t2827 * __this, String_t* ___s, String_t* ___d, int32_t ___p, MethodInfo* method) IL2CPP_METHOD_ATTR;
void UriScheme_t2827_marshal(const UriScheme_t2827& unmarshaled, UriScheme_t2827_marshaled& marshaled);
void UriScheme_t2827_marshal_back(const UriScheme_t2827_marshaled& marshaled, UriScheme_t2827& unmarshaled);
void UriScheme_t2827_marshal_cleanup(UriScheme_t2827_marshaled& marshaled);
