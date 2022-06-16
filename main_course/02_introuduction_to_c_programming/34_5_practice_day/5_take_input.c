#include <stdio.h>

void input_array (int n, int a[]) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

void print_array(int n, int a[]) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    
    input_array(n, a);
    print_array(n, a);
}