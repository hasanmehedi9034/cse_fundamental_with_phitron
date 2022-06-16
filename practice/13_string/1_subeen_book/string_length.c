#include <stdio.h>

int main() {
    char st[100];
    gets(st);

    int lenght = 0;
    while (st[lenght] != '\0') {
        lenght++;
    }

    printf("%d", lenght);

    return 0;
}