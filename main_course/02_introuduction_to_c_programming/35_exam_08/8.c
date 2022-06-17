#include <stdio.h>
#include <stdbool.h>

// has return + has parameter
bool odd_even1(int number) {
    if (number % 2 == 0) return true; 
    return false;
}

// no  return + has parameter
void odd_even2(int number) {
    if (number % 2 == 0) {
        printf("even, no return + has parameter\n");
    }
    else {
        printf("odd, no return + has parameter\n");
    }
}

// has return + no parameter
bool odd_even3() {
    int number = 10;
    if (number % 2 == 0) return true;
    return false;
}

// no return + no parameter
void odd_even4() {
    int number = 10;
    if (number % 2 == 0) {
        printf("odd, no return + no parameter\n");
    }
    else {
        printf("odd, no return + no parameter\n");
    }
}

int main() {
    // has retutn + has parameter 
    int number = 10;
    odd_even1(number) ? printf("even, has return + has parameter\n") : printf("odd, has return + has parameter\n");

    // no return + has parameter
    odd_even2(number);

    // has return + no parameter
    odd_even3() ? printf("even, has return + no parameter\n") : printf("odd, has return + no parameter\n");

    // no return + no parameter
    odd_even4();
}