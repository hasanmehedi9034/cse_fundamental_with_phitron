#include <stdio.h>

void rotate(int n, int a[]) {
    int first = a[0];
    for (int i = 0; i < n; i++) {
        a[i] = a[i + 1]; 
    }
    a[n - 1] = first;
}

void rotate_k_times (int n, int a[], int k) {
    for (int i = 0; i < k % n; i++) {
        rotate(n, a);
    }
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int n = 5;
    int k = 2001;

    rotate_k_times(n, a, k);

    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }    
}

