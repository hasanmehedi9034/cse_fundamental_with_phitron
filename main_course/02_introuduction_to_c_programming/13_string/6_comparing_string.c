#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100];
    scanf("%s %s", a, b);

    int idx = 0;

    while (a[idx] == b[idx] && a[idx] != '\0' && b[idx] != '\0') {
        idx++;
    }

    if (a[idx] == '\0' && b[idx] == '\0') {
        printf("equal");
    }
    else if (a[idx] == '\0' && b[idx] != '\0') {
        printf("a is smaller");
    }
    else if (a[idx] != '\0' && b[idx] == '\0') {
        printf("b is smaller");
    }
    else if (a[idx] < b[idx]) {
        printf("a is smaller");
    }
    else {
        printf("b is smaller");
    }

    int val = strcmp(a, b);
    printf("%d", val);
    
    return 0;
}

/*
lexicographical order
1. find first mismatch
2. if both string end, equal
3. if one string ends, that is smaller
4. 


apple 
banana
cucumber
dog
*/
