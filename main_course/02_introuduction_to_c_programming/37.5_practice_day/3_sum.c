#include <stdio.h>

int main() {
    FILE *input_file = fopen("in.txt", "r");
    if (input_file == NULL) {
        printf("file not  founded\n");
        return 0;
    }

    FILE *output_file = fopen("out.txt", "w");

    int sum = 0;
    for (int i = 0; i < 2; i++) {
        int a;
        fscanf(input_file, "%d", &a);
        sum += a;
    }

    fprintf(output_file, "sum is : %d", sum);
    fclose(input_file);
    fclose(output_file);
}