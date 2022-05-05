#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void) {
    unsigned int ui = UINT_MAX;
    ui++;
    printf("ui = %u\n", ui); // ui is 0

    ui--;
    printf("ui = %u\n", ui); 
}