#include <stdio.h>

int main2() {
    char a=255;
    printf("%d\n", sizeof(2147483647*2147483647));
    printf("%d\n", sizeof(a));
    printf("%d\n", sizeof(a+255));
    long long b=1;
    printf("%d\n", sizeof(b));
    printf("%d\n", sizeof(b+2));
    float c=0.3;
    double d=0.4;
    printf("%d\n", sizeof(0.3));
    printf("%d\n", sizeof(c));
    printf("%d\n", sizeof(c*a));
    printf("%d\n", sizeof(c*b));
    printf("%d\n", sizeof(c*d));
    return 0;
}
