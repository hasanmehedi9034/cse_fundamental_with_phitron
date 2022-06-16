#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d", &a, &b);

    int x = a & (1 << b);

    if (x) {
        printf("1\n");
    }
    else {
        printf("0\n");
    }
}