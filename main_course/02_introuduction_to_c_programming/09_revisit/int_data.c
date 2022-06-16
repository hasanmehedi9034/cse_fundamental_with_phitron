#include <stdio.h>

int main() {
    int power_of_10 = 1;
    for (int i = 0; i <= 10; i++) {
        printf("%d\n", power_of_10);
        power_of_10 *= 10;
    }

    unsigned int price = -10;
    printf("%u", price);
    return 0;
}