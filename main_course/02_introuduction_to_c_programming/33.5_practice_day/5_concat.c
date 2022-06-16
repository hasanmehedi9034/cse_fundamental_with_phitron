#include <stdio.h>
#include <string.h>

void concat (char a[], char b[]) {
    int len1 = strlen(a);
    int len2 = strlen(b);

    int i;
    for (i = 0; i < len2; i++) {
        a[len1 + i] = b[i];
    }
    a[len1 + i] = '\0';
}

int main() {
    char name1[] = "mehedieti";
    char name2[] = "hasan";

    int len1 = strlen(name1);
    int len2 = strlen(name2);

    concat(name1,name2);
    printf("%s", name1);
}