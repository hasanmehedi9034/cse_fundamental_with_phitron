#include <stdio.h>

double make_sum(double a, double b) {
    return a + b;
}

int main() {
    double a, b;
    scanf("%lf %lf", &a, &b);
    double c = make_sum(a, b);

    printf("%0.2lf", c);
}