#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 10;
    // int *a = (int *) malloc(n * sizeof(int));
    int *a = (int*)calloc(n, sizeof(int));
    realloc(a , (n * 2 * sizeof(int)));

    for (int i = 0; i < (n * 2); i++) {
        // a[i] = i + 1;
    }

    for (int i = 0; i < (n * 2); i++) {
        printf("%d ", a[i]);
    }
    free(a);
}

/*
    malloc - dynamic allocation.
    calloc - initialize with zero.
    realloc = new size allocate.
    free - free memory form heap.
*/