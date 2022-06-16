#include <stdio.h>

int main() {
    // int n, reverse = 0, remainder;
    // scanf("%d", &n);

    // int demo = n;

    // while (n != 0) {
    //     remainder = n % 10;
    //     reverse = reverse * 10 + remainder;
    //     n /= 10;
    // }

    // printf("Reversed number = %d + %d = %d", reverse, demo , reverse + demo);

    int number;
    scanf("%d", &number);
    int a, b, c;
    c = number % 10;

    number = number / 10;
    b = number % 10;

    number = number / 10;
    a = number % 10;

    int number1= (a * 100) + (b * 10) + c;
    int number2 = (b * 100) + (c * 10) + a;
    int number3 = (c * 100) + (a * 10) + b;

    printf("%d", number1 + number2 + number3);

    return 0;
}