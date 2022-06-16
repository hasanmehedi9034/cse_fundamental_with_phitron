#include <stdio.h>

void insert (int ar[], int size, int pos, int val) {
    for (int i = size - 2; i >= pos; i--) {
        ar[i + 1] = ar[i];
    }
    ar[pos] = val;
}

void insert2 (int n, int a[], int pos, int value) {
    for (int i = n; i >= pos; i--) {
        a[i] = a[i - 1];
    }
    a[pos] = value;
}

void array_print(int n, int a[]) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}

int main() {
    int ar[7] = {1, 2, 3, 4, 5, 6};

    insert2(7, ar, 1, 0);

    array_print(7, ar);
}