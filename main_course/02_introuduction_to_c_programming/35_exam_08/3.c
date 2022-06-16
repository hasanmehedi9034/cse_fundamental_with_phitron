#include <stdio.h>
#include <string.h>

int count_zero(char a[]) {
    int n = strlen(a);
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == '0') {
            count++;
        }
    }
    return count;
}

int main() {
    char str[100];
    scanf("%s", &str);

    printf("%d", count_zero(str));
}