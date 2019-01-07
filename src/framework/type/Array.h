#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED

#include "type.h"

typedef struct {
    size_t length;
    Any *item;
} ArrayStruct;
typedef ArrayStruct* Array;

#endif // ARRAY_H_INCLUDED
