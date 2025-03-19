#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "vector.h"

typedef struct {
    long long a;
    long long b;
    long long c;
} face_t;

typedef struct {
    vec2_t points[3];
} triangle_t;

#endif
