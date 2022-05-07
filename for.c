#include <stdio.h>
#include <stdlib.h>

void *memset(void *dest, int val, size_t n) {
    unsigned char *ptr = (unsigned char *)dest;

    for (size_t i = 0; i < n; ++i) {
        *(ptr + i) = val;
    }
    return dest;
}

int main(void) {
    char array[15];
    int a = ' ';

    memset(array, a, 15);

    for(int i = 0; i < 20; i++) {
        printf("%d ", array[i]);
    }
}