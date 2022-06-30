#include <stdio.h>

int main() {
    FILE *fp = fopen("test_file.txt", "w");
    
    int i;
    for (i = 65; i <= 90; i++) {
        fputc(i, fp);
        fputc(32, fp);
    }

    char arr[100] = "Hi, I am Good!";
    fputs(arr, fp);
    fprintf(fp, "Hey this is mehedi age %d", 34);

    fclose(fp);
}