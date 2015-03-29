#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t3241;
struct DSAParameters_t3241_marshaled;

void DSAParameters_t3241_marshal(const DSAParameters_t3241& unmarshaled, DSAParameters_t3241_marshaled& marshaled);
void DSAParameters_t3241_marshal_back(const DSAParameters_t3241_marshaled& marshaled, DSAParameters_t3241& unmarshaled);
void DSAParameters_t3241_marshal_cleanup(DSAParameters_t3241_marshaled& marshaled);
