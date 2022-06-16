#include <stdio.h>

int main() {
    // declare variable
    double t, x;

    scanf("%lf %lf", &t, &x);
    printf("%.10lf", t / x);

    return 0;
}