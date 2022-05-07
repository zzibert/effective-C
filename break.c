#include <stdio.h>
#include <ctype.h>

int main(void) {
    char c;
    for(;;) {
        puts("Press any key, Q to quit: ");
        c = toupper(getchar());
        if (c == 'Q') break;
    }
} // loop exists only when the uppercase of lowercase 'Q' is pressed