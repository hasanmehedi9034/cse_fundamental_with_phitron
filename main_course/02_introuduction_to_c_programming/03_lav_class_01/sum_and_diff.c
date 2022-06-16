#include <stdio.h>

int main() {
    int a, b;

    scanf("%d %d", &a, &b);
    printf("Sum is : %d\n", a + b);
    printf("difference is : %d\n", a - b);

    float c, d;
    scanf("%.1f %.1f", &c, &d);
    printf("%.1f %.1f", c + d, c - d);

    return 0;
}