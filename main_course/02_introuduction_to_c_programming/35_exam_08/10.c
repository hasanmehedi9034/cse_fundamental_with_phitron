#include <stdio.h>

void change_array (int n, int a[], int b[]) {
    for (int i = 0, j = n - 1; i < n; i++, j--) {
        b[i] = a[j];
    }
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(a[0]);

    int b[n];
    change_array(n, a, b);

    for (int i = 0; i < n; i++){
        printf("%d ", b[i]);
    }
}