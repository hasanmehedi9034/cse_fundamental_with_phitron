#include <stdio.h>

void rotate(int n, int a[]) {
    int first = a[0];

    for (int i = 0; i < n; i++) {
        a[i] = a[i + 1];
    }
    a[n - 1] = first;
}

void rotate_by_k (int n, int a[], int k) {
    k = k % n;
    for (int i = 0; i < k; i++) {
        rotate(n, a);
    }
}

int main() {

}

/*
a = {1, 2, 3};
rotate(a);
a > {2, 3, 1};

*/