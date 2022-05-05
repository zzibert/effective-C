#include <stdio.h>
#include <stdlib.h>

int glob; // static storage initialized to 0

int f(void) {
    return glob + 10;
}

int g(void) {
    glob = 42;
    return glob;
}

int max(int i, int j){
    return (i < j) ? j : i;
}

int main(void) {
    int max_value = max(f(), g());
    printf("max value: %d", max_value);
}