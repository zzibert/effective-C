#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char str[100] = "Here comes the Sun";
    size_t str_size = sizeof(str); // str_size is 100

    printf("Size of string is %zu\n", str_size);

    size_t str_len = strlen(str);

    printf("Length of string is %zu\n", str_len);

    // dynamically allocationg storage for narrow string functions

    char str1[] = "Here comes the sun";
    char *str2 = malloc(strlen(str1)+1);
}