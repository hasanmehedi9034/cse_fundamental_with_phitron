#include <stdio.h>

int make_square (int n) {
    return n * n;
}

int main() {
    int a = 10;
    a = make_square(10);

    printf("%d", a);
}