#include <stdio.h>

int main() {
    // declare variable
    int  a, b, h, area;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &h);

    // calculate variable
    area = 0.5 * h * (a + b);
    printf("%d", area);

    return 0;
}