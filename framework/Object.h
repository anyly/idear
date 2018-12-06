#ifndef OBJECT_H_INCLUDED
#define OBJECT_H_INCLUDED

#include "type.h"

struct ObjectStruct {
    size_t length;
    Identifier *property;
};
typedef ObjectStruct* Object;

Object createObject();

void setProperty(Object object, String key, Any value);

Any getProperty(Object object, String key);

void destroyObject(Object object);

#endif // OBJECT_H_INCLUDED
