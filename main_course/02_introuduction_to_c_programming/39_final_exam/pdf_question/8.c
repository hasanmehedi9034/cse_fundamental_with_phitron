#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    scanf("%d", &n);

    int i, j;
    for (i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int k = n - 1; k >= 1; k--) {
        for (int l = k; l >= 1; l--) {
            printf("*");
        }
        printf("\n");
    }
}