#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if((a == b && b == c)) {
        printf("No");
    }
    else if (a != b && b != c && c != a) {
        printf("No");
    }
    else {
        printf("yes");
    }

    return 0;
}