#ifndef NUMBER_H_INCLUDED
#define NUMBER_H_INCLUDED

#include "type.h"

typedef struct {
    unsigned int counter;
    /**
     * (0)Int
     * (1)Long
     * (2)Double
     */
    unsigned char type;
    void* pointer;
} NumberStruct;

typedef NumberStruct* Number;

typedef int Int;

typedef double Double;

typedef long long Long;

#define true 1;

#define false 0;

Number __Number__construct__int(Int a);
Number __Number__construct__long(Long a);
Number __Number__construct__double(Double a);
void __Number__destructor(Number a);

//1+1
Number __Number__addition(Number a, Number b);

//1-1
Number __Number__subtraction(Number a, Number b);

//1*1
Number __Number__multiplication(Number a, Number b);

//1/1
Number __Number__division(Number a, Number b);

//1&1
Number __Number__and(Number a, Number b);

//1|1
Number __Number__or(Number a, Number b);

//1^1
Number __Number__xor(Number a, Number b);

//~1
Number __Number__not(Number a);

//1<<2
Number __Number__shl(Number a, Number left);

//1>>2
Number __Number__shr(Number a, Number right);

#endif // NUMBER_H_INCLUDED
