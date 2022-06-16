#include <stdio.h>
#include <string.h>

int main() {
    int *ptr;

    char str[] = "Hello";

    char *first = str;

    char *ch = strchr(str, 'e');

    if (!ch) {
        printf("found null, no occurence");
    }
    else {
        printf("this is not null pointer");
    }
}