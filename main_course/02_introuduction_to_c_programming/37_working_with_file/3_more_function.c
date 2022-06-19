#include  <stdio.h>

int main() {
    FILE *inputFile;
    inputFile = fopen("input.txt", "r");
    
    FILE *outFile;
    outFile = fopen("output.txt", "w");

    if (inputFile == NULL) {
        fprintf(outFile, "File not founded");
        return 0;
    }

    int  n;
    fscanf(inputFile, "%d", &n);

    int sum = 0;
    for (int i = 0; i < n; i++) {
        int a;
        fscanf(inputFile, "%d", &a);
        sum += a;
    }
    fprintf(outFile, "sum is : %d", sum);
    printf("data save succesfully.");
}