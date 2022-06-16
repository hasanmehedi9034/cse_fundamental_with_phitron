#include <stdio.h>

void reverse_array(int n, int a[]) {
    for (int i = 0, j = n - 1; i < j; i++, j--) {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
}

void print_array(int n, int a[]) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}

int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int len = sizeof(a) / sizeof(a[0]);

    reverse_array(len, a);
    print_array(len, a);
}