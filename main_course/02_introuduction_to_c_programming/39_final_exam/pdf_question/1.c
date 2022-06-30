/*
there are 4 way to use function.
1. Function with No argument and No return type.
2. Function with No argument and Return something.
3. A function that takes argument but returns nothing.
4. Functions that take an argument and also return something.
*/

#include <stdio.h>

// 1. no argument and no return type
void print_hello() {
    printf("Hello!");
}

// 2. no argument with return something
int return_something() {
    return 100;
}

// 3. take argument and return nothing
void sum (int a, int b) {
    printf("number-1: %d, number-2: %d", a, b);
}

// 4. take argument and return something
int sum (int a, int b) {
    return a + b;
}

int main() {
    
}