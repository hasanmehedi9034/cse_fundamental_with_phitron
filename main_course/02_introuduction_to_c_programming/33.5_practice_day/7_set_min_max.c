#include <stdio.h>

void set_min_max(int *a, int *b) {
    if (*a > *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main() {
    int a = 4, b = 3;
    set_min_max(&a, &b);

    printf("%d %d", a, b);
}