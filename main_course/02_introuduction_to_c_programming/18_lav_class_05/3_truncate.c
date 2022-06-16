#include <stdio.h>
#include <string.h>

void truncate(char s[], int k) {
    int n = strlen(s);
    if (n < k || k < 0) return;
    s[k] = '\0';
}

int main() {
    char s[100];
    gets(s);

    int k;
    scanf("%d", &k);
    truncate(s, k);

    printf("%s", s);
}