#include <stdio.h>

int main() {
    int a = 100;
    int *p = &a;
    int **q = &p;
    *p = -500;

    printf("Address %d value %d\n", &a, a);
    printf("Address %d value %d\n", &p, *p);
    printf("Address %d value %d\n", &q, **q);
}