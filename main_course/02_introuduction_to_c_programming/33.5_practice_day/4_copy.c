#include <stdio.h>
#include <string.h>

void cp (char a[], char b[]) {
    int len_a = strlen(a);

    int i;
    for (i = 0; i < len_a; i++) {
        b[i] = a[i];
    }
    b[i] = '\0';
}

int main() {
    char a[] = "Mehedi";
    char b[100];
 
    cp(a, b);
    printf("%s %s", a, b);
}