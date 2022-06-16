#include <stdio.h>
#include <stdbool.h>


int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    if ( b != 0) {
        if (a % b == 0) {
            printf("divisible. \n");
        }
        else {
            printf("not divisible.");
        }
    }
    else {
        printf("you can't divided by zero");
    }

    return 0;
}






