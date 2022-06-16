#include <stdio.h>

void make_copy(int n, int a[], int b[]) {

}

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int b[n];
    make_copy(n, a, b);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}