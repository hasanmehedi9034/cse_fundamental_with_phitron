#include <stdio.h>
#include <string.h>

int check_palindrome(char a[]) {
    int n = strlen(a);
    int count = 0;
    for (int i = 0, j = n - 1; i < j; i++, j--) {
        if (a[i] != a[j]) count++;
    }
    return count;
}

int main() {
    char a[100];
    scanf("%s", &a);

    int min_change_char = check_palindrome(a);
    printf("%d", min_change_char);
}