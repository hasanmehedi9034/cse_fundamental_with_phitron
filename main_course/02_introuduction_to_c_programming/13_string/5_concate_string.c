#include <stdio.h>
#include<string.h>

int main() {
    char a[100] = "Hello";
    char b[100] = "World";

    int len_a = strlen(a);
    int len_b = strlen(b);

    // int len_c = len_a + len_b;
    // char c[len_c + 1];

    // for (int i = 0; i < len_a; i++) {
    //     c[i] = a[i];
    // }

    // for (int i = 0; i < len_b; i++) {
    //     c[len_a + i] = b[i];
    // }

    // c[len_a + len_b] = '\0';

    // printf("%s", c);

    strncat(a, b, 4);
    a[9] = '\0';
    printf("%s", a);

    return 0;
}