#include <stdio.h>

void sort(int n, int a[]) {
    for (int steps = 0; steps < n; steps++) {
        for (int i = 0; i + 1 < n; i++) {
            if (a[i] > a[i + 1]) {
                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }
}


int main() {
    int a[] = {3, 4, 2, 5, 1};
    sort(5, a);

    for (int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
}