#include <stdio.h>
#include <string.h>

int main() {
    int *ptr;
    char str[] = "Hello";

    char *first = str;
    char *ch = strchr(str, 'l');
    // printf("%c", *ch);
    printf("%d", ch - first);
}