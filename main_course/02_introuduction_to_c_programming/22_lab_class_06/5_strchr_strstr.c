#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello";
    for (int i = 0; i < 6; i++) {
        printf("%c %d\n", str[i], str[i]);
    }
}