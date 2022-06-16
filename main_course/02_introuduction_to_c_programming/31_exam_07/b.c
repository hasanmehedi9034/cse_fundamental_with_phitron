#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int ar[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }
    int len = sizeof(ar) / sizeof(ar[0]);

    for (int i = len - 1; i >= 0; i--) {
        printf("%d ", ar[i]);
    }
}