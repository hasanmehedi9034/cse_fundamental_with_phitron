#include <stdio.h>

void input_array(int n, int a[]) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

int make_average(int n, int a[]) {
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans = ans + a[i];
    }
    int avg = ans / n;
    return avg;
}

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    input_array(n, a);

    printf("%d", make_average(n, a));
}