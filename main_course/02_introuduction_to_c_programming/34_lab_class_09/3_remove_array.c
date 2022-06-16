#include <stdio.h>

void remove_element(int n, int ar[], int pos) {
    for (int i = pos; i < n - 1; i++) {
        ar[i] = ar[i + 1];
    }
}

void array_print(int n, int a[]) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}

int main() {
    int a[] = {1, 2, 3, 4, 5};

    remove_element(5, a, 1);
    array_print(5, a);
}