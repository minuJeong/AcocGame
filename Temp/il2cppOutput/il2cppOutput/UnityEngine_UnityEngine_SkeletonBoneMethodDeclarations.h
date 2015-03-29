#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SkeletonBone
struct SkeletonBone_t2572;
struct SkeletonBone_t2572_marshaled;

void SkeletonBone_t2572_marshal(const SkeletonBone_t2572& unmarshaled, SkeletonBone_t2572_marshaled& marshaled);
void SkeletonBone_t2572_marshal_back(const SkeletonBone_t2572_marshaled& marshaled, SkeletonBone_t2572& unmarshaled);
void SkeletonBone_t2572_marshal_cleanup(SkeletonBone_t2572_marshaled& marshaled);
