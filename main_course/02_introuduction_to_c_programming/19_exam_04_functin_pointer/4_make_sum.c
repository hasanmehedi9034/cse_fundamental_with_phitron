#include <stdio.h>

void makeSum(int a, int b, int *sum) {
    *sum = a + b;
}

int main() {
    int a = 2, b = 3;
    int sum;

    makeSum(a, b, &sum);
    printf("%d", sum);
}