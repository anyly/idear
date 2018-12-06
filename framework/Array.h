#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED

#include "type.h"

struct ArrayStruct {
    size_t length;
    Any *item;
};
typedef ArrayStruct Array;

#endif // ARRAY_H_INCLUDED
