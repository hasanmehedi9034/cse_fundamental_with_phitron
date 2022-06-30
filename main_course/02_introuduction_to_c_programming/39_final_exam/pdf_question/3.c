/*
----- what is the pointer --------
The Pointer in C, is a variable that stores address of another variable. A pointer can also be used to refer to another pointer function. A pointer can be incremented/decremented, i.e., to point to the next/ previous memory location. The purpose of pointer is to save memory space and achieve faster execution time.
*/

#include <stdio.h>

struct Fun {
    int sum;
};

int main() {
    // exmple of some pointer;
    int value = 20;
    int *p_value = &value;

    // sturct pointer
    struct Fun *p_fun, fun;
    p_fun = &fun;

    p_fun->sum = 10;
    printf("%d", fun.sum);
}