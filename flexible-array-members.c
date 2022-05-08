#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct {
    size_t num;
    int data[];
} widget;

void *func(size_t array_size) {
    widget *p = (widget *)malloc(sizeof(widget) + sizeof(int) * array_size);
    if (p == NULL) {
        return NULL;
    }


    p->num = array_size;
    for (size_t i = 0; i < p->num; ++i) {
        p->data[i] = 17;
    }
}

int matrix_sum(size_t rows, size_t cols, int m[rows][cols]) {
    int total = 0;

    for (size_t r = 0; r < rows; r++) {
        for (size_t c = 0; c < cols; c++) {
            total += m[r][c];
        }
    }
    return total;
}