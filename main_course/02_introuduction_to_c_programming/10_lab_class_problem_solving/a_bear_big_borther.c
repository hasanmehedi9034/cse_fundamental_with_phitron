#include <stdio.h>
#include <stdbool.h>

int main() {

    int a = 4, b = 9;

    int years = 0;

    while (a <= b) {
        a = a * 3;
        b = b * 2;
        years++;

        // if (a > b) break;
    }
    
    printf("%d", years);

    return 0;
}