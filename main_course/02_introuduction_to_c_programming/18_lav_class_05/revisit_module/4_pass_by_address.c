#include <stdio.h>

void make_equal_to_average (int *a, int *b) {
    int ans = (*a + *b) / 2;
    *a = *b = ans;
}

void make_positive (int *a) {
    if (*a < 0) *a = -*a;
}

int main() {
    int a = 10;
    int b = 6;
    make_equal_to_average(&a, &b);

    printf("%d %d", a, b);
}