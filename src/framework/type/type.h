#ifndef TYPE_H_INCLUDED
#define TYPE_H_INCLUDED

#include <stdint.h>
#include <stdlib.h>

#include "Boolean.h"
#include "Number.h"
#include "String.h"

typedef struct {
    int counter;
     /*
     * (0)Number
     * (1)String
     * (2)Object
     * (3)Array
     * (4)Function
     */
    unsigned char type;
    void* pointer;
} AnyStruct;
typedef AnyStruct* Any;

typedef struct {
    String key;
    Any value;
} IdentifierStruct;
typedef IdentifierStruct* Identifier;

#include "Object.h"
#include "Array.h"
#include "Function.h"

#endif // TYPE_H_INCLUDED
