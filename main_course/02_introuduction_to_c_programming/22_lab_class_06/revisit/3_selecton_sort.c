#include <stdio.h>

int min(int a, int b) {
    return a < b ? a : b;
}

int swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int n, int a[]) {
    for (int i = 0; i < n; i++) {
        int min_element = a[i];
        int min_index = i;

        for (int j = i; j < n; j++) {
            if (min_element > a[j]) {
                min_element = a[j];
                min_index = j;
            }
        }
        swap(&a[i], &a[min_index]);
    }
}

int main() {
    int a[] = {5, 1, 3, 4, 2};
    int n = sizeof(a) / sizeof(a[0]);
    sort(n, a);

    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}