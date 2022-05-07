#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int arr[100];
    int *arrp1 = &arr[40];
    int *arrp2 = arrp1 + 20; // arrp2 points to arr[60]

    printf("%ld\n", arrp2 - arrp1);
}