#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i = 5;
    int j = i++;
    int k = i++;
    printf("Result = %d\n", j * k);
}