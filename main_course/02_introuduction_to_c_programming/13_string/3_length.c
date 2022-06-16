#include <stdio.h>
#include <string.h>

int main() {

    char str[100] = "Hello world";

    int idx = 0;

    while (str[idx] != '\0') {
        idx++;
    }

    int len = strlen(str);
    printf("%d", len);

    // printf("%d", idx);

    return 0;
}