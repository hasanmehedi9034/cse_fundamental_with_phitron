#include <stdio.h>

int main() {
    int number = 10;
    int *p = &number;
    int **q = &p;
    int ***r = &q;

    printf("%d", ***r);
}