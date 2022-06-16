#include <stdio.h>

int main() {

    double radius;
    const double PI = 3.1416;

    printf("Enter Radius : ");
    scanf("%lf", &radius);

    double perimeter = 2 * PI * radius;
    printf("Perimeter is %.2lf \n", perimeter);

    double area = PI * radius * radius;
    printf("Are is %.2lf", area);

    return 0;
}