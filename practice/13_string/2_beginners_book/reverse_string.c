#include <stdio.h>
#include <string.h>

int main() {
    char name[] = "mehedi";
    int length = strlen(name);

    char reverse_name[length];

    for (int i = 0, j = length - 1; i < length; i++, j--) {
        reverse_name[i] = name[j];
    }
    reverse_name[length] = '\0';

    int init = 0;
    while (reverse_name[init] != '\0') {
        printf("%s ", reverse_name[init]);
        init++;
    }

    // printf("%s", reverse_name);


    return 0;
}