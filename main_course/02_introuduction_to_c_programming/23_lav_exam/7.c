#include <stdio.h>
#include <stdbool.h>

bool is_sorted(int a, int b) {
    if (a > b) {
        return true;
    }
    return false;
}

bool is_reverese_sorted (int n, int arr[]) {
    for (int i = 0; i < n - 1; i++){
        if (!is_sorted(arr[i], arr[i + 1])) {
            return false;
        }
    }
    return true;
}

int main() {
    int a[] = {6, 4, 3, 2};
    int n = sizeof(a) / sizeof(a[0]);

    printf("%s", is_reverese_sorted(n, a) ? "true" : "false");
}