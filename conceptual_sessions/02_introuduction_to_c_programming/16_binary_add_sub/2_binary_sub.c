#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d", &a, &b);

    int result = a + (~b + 1);
    printf("%d", result);
}