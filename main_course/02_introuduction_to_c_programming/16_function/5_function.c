#include <stdio.h>

int get_min (int x, int y) {
    if (x < y) return x;
    else return y;
}

void make_double (int x) {
    return x * 2;
}

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int ans = a[0];
    for (int i = 0; i < n; i++) {
        ans = get_min(ans, a[i]);
    }

    printf("%d", ans);
}