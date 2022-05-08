#include <string.h>
#include <stdio.h>
#include <stdlib.h>

size_t strlen(const char * str) {
    const char *s;
    for (s = str; *s; ++s) {}
    return s - str;
}

int main(void) {
    char str[100] = "Here comes the Sun";
    size_t str_size = strlen(str) + 1; // str_size is 100

    char *dest = (char *)malloc(str_size);

    if (dest) {
        strcpy(dest, str);
    } else {
        // handle error
    }

    printf("Size of string is %zu\n", str_size);

    size_t str_len = strlen(str);

    printf("Length of string is %zu\n", str_len);


    // dynamically allocationg storage for narrow string functions

    char str1[] = "Here comes the sun";
    char *str2 = malloc(strlen(str1)+1);
}