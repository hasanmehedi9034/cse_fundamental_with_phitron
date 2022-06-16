#include <stdio.h>

int sum(int n, int a[]) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    return sum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int ret = sum(5, arr);
    printf("%d", ret);
}