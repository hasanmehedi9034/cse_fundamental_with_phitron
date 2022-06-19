#include <stdio.h>

int main() {
    FILE *inputFile;
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("No file founded\n");
        return 0;
    }

    FILE *outFile;
    outFile = fopen("output.txt", "w");

    while (1) {
        char ch = fgetc(inputFile);
        if (ch == EOF) break;
        printf("%c", ch);

        fputc(ch, outFile);
    }
}