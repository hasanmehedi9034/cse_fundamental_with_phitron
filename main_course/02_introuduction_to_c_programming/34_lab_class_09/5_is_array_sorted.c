#include <stdio.h>
#include <stdbool.h>

bool is_sorted(int n, int a[]) {
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            return false;
        }
    }
    return true;
}


int main() {
    int a[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(a) / sizeof(a[0]);

    is_sorted(n, a) ? printf("yes") : printf("no");
}