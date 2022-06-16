#include <stdio.h>

int sum (int a, int b) {
    return a + b;
}

int get_sum (int n, int a[]){
    int res = 0;
    for (int i = 0; i < n; i++) {
        res = sum(res, a[i]);
    }
    return res;
}

int main() {
    int a[] = {1, 2, 3, 4, 5, 5};
    int n = sizeof(a) / sizeof(a[0]);

    printf("%d", get_sum(n, a));
}