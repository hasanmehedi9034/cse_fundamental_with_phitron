#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int find_lastIndex(char a[], char b) {
    int n = strlen(a);
    int ans = 0;
    bool is_get_char = false;
    for (int i = 0; i < n; i++) {
        if (a[i] == b) {
            ans = i;
            is_get_char = true;
        }
    }
    ans = is_get_char ? ans : -1;
    return ans;
}

int main() {
    char a[] = "mehedihasaneti";
    char b = 'e';

    printf("%d", find_lastIndex(a, b));
}