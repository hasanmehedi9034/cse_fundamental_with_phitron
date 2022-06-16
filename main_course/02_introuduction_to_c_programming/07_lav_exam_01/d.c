#include <stdio.h>

int main() {
    // input
    int n;
    scanf("%d", &n);

    double final_sum = 0;

    for (int i = 1; i <= n; i++) {
        double a, b;
        scanf("%lf %lf", &a, &b);

        double multiplication = a * b;

        final_sum += multiplication;
    }

    printf("%.3lf", final_sum);

    return 0;
}