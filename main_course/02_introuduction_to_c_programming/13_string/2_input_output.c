#include <stdio.h>

int main() {
    // char str[] = "Hello world";
    // printf("%s", str);
    // puts(str);

    printf("Enter your name : ");
    char name[100];
    fgets(name, 10, stdin);

    printf("Hello, %s", name);
}