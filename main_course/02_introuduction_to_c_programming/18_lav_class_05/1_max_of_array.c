#include <stdio.h>

int max(int a, int b) {
    if (a > b) {
        return a;
    }
    else {
        return b;
    }
}

int get_max_from_array(int n, int a[]) {
    int ans = a[0];
    for (int i = 0; i < n; i++) {
        ans = max(ans, a[i]);
    }
    return ans;
}

int main() {
    int n;
    scanf("%d",&n);
    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int max = get_max_from_array(n, a);
    printf("%d", max);
}