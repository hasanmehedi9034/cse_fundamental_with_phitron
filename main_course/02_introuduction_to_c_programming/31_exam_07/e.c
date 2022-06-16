#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        n = n / 10;
        sum += digit;
    }

    printf("%d", sum);
}