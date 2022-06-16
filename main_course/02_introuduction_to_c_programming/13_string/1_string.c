#include <stdio.h>

int main() {
    char st[] = "This is a string.";

    int size = sizeof(st) / sizeof(st[0]);
    // printf("%d", size);

    for (int i = 0; i < size; i++) {
        printf("%d -> %c (ASCII = %d)\n", i, st[i], st[i]);
    }

    return 0;
}