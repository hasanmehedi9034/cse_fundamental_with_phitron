#include <stdio.h>

int main() {
    FILE *output_file = fopen("log.txt", "a");
    fprintf(output_file, "hello\n");
    fclose(output_file);
}