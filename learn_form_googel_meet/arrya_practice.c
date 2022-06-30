#include <stdio.h>

int get_max(int a, int b) {
    if  (a > b) return a;
    return b;
}

int main() {
    int max_number = get_max(1, 5);
    int a[max_number];
    for (int i = 0; i < max_number; i++) {
        scanf("%d", &a[i]);
    }
    printf("%d", a[4]);
}