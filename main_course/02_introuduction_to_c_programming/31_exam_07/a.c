#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int sum_of_array(int n, int a[]) {
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans = sum(a[i], ans);
    }
    return ans;
}

int main() {
    int n;
    scanf("%d", &n);

    int ar[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }

    printf("%d", sum_of_array(n, ar));
}