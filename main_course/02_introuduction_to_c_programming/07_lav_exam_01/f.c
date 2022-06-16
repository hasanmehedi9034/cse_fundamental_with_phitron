#include <stdio.h>

int main() {
    // input
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a == 5) {
        if (b == 5) {
            if (c == 7) {
                printf("YES");
            }
        }
        else if (b == 7) {
            if (c == 5) {
                printf("YES");
            }
        }
        else {
            printf("NO");
        }
    }
    else if (a == 7) {
        if (b == 5) {
            if (c == 5) {
                printf("YES");
            }
        }
        else {
            printf("NO");
        }
    }
    else {
        printf("NO");
    }

    return 0;
}