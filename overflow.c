#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define Abs(i) ((i) < 0 ? -(i) : (i))

int main(void) {
    signed int si = INT_MIN;
    signed int abs_si = Abs(si);
    printf("%d\n", abs_si);
}