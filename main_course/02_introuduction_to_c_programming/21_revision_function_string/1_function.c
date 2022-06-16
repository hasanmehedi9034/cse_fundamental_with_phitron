#include <stdio.h>

int make_square(int a) {
    return a * a;
}

void print_square(int a)  {
    printf("%d\n", make_square(a));
}

char getAt(int x) {
    return 'A' + x - 1;
}

void say_hello() {
    printf("Hello");
}

int main() {
    // for (int i = 1; i < 10; i++) {
    //     printf("%d %d\n", i, make_square(i));
    // }

    print_square(4);
    say_hello();
}