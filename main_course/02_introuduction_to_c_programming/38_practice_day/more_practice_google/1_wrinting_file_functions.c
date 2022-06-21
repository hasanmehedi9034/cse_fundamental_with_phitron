#include <stdio.h>

int main() {
    FILE *fp = fopen("detail.txt", "w+");

    char name[] = "Mehedi hasan\n";
    for (int i = 0; name[i] != '\0'; i++) {
        fputc(name[i], fp);
    }
    
    fputs("Hello Mehedi\n", fp);
    fprintf(fp, "age %d years old.", 24);

    fclose(fp);
}