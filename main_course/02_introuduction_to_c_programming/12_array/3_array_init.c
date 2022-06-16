#include <stdio.h>

int main() {
    // double values[10];

    // for (int i = 0; i < 10; i++) {
    //     values[i] = i + 1;
    // }

    // for (int i = 0; i < 10; i++) {
    //     printf("%lf\n", values[i]);
    // }

    // double values1[] = {1, 2, 3, 4, 5, 6};
    // double values2[] = {1, 2, 3};
    // double values3[] = {1, 2, 3, 4};

    char word[] = {'h', 'e', 'l', 'l', '0'};

    int size = sizeof(word) / sizeof(word[0]);
    printf("size of the array : %d\n", size);

    for(int i = 0; i < size; i++) {
        putchar(word[i]);
    }
    return 0;
}