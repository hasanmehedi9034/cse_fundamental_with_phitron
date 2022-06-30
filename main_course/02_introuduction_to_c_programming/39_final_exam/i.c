#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long int pow = 5;

    for (int i = 1; i < n; i++) {
        pow *= 5;
    }
    printf("%d", 25);
}