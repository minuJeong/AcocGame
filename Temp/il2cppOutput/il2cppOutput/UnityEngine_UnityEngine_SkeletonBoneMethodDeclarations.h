#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SkeletonBone
struct SkeletonBone_t2573;
struct SkeletonBone_t2573_marshaled;

void SkeletonBone_t2573_marshal(const SkeletonBone_t2573& unmarshaled, SkeletonBone_t2573_marshaled& marshaled);
void SkeletonBone_t2573_marshal_back(const SkeletonBone_t2573_marshaled& marshaled, SkeletonBone_t2573& unmarshaled);
void SkeletonBone_t2573_marshal_cleanup(SkeletonBone_t2573_marshaled& marshaled);
