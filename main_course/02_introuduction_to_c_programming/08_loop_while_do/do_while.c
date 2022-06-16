#include <stdio.h>

int main() {
    int x = 4;

    do {
        scanf("%d", &x);
        printf("input is : %d\n", x);
    } while (x < 4);
    

    return 0;
}