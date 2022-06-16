#include <stdio.h>

void ultra_sum (int a, int b, int *sum, int *multi) {
    *sum = a + b;
    *multi = a * b;
}

int main() {
    int a = 10, b = 20, sum, multi;
    ultra_sum(a, b, &sum, &multi);

    printf("sum is : %d, multiple is : %d\n", sum, multi);
}
