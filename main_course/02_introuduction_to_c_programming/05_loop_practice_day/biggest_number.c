#include <stdio.h>

int main() {

    int a, b, biggest_number;
    scanf("%d %d", &a, &b);

    biggest_number = a > b ? a : b;
    printf("biggest is %d", biggest_number);

    return 0;
}