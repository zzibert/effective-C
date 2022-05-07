#include <stdio.h>
#include <stdlib.h>

void *memset(void *dest, int val, size_t n) {
    unsigned char *ptr = (unsigned char*)dest;
    while (n-- > 0) {
        *ptr++ = (unsigned char)val;
    }

    return dest;
}

int main(void) {
    char array[15];
    int a = 'a';

    memset(&array, a, 10);

    for(int i = 0; i < 15; i++) {
        printf("%d ", array[i]);
    }
}