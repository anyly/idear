#include "Number.h"

Number __Number__construct__int(Int a) {
    Number number = malloc(sizeof(NumberStruct));
    number->counter = 1;
    number->type = 0;
    number->pointer = &a;
    return number;
}
Number __Number__construct__long(Long a) {
    Number number = malloc(sizeof(NumberStruct));
    number->counter = 1;
    number->type = 1;
    number->pointer = &a;
    return number;
}
Number __Number__construct__double(Double a) {
    Number number = malloc(sizeof(NumberStruct));
    number->counter = 1;
    number->type = 2;
    number->pointer = &a;
    return number;
}

void __Number__destructor(Number a) {
    if (a->counter==1) {
        free(a);
    } else {
        a->counter--;
    }
}

//
Number __Number__construct() {
    Number number = malloc(sizeof(NumberStruct));
    number->counter = 1;
    return number;
}
//1+1
Number __Number__addition(Number a, Number b) {
    Number number = __Number__construct();
    unsigned char atype = a->type;
    unsigned char btype = b->type;

    if (atype == 0) {
        Int *pinta = a->pointer;
        Int inta = *pinta;
        if (btype == 0) {
            int *pintb = b->pointer;
            int intb = *pintb;
            if (MAX_INT-inta<intb) {
                //overflow max => long
                number->type=1;
                Long v = inta + intb;
                number->pointer = &v;
            } else if (MIN_INT-inta>intb) {
                //overflow min => exception
                abort();
            } else {
                number->type=0;
                Int v = inta + intb;
                number->pointer = &v;
            }
        } else if (btype == 1) {
            Long *plongb = b->pointer;
            Long longb = *plongb;
            if (MAX_LONG-inta<longb) {
                //overflow max => exception
                abort();
            } else if (MIN_LONG-inta>longb) {
                //overflow min => exception
                abort();
            } else {
                number->type=1;
                Long v = inta + longb;
                number->pointer = &v;
            }
        } else if (btype == 2) {
            Double *pdouble = b->pointer;
            Double doubleb = *pdouble;
            if (MAX_DOUBLE-inta<doubleb) {
                //overflow max => exception
                abort();
            } else if (MIN_DOUBLE-inta>doubleb) {
                //overflow min => exception
                abort();
            } else {
                number->type=2;
                Double v = inta + doubleb;
                number->pointer = &v;
            }
        }

    } else
    if (atype == 1) {
        Long *plonga = a->pointer;
        Long longa = *plonga;

        if (btype == 0) {
            int *pintb = b->pointer;
            int intb = *pintb;
            if (MAX_LONG-longa<intb) {
                //overflow max => exception
                abort();
            } else if (MIN_LONG-longa>intb) {
                //overflow min => exception
                abort();
            } else {
                number->type=1;
                Long v = longa + intb;
                number->pointer = &v;
            }
        } else if (btype == 1) {
            Long *plongb = b->pointer;
            Long longb = *plongb;
            if (MAX_LONG-longa<longb) {
                //overflow max => exception
                abort();
            } else if (MIN_LONG-longa>longb) {
                //overflow min => exception
                abort();
            } else {
                number->type=1;
                Long v = longa + longb;
                number->pointer = &v;
            }
        } else if (btype == 2) {
            Double *pdouble = b->pointer;
            Double doubleb = *pdouble;
            if (MAX_DOUBLE-longa<doubleb) {
                //overflow max => exception
                abort();
            } else if (MIN_DOUBLE-longa>doubleb) {
                //overflow min => exception
                abort();
            } else {
                number->type=2;
                Double v = longa + doubleb;
                number->pointer = &v;
            }
        }

    } else
    if (atype == 2) {
        Double *pdoublea = a->pointer;
        Double doublea = *pdoublea;

        if (btype == 0) {
            int *pintb = b->pointer;
            int intb = *pintb;
            if (MAX_DOUBLE-doublea<intb) {
                //overflow max => exception
                abort();
            } else if (MIN_DOUBLE-doublea>intb) {
                //overflow min => exception
                abort();
            } else {
                number->type=2;
                Double v = doublea + intb;
                number->pointer = &v;
            }
        } else if (btype == 1) {
            Long *plongb = b->pointer;
            Long longb = *plongb;
            if (MAX_DOUBLE-doublea<longb) {
                //overflow max => exception
                abort();
            } else if (MIN_DOUBLE-doublea>longb) {
                //overflow min => exception
                abort();
            } else {
                number->type=2;
                Double v = doublea + longb;
                number->pointer = &v;
            }
        } else if (btype == 2) {
            Double *pdouble = b->pointer;
            Double doubleb = *pdouble;
            if (MAX_DOUBLE-doublea<doubleb) {
                //overflow max => exception
                abort();
            } else if (MIN_DOUBLE-doublea>doubleb) {
                //overflow min => exception
                abort();
            } else {
                number->type=2;
                Double v = doublea + doubleb;
                number->pointer = &v;
            }
        }

    }
    return number;
}

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
