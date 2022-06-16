#include <stdio.h>
#include <math.h>

int get_root (double a, double b, double c, double &root1, double &root2) {
    double d = b*b - 4*a*c;
    return (-b + sqrt(d)) / (2 * a);
}


int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("%lf", get_root(a, b, c));
}