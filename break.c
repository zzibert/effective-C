#include <stdio.h>
#include <ctype.h>

size_t find_element(size_t len, int arr[len], int key) {
    size_t pos = (size_t)-1;

    // traverse arr and search for key
    for (size_t i = 0; i < len; ++i) {
        if (arr[i] == key) {
            pos = i;
            break;
        }
    }
    return pos;
}

int main(void) {
    int array[6] = {'a', 'B', 'c', 'D', 'e', 'F'};
    char element = 'g';

    printf("Element %c is on position %zu", element, find_element(6, array, element));
}