#include <stdio.h>

int main() {
    FILE *fp = fopen("test_file.txt", "a+");

    int c;
    c = fgetc(fp);
    printf("%c\n", c);

    char buffer[100];
    fscanf(fp, "%s", buffer);
    printf("data is buffer is : %s\n", buffer);

    fgets(buffer, 99, fp);
    printf("%s", buffer);
}