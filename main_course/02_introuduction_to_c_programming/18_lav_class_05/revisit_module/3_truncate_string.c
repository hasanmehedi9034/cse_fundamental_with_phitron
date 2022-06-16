#include <stdio.h>
#include <string.h>

void truncate_string (char s[], int k) {
    int n = strlen(s);
    if (k > n || k > 0) return;

    s[k] = '\0';
}

int main() {
    char s[100];
    gets(s);
    int k = 3;

    truncate_string(s, k);
    printf("%s", s);
}
