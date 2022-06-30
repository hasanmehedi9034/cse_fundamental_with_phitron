#include <stdio.h>

int make_positive (int n) {
    if (n < 0) return (-1) * n;
    return n;
}

void print_array(int n, int a[]) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}

void change_array (int n, int arr[]) {
    arr[n] = 0;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int ans = 0;
    for (int i = 0; i < m; i++) {
        int bigger = arr[i];
        int bigger_index = i;
        for (int j = 0; j < n; j++) {
            if ((arr[j] < 0) && (bigger > arr[j])) {
                bigger = arr[j];
                bigger_index = j;
            }
        }
        if (bigger && (bigger < 0)) {
            ans += bigger;
        }
        change_array(bigger_index, arr);
    }
    printf("%d", make_positive(ans));
}