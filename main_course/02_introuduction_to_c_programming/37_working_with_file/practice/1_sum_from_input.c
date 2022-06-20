#include <stdio.h>

int main(){
    FILE *inputFile = fopen("input.txt", "r");
    if (inputFile == NULL){
        printf("file is not founded\n");
        return 0;
    }

    FILE *outputFile = fopen("output.txt", "w");
    int sum = 0;
    int n;
    fscanf(inputFile, "%d", &n);

    for (int i = 0; i < n; i++){
        int a;
        fscanf(inputFile, "%d", &a);
        sum += a;
    }
    printf("sum is : %d", sum);
    fprintf(outputFile, "sum is : %d", sum);
}