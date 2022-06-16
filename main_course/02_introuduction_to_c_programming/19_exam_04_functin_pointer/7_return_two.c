#include <stdio.h>

void return_two(int *number1, int *number2) {
    *number1 = 2;
    *number2 = 3;
}

int main() {
    int number1, number2;
    return_two(&number1, &number2);

    printf("%d %d", number1, number2);
}