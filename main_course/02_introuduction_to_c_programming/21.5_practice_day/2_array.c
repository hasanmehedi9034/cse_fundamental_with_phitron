#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    int *pa = a;
    for (int i = 0; i < n; i++) {
        scanf("%d", pa);
        pa++;
    }

    int *pb = a;
    for (int i = 0; i < n; i++) {
        printf("%d no element is %d\n", i, *pa);
        pa++;
    }
}