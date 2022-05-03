#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char str[11];

    for (unsigned int i = 0; i < 10; ++i) {
        str[i] = '0' + i;
    }

    str[10] = '\0';

    for (int i = 0; i < 11; i++) {
        printf("element %d is %d\n", i, str[i]);
    }

    return 0;
}