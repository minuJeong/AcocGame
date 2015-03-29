#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t3240;
struct DSAParameters_t3240_marshaled;

void DSAParameters_t3240_marshal(const DSAParameters_t3240& unmarshaled, DSAParameters_t3240_marshaled& marshaled);
void DSAParameters_t3240_marshal_back(const DSAParameters_t3240_marshaled& marshaled, DSAParameters_t3240& unmarshaled);
void DSAParameters_t3240_marshal_cleanup(DSAParameters_t3240_marshaled& marshaled);
