#include <stdio.h>
#include <stdlib.h>

static unsigned int counter = 0;

void increment(void) {
    counter++;
    printf("%d ", counter);
}

void decrement(void) {
    counter--;
    printf("%d ", counter);
}

void multiply(void) {
    counter *= counter;
    printf("%d ", counter);
}

unsigned int retrieve(void) {
    return counter;
}

typedef void (*f)(void);

int main(void) {
    for (int i = 0; i < 5; i++) {
        increment();
    }
    printf("\n %d \n", retrieve());

    for (int i = 0; i < 5; i++) {
        increment();
    }
    printf("\n %d \n", retrieve());

    f functions[3];

    functions[0] = &increment;

    functions[1] = &decrement;

    functions[2] = &multiply;

    (*functions[0])(); // increment

    printf("increment \n");

    (*functions[1])(); // decrement

    printf("decrement \n");

    (*functions[2])(); // multiply by itself

    printf("multiply by itself \n");

    return 0;
}