#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int m[3] = {1, 2, 3};

    int *pi;
    int j = 0;
    for (pi = &m[0]; pi < &m[3]; ++pi) {
        j += *pi;
    }

    printf("Sum of elements %d", j);
}