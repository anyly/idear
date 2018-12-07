#ifndef STRING_H_INCLUDED
#define STRING_H_INCLUDED

#include "type.h"

struct String {
    size_t length;
    char *charArray;
};

String String@append(String thisObject, String...stringX);

int String@indexOf(String thisObject, String searchvalue, int fromindex);

String String@substr(String thisObject, int start, int length);

String String@substring(String thisObject, int start, int stop);
#endif // STRING_H_INCLUDED
