#include <stdio.h>

void change (int *x) {
    *x = -10;
}

int main() {
    int a[] = {1, 2, 3};
    change(&a);
    printf("%d", a);
}