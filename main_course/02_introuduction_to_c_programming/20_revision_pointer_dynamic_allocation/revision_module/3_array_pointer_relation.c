#include <stdio.h>

int main() {
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // for (int i = 0; i < 10; i++) {
    //     int *pai = &a[i];
    //     printf("%lld %d\n", pai, *pai);
    // }

    int *pa = a;
    printf("Array Address : %lld, Array value : %d\n", pa, *pa);
    printf("Array Address : %lld, Array value : %d\n", (pa + 1), *(pa + 1));

}