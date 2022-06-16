#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int fibonacchi[n];
    fibonacchi[0] = 0;
    fibonacchi[1] = 1;

    for (int  i = 2; i < n; i++) {
        fibonacchi[i] = fibonacchi[i - 1] + fibonacchi[i - 2];
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacchi[i]);
    }


    return 0;
}