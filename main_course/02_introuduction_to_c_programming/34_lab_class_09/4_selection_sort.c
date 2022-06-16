#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selection_sort(int n, int a[]) {
    for (int i = 0; i < n - 1; i++) {
        int min_ele = a[i];
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (min_ele > a[j]) {
                min_ele = a[j];
                min_index = j;
            }
        }
        int temp = a[i];
        a[i] = min_ele;
        a[min_index] = temp;
    }
}

void array_print(int n, int a[]) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}

int main() {
    int a[] = {0, 10, 5, 3, 7, 3, 2, 1, 1, 2, 3};
    int n = sizeof(a) / sizeof(a[0]);

    selection_sort(n, a);
    array_print(n, a);
}