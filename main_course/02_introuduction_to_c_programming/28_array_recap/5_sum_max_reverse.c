#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int min(int a, int b) {
    if (a > b) return b;
    else return a;
}

int max (int a, int b) {
    if (a > b) return a;
    else return b;
}

int min_of_arry(int n, int a[]) {
    int result = a[0];
    for (int i = 0; i < n; i++) {
        result = min(result, a[i]);
    }
    return result;
}

int max_of_arry(int n, int a[]) {
    int result = a[0];
    for (int i = 0; i < n; i++) {
        result = max(result, a[i]);
    }
    return result;
}

int sum_of_array(int n, int a[]) {
    int result = 0;
    for (int i = 0; i < n; i++) {
        result = sum(result, a[i]);
    }
    return result;
}

void reverse_array(int n, int a[]) {
    int temp = a[0];
    for (int i = 0, j = n - 1; i < n; i++, j--) {
        a[i] = a[j];
    }
    a[n - 1] = temp;
}

void print_array(int n, int a[]) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}

int main() {
    int a[] = {10, 20, 30, 40, 0};
    int n = sizeof(a) / sizeof(a[0]);

    printf("%d\n", sum_of_array(n, a));
    printf("%d\n", min_of_arry(n, a));
    printf("%d\n", max_of_arry(n, a));

    print_array(n, a);
}