#include <stdio.h>

int main() {
    // input
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if(c >= a && b >= c) {
        printf("Yes");
    }
    else {
        printf("No");
    }


    return 0;
}