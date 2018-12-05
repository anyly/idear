#ifndef TYPE_H_INCLUDED
#define TYPE_H_INCLUDED

struct Identifier {
    char* key;
    int type;
    void* mem;
};

struct Object {
    Identifier *property;
};

#endif // TYPE_H_INCLUDED
