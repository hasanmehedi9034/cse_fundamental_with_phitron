#include <stdio.h>

int main() {
    char description[100] = "this is my name, Mehedei";

    int i = 0;
    int count = 0;

    while(description[i] != '\0') {
        if (description[i] == ' ' || description[i] == '\n' || description[i] == '\t') {
            count++;
        }
        i++;
    }

    printf("%d", count + 1);
}