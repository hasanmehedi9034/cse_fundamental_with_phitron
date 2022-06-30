#include <stdio.h>

int main() {
    FILE *fp = fopen("info.txt", "r");

    while (1) {
        char c;
        c = fgetc(fp);
        printf("%c", c);
        if (fp == NULL) {
            printf("file not founded\n");
            return 0;
        }
        if (c == EOF) break;
    }
}