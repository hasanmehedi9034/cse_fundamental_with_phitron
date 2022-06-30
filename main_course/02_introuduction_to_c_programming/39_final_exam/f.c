#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);
    scanf("%d", &k);

    int min = 1;
    for (int i = 1; i <= n; i++) {
        if (min * 2 < min + k) {
            min *= 2;
        }
        else {
            min += k;
        }
    }
    printf("%d", min);
}

