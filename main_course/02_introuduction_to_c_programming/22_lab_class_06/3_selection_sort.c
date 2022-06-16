#include <stdio.h>

int min (int a, int b) {
    return a < b ? a : b;
}

void swap (int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort_array (int n, int a[]) {
    for (int steps = 0; steps < n; steps++) {
        int min_element = a[steps];
        int min_index = steps;

        for (int i = steps; i < n; i++) {
            if (a[i] < min_element) {
                min_element = a[i];
                min_index = i;
            }
        }
        swap(&a[steps], &a[min_index]);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    sort_array(n, a);
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}