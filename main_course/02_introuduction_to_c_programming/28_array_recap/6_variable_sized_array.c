#include <stdio.h>
#include <stdlib.h>

void print_array(int n, int a[]) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int ar[n];

    memset(ar, 0, sizeof(ar));
    print_array(n, ar);
}