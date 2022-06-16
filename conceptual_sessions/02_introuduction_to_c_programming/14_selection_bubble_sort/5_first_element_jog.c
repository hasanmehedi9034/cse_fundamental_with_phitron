#include <stdio.h>

void print_array(int n, int a[]) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}

int sum_of_prefix(int n) {
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        ans += i;
    }
    return ans;
}


int main() {
    int n = 10;
    int a[n];
    sum_of_prefix2(n, a);

    print_array(n, a);
}