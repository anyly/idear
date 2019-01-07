#ifndef NUMBER_H_INCLUDED
#define NUMBER_H_INCLUDED

#include "type.h"

typedef int Int;
typedef long long Long;
typedef double Double;

Int MIN_INT = 0x80000000;
Int MAX_INT = 0x7fffffff;

Long MIN_LONG = 0x8000000000000000L;
Long MAX_LONG = 0x7fffffffffffffffL;

Double MIN_DOUBLE = 4.9E-324D;
Double MAX_DOUBLE = 1.7976931348623157E308D;

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
