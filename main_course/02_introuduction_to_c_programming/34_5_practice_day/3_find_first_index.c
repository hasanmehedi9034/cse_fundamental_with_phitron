#include <stdio.h>
#include <string.h>

int find_firstIndex(char a[], char b) {
    int n = strlen(a);
    for (int i = 0; i < n; i++) {
        if (a[i] == b) {
            return i;
        }
    }
    return -1;
}

int main() {
    char a[] = "hasanmehedim";
    char b = 'z';
    printf("%d", find_firstIndex(a, b));
}