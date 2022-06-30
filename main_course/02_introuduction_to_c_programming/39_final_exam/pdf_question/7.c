#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int ar[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }

    int m;
    scanf("%d", &m);

    for (int i = 0; i < n; i++) {
        int ans;
        for (int j = i + 1; j < n; j++) {
            ans = ar[i] * ar[j];
            if (ans == m) {
                printf("YES");
                return 0;
            }
        }
    }
    printf("NO");
}