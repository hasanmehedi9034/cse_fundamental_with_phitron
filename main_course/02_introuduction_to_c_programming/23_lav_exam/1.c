#include <stdio.h>

void pass_by_value (int a, int b) {
    a = 5;
    b = 6;
}

void pass_by_address(int *a, int *b) {
    *a = 5;
    *b = 6;
}

int main() {
    int number1 = 1; 
    int number2 = 2;

    pass_by_value(number1, number2); // this is not change actual value of number1 and number2;

    pass_by_address(&number1, &number2); // it changes original value of number1 and number2
}

/*
Pass by value passes a copy of that variable. not acctual address. that can not change the original value.

Pass by address passes address of that variable. that changes acctual value of that variable.
*/