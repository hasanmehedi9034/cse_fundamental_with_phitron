#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);

    int reversed = 0;
    while (x > 0) {
        int digit = x % 10;
        x /= 10;
        reversed = (reversed * 10) + digit;
    }

    printf("%d", reversed);

}