#include <stdio.h>

int main() {
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < 10; i++) {
        int *pai = &a[i];
        printf("%lld %d\n", pai, *pai);
    }
    
    // int *pa = a;
    // printf("Array Address : %lld\n", pa);
    // printf("Array address %lld, value %d\n", a, *a);
    // printf("Array address %lld, value %d\n", a + 5, *(a + 5));

    for (int i = 0; i < 10; i++) {
        printf("%d %d\n", *(a + i), a[i]);
    }
}