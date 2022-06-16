#include <stdio.h>

int main() {
    int a = 100;
    int *p = &a;

    printf("%d %d", p, (p + 1));
}