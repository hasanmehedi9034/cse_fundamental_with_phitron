#include <stdio.h>
#include <string.h>

void stringCat(char a[], char b[], char out[]) {
    int i = 0, j = 0;
    while(a[i] != '\0') {
        out[i] = a[i];
        i++;
    }

    while (b[j] != '\0') {
        out[i] = b[j];
        j++;
        i++;
    }
    out[i] = '\0';
}

int main() {
    char a[] = "mehedi";
    char b[] = "hasan";
    char out[strlen(a) + strlen(b)];

    stringCat(a, b, out);
    printf("%s", out);
}