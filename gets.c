#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char *str = (char *)malloc(5);



    gets(str);

    printf("String: %s", str);


}

char *gets(char *dest) {
    int c;
    char *p = dest;
    while ((c = getchar()) != EOF && c != '\n') {
        *p++ = c;
    }
    *p = '\0';
    return dest;
}