#include <stdio.h>

void change_value(int n, int ar[], int l, int r) {
    for (int i = l; i <= r; i++) {
        ar[i] = 0;
    }
}

void print_array(int n, int ar[]) {
    for (int i = 0; i < n; i++) {
        printf("%d ", ar[i]);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int ar[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }

    int l = 1, r = 3; // you can take value l and r form user by scanf function.
    change_value(n, ar, l, r);
    print_array(n, ar);
}