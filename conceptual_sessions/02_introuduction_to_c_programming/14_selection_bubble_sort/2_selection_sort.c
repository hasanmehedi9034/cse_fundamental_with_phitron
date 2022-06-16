#include <stdio.h>

void swap (int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selection_sort (int n, int a[]) {
    for (int i = 0; i < n; i++) {
        int min_value = a[i];
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (min_value > a[j]) {
                min_index = j;
                min_value = a[j];
            }
        }
        swap(&a[i], &a[min_index]);
    }
}

void print_array (int n, int a[]) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}

int main() {
    int a[] = {12, 5, 21, 8, 2, 4, 1, 3};
    int len_a = sizeof(a) / sizeof(a[0]);

    selection_sort(len_a, a);
    print_array(len_a, a);
}