#include <stdio.h>

int main() {
    int abul_age, avg_age, babul_age;

    scanf("%d %d", &abul_age, &avg_age);

    // calculate babul age
    babul_age = (avg_age * 2) - abul_age;

    printf("%d\n", babul_age);

    return 0;
}