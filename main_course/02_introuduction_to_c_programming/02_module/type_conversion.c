#include <stdio.h>

int main() {
    // int number = 10;
    // double real_Number = 10.6;
    // printf("number = %d \n", (int)real_Number);
    // printf("number = %d \n", real_Number);

    int number1, number2;

    number1 = 20;
    number2 = 8;

    double vagfol = (double)number1 / (double)number2;

    printf("%d / %d = %0.2lf \n",number1, number2, vagfol);
    printf("%d", number1);

    return 0;
}