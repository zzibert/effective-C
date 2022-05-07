#include <stdlib.h>

typedef struct {
     char c[10];
     int i;
     double d;
} widget;

int main(void) {
    widget *p = malloc(sizeof(widget));

    if (p == NULL) { // Handle allocation error

    }
    // Continue processing
    
}