#include <stdio.h>

int main() {
    char line[1024];
    printf("idear>");
    while (scanf("%s", line)) {;
        printf("%s\n", line);
        printf("idear>");
    }
    return 0;
}
