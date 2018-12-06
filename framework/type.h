#ifndef TYPE_H_INCLUDED
#define TYPE_H_INCLUDED

#include "Number.h"
#include "String.h"
#include "Object.h"
#include "Array.h"
#include "Function.h"

struct AnyStruct {
    size_t counter;
    /* Object,Array,String,
     * Int,Float,Double,Long,Boolean
     */
    int type;
    void* pointer;
};
typedef AnyStruct* Any;

struct IdentifierStruct {
    String key;
    Any value;
};
typedef IdentifierStruct* Identifier;


#endif // TYPE_H_INCLUDED
