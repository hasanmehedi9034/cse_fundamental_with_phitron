#include <stdio.h>

int main() {
    FILE *inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("file not founded\n");
        return 0;
    }

    FILE *outFile = fopen("output.txt", "w");

    int n;
    fscanf(inputFile, "%d", &n);
    fprintf(outFile, "%d", n);

    fclose(inputFile);
    fclose(outFile);
}