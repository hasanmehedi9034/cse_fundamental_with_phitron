#include <stdio.h>

int main() {

    char a[100], b[100];
    scanf("%s %s", a, b);

    int index = 0;

    while (a[index] == b[index] && a[index] != '\0' && b[index] != '\0') {
        index++;
    }

    if (a[index] == '\0' && b[index] == '\0') {
        printf("Equal");
    }
    else if (a[index] == '\0' && b[index] != '\0') {
        printf("A is smaller");
    }
    else if (a[index] != '\0' && b[index] == '\0') {
        printf("B is smaller");
    }
    else if (a[index] < b[index]) {
        printf("A is smaller");
    }
    else {
        printf("B is smaller");
    }
    
    return 0;
}