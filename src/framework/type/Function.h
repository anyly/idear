#ifndef FUNCTION_H_INCLUDED
#define FUNCTION_H_INCLUDED

#include "type.h"
#include "Array.h"

typedef struct {
    unsigned int counter;
    String code;
    Array arguments;
    Array closure;
} FunctionStruct;
typedef FunctionStruct* Function;

#endif // FUNCTION_H_INCLUDED
