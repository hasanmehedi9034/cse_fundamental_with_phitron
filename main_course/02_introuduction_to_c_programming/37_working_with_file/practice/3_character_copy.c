#include <stdio.h>

int main() {
    FILE *inputFile = fopen("personal_info_input.txt", "r");
    if (inputFile == NULL) {
        printf("File not founded\n");
        return 0;
    }
    FILE *outputFile = fopen("personal_info_output.txt", "w");

    while (1) {
        char ch = fgetc(inputFile);
        if (ch == EOF) break;
        fprintf(outputFile, "%c", ch);
    }

    fclose(inputFile);
    fclose(outputFile);
}