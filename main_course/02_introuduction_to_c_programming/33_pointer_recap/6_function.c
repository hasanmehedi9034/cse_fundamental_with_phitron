#include <stdio.h>

int *send (void) {
    int x = 100;
    return &x;
}

int main() {
    int *ptr = send();
    printf("%d", ptr);
}