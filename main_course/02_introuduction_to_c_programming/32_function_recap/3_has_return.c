#include <stdio.h>

int get_length(char input[]) {
    int i = 0;
    while (input[i] != '\0') {
        i++;
    }
    return i;
}

int main() {
    char name[] = "Mehedi";
    int len = get_length(name);
    printf("%d", len);
}

/*
    2600 + 1300 + 
*/