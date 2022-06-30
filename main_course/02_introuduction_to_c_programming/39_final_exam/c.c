#include <stdio.h>

void  reverse_different(int n, int a[]) {
    int i, j;
    for (i = 0, j = (n - 1); i < j; i++, j--) {
        printf("%d %d ", a[i], a[j]);
    }
    if (n % 2) {
        printf("%d", a[i]);
    }
}

void input_array(int m, int a[]) {
    for (int i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int m;
        scanf("%d", &m);

        int arr[m];
        input_array(m, arr);
        reverse_different(m, arr);
        printf("\n");
    }
}