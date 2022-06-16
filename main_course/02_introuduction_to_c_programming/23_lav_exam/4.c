#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 100;
    double *arr = (double*)malloc(n * sizeof(double));

    for (int i = 0; i < n; i++) {
        *arr = i + 1;
        arr++;
    }
}

/*
total memory space need of arr = (100 * 8) = 800 bytes
*/