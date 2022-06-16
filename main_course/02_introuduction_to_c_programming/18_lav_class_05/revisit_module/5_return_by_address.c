#include <stdio.h>
#include <math.h>

int get_root(double a, double b, double c, double *root1, double *root2) {
    double d = (b * b) - (4 * a * c);
    if (d < 0) {
        return 0;
    }
    else if (d == 0) {
        *root1 = (-b) / (2 * a);
        return 1;
    }
    else {
        *root1 = (-b + sqrt(d)) / (2 * a);
        *root2 = (-b - sqrt(d)) / (2 * a);
        return 2;
    }
}  

int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    
    double root1, root2;
    int roots = get_root(a, b, c, &root1, &root2);

    printf("we have %d roots\n", roots);
    if(roots >= 1) printf("%lf\n", root1);
    if(roots == 2) printf("%lf\n", root2);
}