#include <stdio.h>

int main() {
    int n, count = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int pi, qi;
        scanf("%d %d", &pi, &qi);

        if ((qi - pi) >= 2) count++;
    }

    printf("%d", count);
}