#ifndef STRING_H_INCLUDED
#define STRING_H_INCLUDED

#include "type.h"

typedef struct {
    int length;
    char *charArray;
} StringStruct;
typedef StringStruct* String;

String String___append(String thisObject, ...);

int String___indexOf(String thisObject, String searchvalue, int fromindex);

String String___substr(String thisObject, int start, int length);

String String___substring(String thisObject, int start, int stop);
#endif // STRING_H_INCLUDED
