#include <stdio.h>

int max_in_two(int a, int b) {
    if (a > b) return a;
    else return b;
}

int get_max(int n, int a[]) {
    int ans = a[0];
    for (int i = 0; i < n; i++) {
        ans = max_in_two(ans, a[i]);
    }
    return ans;
}

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int max = get_max(n, a);
    printf("max value is : %d", max);

    return 0;
}